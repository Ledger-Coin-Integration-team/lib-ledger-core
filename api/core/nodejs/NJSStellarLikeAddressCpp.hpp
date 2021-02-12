// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from addresses.djinni

#ifndef DJINNI_GENERATED_NJSSTELLARLIKEADDRESS_HPP
#define DJINNI_GENERATED_NJSSTELLARLIKEADDRESS_HPP


#include <memory>

#include <nan.h>
#include <node.h>
#include "../../../core/src/api/StellarLikeAddress.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSStellarLikeAddress final {
public:

    static void Initialize(Local<Object> target);
    NJSStellarLikeAddress() = delete;

    static Local<Object> wrap(const std::shared_ptr<ledger::core::api::StellarLikeAddress> &object);
    static Nan::Persistent<ObjectTemplate> StellarLikeAddress_prototype;

private:
    static NAN_METHOD(New);

    static NAN_METHOD(isNull);
};
#endif //DJINNI_GENERATED_NJSSTELLARLIKEADDRESS_HPP
