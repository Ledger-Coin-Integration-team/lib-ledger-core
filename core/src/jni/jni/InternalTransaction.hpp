// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from ethereum_like_wallet.djinni

#ifndef DJINNI_GENERATED_INTERNALTRANSACTION_HPP_JNI_
#define DJINNI_GENERATED_INTERNALTRANSACTION_HPP_JNI_

#include "../../api/InternalTransaction.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class InternalTransaction final : ::djinni::JniInterface<::ledger::core::api::InternalTransaction, InternalTransaction> {
public:
    using CppType = std::shared_ptr<::ledger::core::api::InternalTransaction>;
    using CppOptType = std::shared_ptr<::ledger::core::api::InternalTransaction>;
    using JniType = jobject;

    using Boxed = InternalTransaction;

    ~InternalTransaction();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<InternalTransaction>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<InternalTransaction>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    InternalTransaction();
    friend ::djinni::JniClass<InternalTransaction>;
    friend ::djinni::JniInterface<::ledger::core::api::InternalTransaction, InternalTransaction>;

};

}  // namespace djinni_generated
#endif //DJINNI_GENERATED_INTERNALTRANSACTION_HPP_JNI_