// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet.djinni

#ifndef DJINNI_GENERATED_NJSCOSMOSLIKEACCOUNT_HPP
#define DJINNI_GENERATED_NJSCOSMOSLIKEACCOUNT_HPP


#include "../../../core/src/api/CosmosGasLimitRequest.hpp"
#include "NJSAmountCallback.hpp"
#include "NJSBigIntCallback.hpp"
#include "NJSCosmosLikeDelegationListCallback.hpp"
#include "NJSCosmosLikeMessageCpp.hpp"
#include "NJSCosmosLikeRedelegationListCallback.hpp"
#include "NJSCosmosLikeRewardListCallback.hpp"
#include "NJSCosmosLikeTransactionBuilderCpp.hpp"
#include "NJSCosmosLikeTransactionCpp.hpp"
#include "NJSCosmosLikeUnbondingListCallback.hpp"
#include "NJSCosmosLikeValidatorCallback.hpp"
#include "NJSCosmosLikeValidatorListCallback.hpp"
#include "NJSStringCallback.hpp"
#include <memory>
#include <string>

#include <nan.h>
#include <node.h>
#include "../../../core/src/api/CosmosLikeAccount.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSCosmosLikeAccount final {
public:

    static void Initialize(Local<Object> target);
    NJSCosmosLikeAccount() = delete;

    static Local<Object> wrap(const std::shared_ptr<ledger::core::api::CosmosLikeAccount> &object);
    static Nan::Persistent<ObjectTemplate> CosmosLikeAccount_prototype;

private:
    static NAN_METHOD(broadcastRawTransaction);

    static NAN_METHOD(broadcastTransaction);

    static NAN_METHOD(buildTransaction);

    /** Get estimated gas limit to set so the transaction will succeed */
    static NAN_METHOD(getEstimatedGasLimit);

    /**
     * Ask the account to estimate the gas for a building transaction
     * This function uses the underlying infrastructure to simulate the gas
     * needed for the transaction as requested until now.
     * @param request is the CosmosGasLimitRequest for the specifics of the simulation
     */
    static NAN_METHOD(estimateGas);

    /** Get the latest active validator set */
    static NAN_METHOD(getLatestValidatorSet);

    /** Get information about one validator */
    static NAN_METHOD(getValidatorInfo);

    /** Get Total balance of account. Sum of spendable, delegated, pending rewards, and pending unbondings */
    static NAN_METHOD(getTotalBalance);

    /** Get Total amount in delegation of account. */
    static NAN_METHOD(getDelegatedBalance);

    /** Get Total pending rewards of account. */
    static NAN_METHOD(getPendingRewardsBalance);

    /** Get Total unbondings funds of account. */
    static NAN_METHOD(getUnbondingBalance);

    /** Get Total spendable balance of account. */
    static NAN_METHOD(getSpendableBalance);

    static NAN_METHOD(getDelegations);

    static NAN_METHOD(getPendingRewards);

    static NAN_METHOD(getUnbondings);

    static NAN_METHOD(getRedelegations);

    /**
     * Get the current account sequence (synchronize to get latest value)
     * string like "14"
     */
    static NAN_METHOD(getSequence);

    /**
     * Get the account number
     * String like "15"
     */
    static NAN_METHOD(getAccountNumber);

    /**
     * Get the rewards withdrawal address
     * String Bech32 encoded string
     */
    static NAN_METHOD(getWithdrawAddress);

    static NAN_METHOD(New);

    static NAN_METHOD(isNull);
};
#endif //DJINNI_GENERATED_NJSCOSMOSLIKEACCOUNT_HPP
