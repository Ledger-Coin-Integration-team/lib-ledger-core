// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_like_wallet.djinni

#ifndef DJINNI_GENERATED_NJSBITCOINLIKEWALLET_HPP
#define DJINNI_GENERATED_NJSBITCOINLIKEWALLET_HPP


#include <memory>

#include <nan.h>
#include <node.h>
#include "../../../core/src/api/BitcoinLikeWallet.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSBitcoinLikeWallet final {
public:

    static void Initialize(Local<Object> target);
    NJSBitcoinLikeWallet() = delete;

    static Local<Object> wrap(const std::shared_ptr<ledger::core::api::BitcoinLikeWallet> &object);
    static Nan::Persistent<ObjectTemplate> BitcoinLikeWallet_prototype;

private:
    static NAN_METHOD(New);

    static NAN_METHOD(isNull);
};
#endif //DJINNI_GENERATED_NJSBITCOINLIKEWALLET_HPP
