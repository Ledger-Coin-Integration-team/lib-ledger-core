// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from configuration.djinni

#include "NJSSynchronizerEnginesCpp.hpp"
#include "NJSObjectWrapper.hpp"
#include "NJSHexUtils.hpp"

using namespace v8;
using namespace node;
using namespace std;


NAN_METHOD(NJSSynchronizerEngines::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSSynchronizerEngines function can only be called as constructor (use New)");
    }
    info.GetReturnValue().Set(info.This());
}


Nan::Persistent<ObjectTemplate> NJSSynchronizerEngines::SynchronizerEngines_prototype;

Local<Object> NJSSynchronizerEngines::wrap(const std::shared_ptr<ledger::core::api::SynchronizerEngines> &object) {
    Nan::EscapableHandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(SynchronizerEngines_prototype);

    Local<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance(Nan::GetCurrentContext()).ToLocalChecked();
        djinni::js::ObjectWrapper<ledger::core::api::SynchronizerEngines>::Wrap(object, obj);
    }
    else
    {
        Nan::ThrowError("NJSSynchronizerEngines::wrap: object template not valid");
    }
    return scope.Escape(obj);
}

NAN_METHOD(NJSSynchronizerEngines::isNull) {
    auto cpp_implementation = djinni::js::ObjectWrapper<ledger::core::api::SynchronizerEngines>::Unwrap(info.This());
    auto isNull = !cpp_implementation ? true : false;
    return info.GetReturnValue().Set(Nan::New<Boolean>(isNull));
}

void NJSSynchronizerEngines::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSSynchronizerEngines::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSSynchronizerEngines").ToLocalChecked());

    //SetPrototypeMethod all methods
    Nan::SetPrototypeMethod(func_template,"isNull", isNull);
    //Set object prototype
    SynchronizerEngines_prototype.Reset(objectTemplate);

    //Add template to target
    Nan::Set(target, Nan::New<String>("NJSSynchronizerEngines").ToLocalChecked(), Nan::GetFunction(func_template).ToLocalChecked());
}
