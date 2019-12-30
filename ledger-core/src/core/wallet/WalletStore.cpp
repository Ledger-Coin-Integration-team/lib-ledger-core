#include <core/wallet/WalletDatabaseHelper.hpp>
#include <core/wallet/WalletStore.hpp>

namespace ledger {
    namespace core {
        WalletStore::WalletStore(std::shared_ptr<Services> const& services):
            DedicatedContext(services->getDispatcher()->getSerialExecutionContext("wallet_store_queue")),
            _services(services) {
        }

        Future<int64_t> WalletStore::getWalletCount() const {
            auto services = _services;

            return async<int64_t>([=] () -> int64_t {
                soci::session sql(services->getDatabaseSessionPool()->getPool());
                return WalletDatabaseHelper::getWalletCount(sql);
            });
        }

        Future<std::vector<std::shared_ptr<AbstractWallet>>> WalletStore::getWallets(
            int64_t from,
            int64_t size
        ) {
            auto self = shared_from_this();

            return async<std::vector<std::shared_ptr<AbstractWallet>>>([=] () {
                std::vector<WalletDatabaseEntry> entries((size_t) size);
                soci::session sql(self->_services->getDatabaseSessionPool()->getPool());
                auto count = WalletDatabaseHelper::getWallets(sql, from, entries);

                std::vector<std::shared_ptr<AbstractWallet>> wallets((size_t) count);
                for (auto i = 0; i < count; i++) {
                    wallets[i] = self->buildWallet(entries[i]);
                }

                return wallets;
            });
        }

        FuturePtr<AbstractWallet> WalletStore::getWallet(std::string const& name) {
            auto self = shared_from_this();

            return async<std::shared_ptr<AbstractWallet>>([=] () {
                auto it = self->_wallets.find(WalletDatabaseEntry::createWalletUid(self->_services->getTenant(), name));
                if (it != self->_wallets.end()) {
                    auto ptr = it->second;

                    if (ptr != nullptr) {
                        return ptr;
                    }
                }

                auto entry = self->getWalletEntryFromDatabase(name);
                if (!entry.hasValue()) {
                    throw Exception(api::ErrorCode::WALLET_NOT_FOUND, fmt::format("Wallet '{}' doesn't exist.", name));
                }
                return self->buildWallet(entry.getValue());
            });
        }

        Future<api::ErrorCode> WalletStore::updateWalletConfig(
            const std::string &name,
            const std::shared_ptr<api::DynamicObject> &configuration
        ) {
            auto self = shared_from_this();

            return async<api::ErrorCode>([=] () {
                auto entry = self->getWalletEntryFromDatabase(name);

                if (!entry.hasValue()) {
                    return api::ErrorCode::INVALID_ARGUMENT;
                }

                // Wallet exists, let's update its configuration
                auto walletEntry = entry.getValue();
                walletEntry.configuration->updateWithConfiguration(std::static_pointer_cast<ledger::core::DynamicObject>(configuration));

                soci::session sql(self->_services->getDatabaseSessionPool()->getPool());
                WalletDatabaseHelper::putWallet(sql, walletEntry);

                // No need to check if currency supported (factory non null), because we are supposed to fetch
                // walletEntry from database, which implies that it was already checked before at creation
                self->_wallets[walletEntry.uid] = self->getFactory(walletEntry.currencyName)->build(walletEntry);
                return api::ErrorCode::FUTURE_WAS_SUCCESSFULL;
            });
        }

        Future<std::vector<std::string>> WalletStore::getWalletNames(
            int64_t from,
            int64_t size
        ) const {
            auto self = shared_from_this();

            return async<std::vector<std::string>>([=] () -> std::vector<std::string> {
                soci::session sql(self->_services->getDatabaseSessionPool()->getPool());
                std::vector<WalletDatabaseEntry> entries((size_t) size);

                auto count = WalletDatabaseHelper::getWallets(sql, from, entries);
                std::vector<std::string> names((size_t) count);

                auto index = 0;
                for (const auto& entry : entries) {
                    names[index] = entry.name;
                    index += 1;
                }

                return names;
            });
        }

        FuturePtr<AbstractWallet> WalletStore::createWallet(
            std::string const& name,
            std::string const& currencyName,
            std::shared_ptr<api::DynamicObject> const& configuration
        ) {
            auto self = shared_from_this();

            return async<std::shared_ptr<AbstractWallet>>([=] () {
                auto factory = self->getFactory(currencyName);
                if (factory == nullptr) {
                    throw make_exception(api::ErrorCode::CURRENCY_NOT_FOUND, "Currency '{}' not found.");
                }

                // Create the entry
                soci::session sql(self->_services->getDatabaseSessionPool()->getPool());
                soci::transaction tr(sql);

                WalletDatabaseEntry entry;
                entry.name = name;
                entry.configuration = std::static_pointer_cast<ledger::core::DynamicObject>(configuration);
                entry.currencyName = currencyName;
                entry.tenant = self->_services->getTenant();
                entry.uid = WalletDatabaseEntry::createWalletUid(self->_services->getTenant(), name);
                if (WalletDatabaseHelper::walletExists(sql, entry))
                    throw make_exception(api::ErrorCode::WALLET_ALREADY_EXISTS, "Wallet '{}' for currency '{}' already exists", name, currencyName);

                WalletDatabaseHelper::putWallet(sql, entry);
                auto wallet = self->buildWallet(entry);
                tr.commit();

                return wallet;
            });
        }

        bool WalletStore::registerFactory(
            api::Currency const& currency,
            std::shared_ptr<AbstractWalletFactory> const& factory
        ) {
            if (_factories.find(currency.name) != _factories.end()) {
                // factory already registered
                return false;
            }

            _factories.insert({ currency.name, factory });
            return true;
        }

        std::shared_ptr<AbstractWalletFactory> WalletStore::getFactory(
            const std::string &currencyName
        ) const {
            auto it = _factories.find(currencyName);

            if (it != _factories.end()) {
                return it->second;
            }

            return nullptr;
        }

        std::shared_ptr<AbstractWallet> WalletStore::buildWallet(WalletDatabaseEntry const& entry) {
            // Check if the wallet already exists
            auto it = _wallets.find(entry.uid);
            if (it != _wallets.end()) {
                return it->second;
            } else {
                auto factory = getFactory(entry.currencyName);
                if (factory == nullptr) {
                    throw Exception(api::ErrorCode::UNSUPPORTED_CURRENCY,
                                    fmt::format("Wallet '{}' uses an unsupported currency ''{}", entry.name,
                                                entry.currencyName)
                    );
                }
                auto wallet = factory->build(entry);
                _services->getEventPublisher()->relay(wallet->getEventBus());
                _wallets[entry.uid] = wallet;

                std::weak_ptr<WalletStore> weakSelf = shared_from_this();
                _services->getEventPublisher()->setFilter([weakSelf] (const std::shared_ptr<api::Event>& event) -> bool {
                    auto self = weakSelf.lock();
                    if (self && event->getCode() == api::EventCode::NEW_BLOCK) {
                        std::lock_guard<std::mutex> lock(self->_eventFilterMutex);
                        auto height = event->getPayload()->getLong(api::Account::EV_NEW_BLOCK_HEIGHT);
                        auto currency = event->getPayload()->getString(api::Account::EV_NEW_BLOCK_CURRENCY_NAME);
                        auto lastBlockEmitted = self->_lastEmittedBlocks.find(currency.value());

                        if (lastBlockEmitted != self->_lastEmittedBlocks.end() && height > lastBlockEmitted->second) {
                            self->_lastEmittedBlocks[currency.value()] = height.value();
                            return true;
                        } else {
                            return false;
                        }
                    }

                    return true;
                });

                return wallet;
            }
        }

        Option<WalletDatabaseEntry> WalletStore::getWalletEntryFromDatabase(std::string const& name) {
            WalletDatabaseEntry entry;
            soci::session sql(_services->getDatabaseSessionPool()->getPool());

            if (!WalletDatabaseHelper::getWallet(sql, _services->getTenant(), name, entry)) {
                return Option<WalletDatabaseEntry>();
            }

            return Option<WalletDatabaseEntry>(entry);
        }
    }
}
