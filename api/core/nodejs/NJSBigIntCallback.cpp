// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from callback.djinni

#include "NJSBigIntCallback.hpp"
#include "NJSObjectWrapper.hpp"
#include "NJSHexUtils.hpp"

using namespace v8;
using namespace node;
using namespace std;

void NJSBigIntCallback::onCallback(const std::shared_ptr<::ledger::core::api::BigInt> & result, const std::experimental::optional<::ledger::core::api::Error> & error)
{
    Nan::HandleScope scope;
    //Wrap parameters
    auto arg_0 = NJSBigInt::wrap(result);


    Local<Value> arg_1;
    if(error)
    {
        auto arg_1_optional = (error).value();
        auto arg_1_tmp = Nan::New<Object>();
        auto arg_1_tmp_1 = Nan::New<Integer>((int)arg_1_optional.code);
        Nan::DefineOwnProperty(arg_1_tmp, Nan::New<String>("code").ToLocalChecked(), arg_1_tmp_1);
        auto arg_1_tmp_2 = Nan::New<String>(arg_1_optional.message).ToLocalChecked();
        Nan::DefineOwnProperty(arg_1_tmp, Nan::New<String>("message").ToLocalChecked(), arg_1_tmp_2);

        arg_1 = arg_1_tmp;
    }

    auto local_resolver = Nan::New<Promise::Resolver>(pers_resolver);
    if(error)
    {
        auto rejected = local_resolver->Reject(Nan::GetCurrentContext(), arg_1);
        rejected.FromJust();
    }
    else
    {
        auto resolve = local_resolver->Resolve(Nan::GetCurrentContext(), arg_0);
        resolve.FromJust();
    }
}

NAN_METHOD(NJSBigIntCallback::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSBigIntCallback function can only be called as constructor (use New)");
    }

    auto resolver = v8::Promise::Resolver::New(Nan::GetCurrentContext()).ToLocalChecked();
    auto node_instance = std::make_shared<NJSBigIntCallback>(resolver);
    djinni::js::ObjectWrapper<NJSBigIntCallback>::Wrap(node_instance, info.This());
    info.GetReturnValue().Set(info.This());
}


Nan::Persistent<ObjectTemplate> NJSBigIntCallback::BigIntCallback_prototype;

Local<Object> NJSBigIntCallback::wrap(const std::shared_ptr<ledger::core::api::BigIntCallback> &object) {
    Nan::EscapableHandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(BigIntCallback_prototype);

    Local<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance(Nan::GetCurrentContext()).ToLocalChecked();
        djinni::js::ObjectWrapper<ledger::core::api::BigIntCallback>::Wrap(object, obj);
    }
    else
    {
        Nan::ThrowError("NJSBigIntCallback::wrap: object template not valid");
    }
    return scope.Escape(obj);
}

void NJSBigIntCallback::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSBigIntCallback::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSBigIntCallback").ToLocalChecked());
    Nan::SetPrototypeMethod(func_template,"New", New);
    //Set object prototype
    BigIntCallback_prototype.Reset(objectTemplate);

    //Add template to target
    Nan::Set(target, Nan::New<String>("NJSBigIntCallback").ToLocalChecked(), Nan::GetFunction(func_template).ToLocalChecked());
}
