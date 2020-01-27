/*
 *
 * EthereumLikeOperation
 *
 * Created by El Khalil Bellakrid on 14/07/2018.
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2018 Ledger
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 */

#pragma once

#include <core/operation/Operation.hpp>
#include <core/wallet/AbstractWallet.hpp>

#include <ethereum/api/EthereumLikeOperation.hpp>
#include <ethereum/api/EthereumLikeTransaction.hpp>
#include <ethereum/api/InternalTransaction.hpp>
#include <ethereum/explorers/EthereumLikeBlockchainExplorer.hpp>

namespace ledger {
    namespace core {
        class EthereumLikeOperation : public api::EthereumLikeOperation, public Operation {
        public:
            EthereumLikeOperation() = default;

            EthereumLikeOperation(
                const std::shared_ptr<const AbstractWallet>& wallet,
                EthereumLikeBlockchainExplorerTransaction const& tx);

            EthereumLikeOperation(
                const std::shared_ptr<Operation>& operation,
                EthereumLikeBlockchainExplorerTransaction const& tx);

            std::shared_ptr<api::EthereumLikeTransaction> getTransaction() const override;
            std::vector<std::shared_ptr<api::InternalTransaction>> getInternalTransactions() override;

            void refreshUid(std::string const &additional = "") override;
            bool isComplete() override;

            const EthereumLikeBlockchainExplorerTransaction& getExplorerTransaction() const;
            EthereumLikeBlockchainExplorerTransaction& getExplorerTransaction();
            void setExplorerTransaction(EthereumLikeBlockchainExplorerTransaction const& tx);

        private:
            std::shared_ptr<api::EthereumLikeTransaction> _tx;
            EthereumLikeBlockchainExplorerTransaction _explorerTx;
            std::vector<std::shared_ptr<api::InternalTransaction>> _internalTxs;
            // To allow lazy loading of internal transactions
            bool _internalTxsRetrieved;
        };

    }
}
