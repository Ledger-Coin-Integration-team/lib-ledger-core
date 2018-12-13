// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet.djinni

#ifndef DJINNI_GENERATED_NJSTRUSTINDICATOR_HPP
#define DJINNI_GENERATED_NJSTRUSTINDICATOR_HPP


#include "../../../core/src/api/TrustLevel.hpp"
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include <nan.h>
#include <node.h>
#include "../../../core/src/api/TrustIndicator.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSTrustIndicator final {
public:

    static void Initialize(Local<Object> target);
    NJSTrustIndicator() = delete;

    static Local<Object> wrap(const std::shared_ptr<ledger::core::api::TrustIndicator> &object);
    static Nan::Persistent<ObjectTemplate> TrustIndicator_prototype;

private:
    static NAN_METHOD(getTrustWeight);

    static NAN_METHOD(getTrustLevel);

    static NAN_METHOD(getConflictingOperationUids);

    static NAN_METHOD(getOrigin);

    static NAN_METHOD(New);

    static NAN_METHOD(isNull);
};
#endif //DJINNI_GENERATED_NJSTRUSTINDICATOR_HPP
