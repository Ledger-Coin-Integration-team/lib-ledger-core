// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from idl.djinni

#ifndef DJINNI_GENERATED_NJSALGORANDOPERATION_HPP
#define DJINNI_GENERATED_NJSALGORANDOPERATION_HPP


#include "../../../core/src/api/AlgorandOperationType.hpp"
#include "NJSAlgorandTransactionCpp.hpp"
#include <memory>
#include <string>

#include <nan.h>
#include <node.h>
#include "../../../core/src/api/AlgorandOperation.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSAlgorandOperation final {
public:

    static void Initialize(Local<Object> target);
    NJSAlgorandOperation() = delete;

    static Local<Object> wrap(const std::shared_ptr<ledger::core::api::AlgorandOperation> &object);
    static Nan::Persistent<ObjectTemplate> AlgorandOperation_prototype;

private:
    static NAN_METHOD(getTransaction);

    static NAN_METHOD(getAlgorandOperationType);

    static NAN_METHOD(getRewards);

    static NAN_METHOD(getAssetAmount);

    static NAN_METHOD(New);

    static NAN_METHOD(isNull);
};
#endif //DJINNI_GENERATED_NJSALGORANDOPERATION_HPP
