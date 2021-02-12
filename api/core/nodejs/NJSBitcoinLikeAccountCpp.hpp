// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_like_wallet.djinni

#ifndef DJINNI_GENERATED_NJSBITCOINLIKEACCOUNT_HPP
#define DJINNI_GENERATED_NJSBITCOINLIKEACCOUNT_HPP


#include "NJSAddressCpp.hpp"
#include "NJSAddressListCallback.hpp"
#include "NJSBigIntListCallback.hpp"
#include "NJSBitcoinLikeOutputListCallback.hpp"
#include "NJSBitcoinLikeTransactionBuilderCpp.hpp"
#include "NJSBitcoinLikeTransactionCpp.hpp"
#include "NJSI32Callback.hpp"
#include "NJSStringCallback.hpp"
#include <cstdint>
#include <memory>
#include <vector>

#include <nan.h>
#include <node.h>
#include "../../../core/src/api/BitcoinLikeAccount.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSBitcoinLikeAccount final {
public:

    static void Initialize(Local<Object> target);
    NJSBitcoinLikeAccount() = delete;

    static Local<Object> wrap(const std::shared_ptr<ledger::core::api::BitcoinLikeAccount> &object);
    static Nan::Persistent<ObjectTemplate> BitcoinLikeAccount_prototype;

private:
    /**
     * Get UTXOs of account in a given range.
     * @param from, integer, lower bound for account's UTXO's index
     * @param to, integer, upper bound for account's UTXO's index
     * @param callback, ListCallback object which returns a list of BitcoinLikeOutput if getUTXO succeed
     */
    static NAN_METHOD(getUTXO);

    /**
     * Get UTXOs count of account.
     * @param callback, Callback object which returns number of UTXO owned by this account
     */
    static NAN_METHOD(getUTXOCount);

    static NAN_METHOD(broadcastRawTransaction);

    static NAN_METHOD(broadcastTransaction);

    static NAN_METHOD(buildTransaction);

    /**
     * Get fees from network, fees are ordered in descending order (i.e. fastest to slowest confirmation)
     * Note: it would have been better to have this method on BitcoinLikeWallet
     * but since BitcoinLikeWallet is not used anywhere, it's better to keep all
     * specific methods under the same specific class so it will be easy to segratate
     * when the right time comes !
     */
    static NAN_METHOD(getFees);

    /**
     * Get addresses given a range of indices
     * Note: this will return public and change addresses
     */
    static NAN_METHOD(getAddresses);

    /** get all contained adresses. */
    static NAN_METHOD(getAllAddresses);

    static NAN_METHOD(New);

    static NAN_METHOD(isNull);
};
#endif //DJINNI_GENERATED_NJSBITCOINLIKEACCOUNT_HPP
