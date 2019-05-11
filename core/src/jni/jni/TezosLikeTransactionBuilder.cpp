// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from tezos_like_wallet.djinni

#include "TezosLikeTransactionBuilder.hpp"  // my header
#include "Amount.hpp"
#include "BigInt.hpp"
#include "Currency.hpp"
#include "Marshal.hpp"
#include "TezosLikeTransaction.hpp"
#include "TezosLikeTransactionCallback.hpp"

namespace djinni_generated {

TezosLikeTransactionBuilder::TezosLikeTransactionBuilder() : ::djinni::JniInterface<::ledger::core::api::TezosLikeTransactionBuilder, TezosLikeTransactionBuilder>("co/ledger/core/TezosLikeTransactionBuilder$CppProxy") {}

TezosLikeTransactionBuilder::~TezosLikeTransactionBuilder() = default;


CJNIEXPORT void JNICALL Java_co_ledger_core_TezosLikeTransactionBuilder_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::ledger::core::api::TezosLikeTransactionBuilder>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_co_ledger_core_TezosLikeTransactionBuilder_00024CppProxy_native_1sendToAddress(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_amount, jstring j_address)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::TezosLikeTransactionBuilder>(nativeRef);
        auto r = ref->sendToAddress(::djinni_generated::Amount::toCpp(jniEnv, j_amount),
                                    ::djinni::String::toCpp(jniEnv, j_address));
        return ::djinni::release(::djinni_generated::TezosLikeTransactionBuilder::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_co_ledger_core_TezosLikeTransactionBuilder_00024CppProxy_native_1wipeToAddress(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jstring j_address)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::TezosLikeTransactionBuilder>(nativeRef);
        auto r = ref->wipeToAddress(::djinni::String::toCpp(jniEnv, j_address));
        return ::djinni::release(::djinni_generated::TezosLikeTransactionBuilder::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_co_ledger_core_TezosLikeTransactionBuilder_00024CppProxy_native_1setFees(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_fees)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::TezosLikeTransactionBuilder>(nativeRef);
        auto r = ref->setFees(::djinni_generated::Amount::toCpp(jniEnv, j_fees));
        return ::djinni::release(::djinni_generated::TezosLikeTransactionBuilder::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_co_ledger_core_TezosLikeTransactionBuilder_00024CppProxy_native_1setGasLimit(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_gasLimit)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::TezosLikeTransactionBuilder>(nativeRef);
        auto r = ref->setGasLimit(::djinni_generated::Amount::toCpp(jniEnv, j_gasLimit));
        return ::djinni::release(::djinni_generated::TezosLikeTransactionBuilder::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_co_ledger_core_TezosLikeTransactionBuilder_00024CppProxy_native_1setStorageLimit(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_storageLimit)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::TezosLikeTransactionBuilder>(nativeRef);
        auto r = ref->setStorageLimit(::djinni_generated::BigInt::toCpp(jniEnv, j_storageLimit));
        return ::djinni::release(::djinni_generated::TezosLikeTransactionBuilder::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_co_ledger_core_TezosLikeTransactionBuilder_00024CppProxy_native_1build(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_callback)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::TezosLikeTransactionBuilder>(nativeRef);
        ref->build(::djinni_generated::TezosLikeTransactionCallback::toCpp(jniEnv, j_callback));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_co_ledger_core_TezosLikeTransactionBuilder_00024CppProxy_native_1clone(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::TezosLikeTransactionBuilder>(nativeRef);
        auto r = ref->clone();
        return ::djinni::release(::djinni_generated::TezosLikeTransactionBuilder::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_co_ledger_core_TezosLikeTransactionBuilder_00024CppProxy_native_1reset(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::TezosLikeTransactionBuilder>(nativeRef);
        ref->reset();
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_co_ledger_core_TezosLikeTransactionBuilder_parseRawUnsignedTransaction(JNIEnv* jniEnv, jobject /*this*/, jobject j_currency, jbyteArray j_rawTransaction)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ledger::core::api::TezosLikeTransactionBuilder::parseRawUnsignedTransaction(::djinni_generated::Currency::toCpp(jniEnv, j_currency),
                                                                                               ::djinni::Binary::toCpp(jniEnv, j_rawTransaction));
        return ::djinni::release(::djinni_generated::TezosLikeTransaction::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_co_ledger_core_TezosLikeTransactionBuilder_parseRawSignedTransaction(JNIEnv* jniEnv, jobject /*this*/, jobject j_currency, jbyteArray j_rawTransaction)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ledger::core::api::TezosLikeTransactionBuilder::parseRawSignedTransaction(::djinni_generated::Currency::toCpp(jniEnv, j_currency),
                                                                                             ::djinni::Binary::toCpp(jniEnv, j_rawTransaction));
        return ::djinni::release(::djinni_generated::TezosLikeTransaction::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

}  // namespace djinni_generated
