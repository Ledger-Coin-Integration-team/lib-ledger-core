// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet.djinni

#include "CosmosLikeUnbonding.hpp"  // my header
#include "CosmosLikeUnbondingEntry.hpp"
#include "Marshal.hpp"

namespace djinni_generated {

CosmosLikeUnbonding::CosmosLikeUnbonding() : ::djinni::JniInterface<::ledger::core::api::CosmosLikeUnbonding, CosmosLikeUnbonding>("co/ledger/core/CosmosLikeUnbonding$CppProxy") {}

CosmosLikeUnbonding::~CosmosLikeUnbonding() = default;


CJNIEXPORT void JNICALL Java_co_ledger_core_CosmosLikeUnbonding_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::ledger::core::api::CosmosLikeUnbonding>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jstring JNICALL Java_co_ledger_core_CosmosLikeUnbonding_00024CppProxy_native_1getDelegatorAddress(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::CosmosLikeUnbonding>(nativeRef);
        auto r = ref->getDelegatorAddress();
        return ::djinni::release(::djinni::String::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jstring JNICALL Java_co_ledger_core_CosmosLikeUnbonding_00024CppProxy_native_1getValidatorAddress(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::CosmosLikeUnbonding>(nativeRef);
        auto r = ref->getValidatorAddress();
        return ::djinni::release(::djinni::String::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_co_ledger_core_CosmosLikeUnbonding_00024CppProxy_native_1getEntries(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::CosmosLikeUnbonding>(nativeRef);
        auto r = ref->getEntries();
        return ::djinni::release(::djinni::List<::djinni_generated::CosmosLikeUnbondingEntry>::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

}  // namespace djinni_generated