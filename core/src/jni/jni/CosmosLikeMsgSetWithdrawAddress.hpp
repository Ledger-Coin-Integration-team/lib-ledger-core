// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from messages.djinni

#ifndef DJINNI_GENERATED_COSMOSLIKEMSGSETWITHDRAWADDRESS_HPP_JNI_
#define DJINNI_GENERATED_COSMOSLIKEMSGSETWITHDRAWADDRESS_HPP_JNI_

#include "../../api/CosmosLikeMsgSetWithdrawAddress.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class CosmosLikeMsgSetWithdrawAddress final {
public:
    using CppType = ::ledger::core::api::CosmosLikeMsgSetWithdrawAddress;
    using JniType = jobject;

    using Boxed = CosmosLikeMsgSetWithdrawAddress;

    ~CosmosLikeMsgSetWithdrawAddress();

    static CppType toCpp(JNIEnv* jniEnv, JniType j);
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c);

private:
    CosmosLikeMsgSetWithdrawAddress();
    friend ::djinni::JniClass<CosmosLikeMsgSetWithdrawAddress>;

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("co/ledger/core/CosmosLikeMsgSetWithdrawAddress") };
    const jmethodID jconstructor { ::djinni::jniGetMethodID(clazz.get(), "<init>", "(Ljava/lang/String;Ljava/lang/String;)V") };
    const jfieldID field_delegatorAddress { ::djinni::jniGetFieldID(clazz.get(), "delegatorAddress", "Ljava/lang/String;") };
    const jfieldID field_withdrawAddress { ::djinni::jniGetFieldID(clazz.get(), "withdrawAddress", "Ljava/lang/String;") };
};

}  // namespace djinni_generated
#endif //DJINNI_GENERATED_COSMOSLIKEMSGSETWITHDRAWADDRESS_HPP_JNI_
