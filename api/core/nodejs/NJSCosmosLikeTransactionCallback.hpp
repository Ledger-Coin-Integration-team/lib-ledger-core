// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from callback.djinni

#ifndef DJINNI_GENERATED_NJSCOSMOSLIKETRANSACTIONCALLBACK_HPP
#define DJINNI_GENERATED_NJSCOSMOSLIKETRANSACTIONCALLBACK_HPP


#include "../../../core/src/api/../utils/optional.hpp"
#include "../../../core/src/api/CosmosLikeTransaction.hpp"
#include "../../../core/src/api/Error.hpp"
#include "NJSCosmosLikeTransactionCpp.hpp"
#include <memory>

#include <nan.h>
#include <node.h>
#include "../../../core/src/api/CosmosLikeTransactionCallback.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSCosmosLikeTransactionCallback: public ledger::core::api::CosmosLikeTransactionCallback {
public:

    static void Initialize(Local<Object> target);

    static Local<Object> wrap(const std::shared_ptr<ledger::core::api::CosmosLikeTransactionCallback> &object);
    static Nan::Persistent<ObjectTemplate> CosmosLikeTransactionCallback_prototype;
    ~NJSCosmosLikeTransactionCallback()
    {
        pers_resolver.Reset();
    };
    NJSCosmosLikeTransactionCallback(Local<Promise::Resolver> resolver){pers_resolver.Reset(resolver);};

    /**
     * Method triggered when main task complete.
     * @params result optional of type T, non null if main task failed
     * @params error optional of type Error, non null if main task succeeded
     */
    void onCallback(const std::shared_ptr<::ledger::core::api::CosmosLikeTransaction> & result, const std::experimental::optional<::ledger::core::api::Error> & error);

private:
    /**
     * Method triggered when main task complete.
     * @params result optional of type T, non null if main task failed
     * @params error optional of type Error, non null if main task succeeded
     */
    static NAN_METHOD(onCallback);

    static NAN_METHOD(New);

    Nan::Persistent<Promise::Resolver> pers_resolver;
};
#endif //DJINNI_GENERATED_NJSCOSMOSLIKETRANSACTIONCALLBACK_HPP
