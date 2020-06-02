// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from callback.djinni

#ifndef DJINNI_GENERATED_ALGORANDASSETPARAMSMAPCALLBACK_HPP_JNI_
#define DJINNI_GENERATED_ALGORANDASSETPARAMSMAPCALLBACK_HPP_JNI_

#include "../../api/AlgorandAssetParamsMapCallback.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class AlgorandAssetParamsMapCallback final : ::djinni::JniInterface<::ledger::core::api::AlgorandAssetParamsMapCallback, AlgorandAssetParamsMapCallback> {
public:
    using CppType = std::shared_ptr<::ledger::core::api::AlgorandAssetParamsMapCallback>;
    using CppOptType = std::shared_ptr<::ledger::core::api::AlgorandAssetParamsMapCallback>;
    using JniType = jobject;

    using Boxed = AlgorandAssetParamsMapCallback;

    ~AlgorandAssetParamsMapCallback();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<AlgorandAssetParamsMapCallback>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<AlgorandAssetParamsMapCallback>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    AlgorandAssetParamsMapCallback();
    friend ::djinni::JniClass<AlgorandAssetParamsMapCallback>;
    friend ::djinni::JniInterface<::ledger::core::api::AlgorandAssetParamsMapCallback, AlgorandAssetParamsMapCallback>;

    class JavaProxy final : ::djinni::JavaProxyHandle<JavaProxy>, public ::ledger::core::api::AlgorandAssetParamsMapCallback
    {
    public:
        JavaProxy(JniType j);
        ~JavaProxy();

        void onCallback(const std::experimental::optional<std::unordered_map<std::string, ::ledger::core::api::AlgorandAssetParams>> & result, const std::experimental::optional<::ledger::core::api::Error> & error) override;

    private:
        friend ::djinni::JniInterface<::ledger::core::api::AlgorandAssetParamsMapCallback, ::djinni_generated::AlgorandAssetParamsMapCallback>;
    };

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("co/ledger/core/AlgorandAssetParamsMapCallback") };
    const jmethodID method_onCallback { ::djinni::jniGetMethodID(clazz.get(), "onCallback", "(Ljava/util/HashMap;Lco/ledger/core/Error;)V") };
};

}  // namespace djinni_generated
#endif //DJINNI_GENERATED_ALGORANDASSETPARAMSMAPCALLBACK_HPP_JNI_
