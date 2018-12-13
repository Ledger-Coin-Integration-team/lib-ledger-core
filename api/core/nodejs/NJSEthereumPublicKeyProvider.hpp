// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from ethereum_public_key_provider.djinni

#ifndef DJINNI_GENERATED_NJSETHEREUMPUBLICKEYPROVIDER_HPP
#define DJINNI_GENERATED_NJSETHEREUMPUBLICKEYPROVIDER_HPP


#include <nan.h>
#include <node.h>
#include "../../../core/src/api/EthereumPublicKeyProvider.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSEthereumPublicKeyProvider: public ledger::core::api::EthereumPublicKeyProvider {
public:

    static void Initialize(Local<Object> target);
    ~NJSEthereumPublicKeyProvider()
    {
        njs_impl.Reset();
    };
    NJSEthereumPublicKeyProvider(Local<Object> njs_implementation){njs_impl.Reset(njs_implementation);};

private:
    static NAN_METHOD(New);

    Nan::Persistent<Object> njs_impl;
};
#endif //DJINNI_GENERATED_NJSETHEREUMPUBLICKEYPROVIDER_HPP
