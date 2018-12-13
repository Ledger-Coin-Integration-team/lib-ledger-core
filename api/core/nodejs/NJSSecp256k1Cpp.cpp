// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from secp256k1.djinni

#include "NJSSecp256k1Cpp.hpp"
#include "NJSObjectWrapper.hpp"

using namespace v8;
using namespace node;
using namespace std;

NAN_METHOD(NJSSecp256k1::createInstance) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSSecp256k1::createInstance needs 0 arguments");
    }

    //Check if parameters have correct types

    auto result = Secp256k1::createInstance();

    //Wrap result in node object
    auto arg_0 = NJSSecp256k1::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSSecp256k1::computePubKey) {

    //Check if method called with right number of arguments
    if(info.Length() != 2)
    {
        return Nan::ThrowError("NJSSecp256k1::computePubKey needs 2 arguments");
    }

    //Check if parameters have correct types
    vector<uint8_t> arg_0;
    Local<Array> arg_0_container = Local<Array>::Cast(info[0]);
    for(uint32_t arg_0_id = 0; arg_0_id < arg_0_container->Length(); arg_0_id++)
    {
        if(arg_0_container->Get(arg_0_id)->IsUint32())
        {
            auto arg_0_elem = Nan::To<uint32_t>(arg_0_container->Get(arg_0_id)).FromJust();
            arg_0.emplace_back(arg_0_elem);
        }
    }

    auto arg_1 = Nan::To<bool>(info[1]).FromJust();

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<Secp256k1>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSSecp256k1::computePubKey : implementation of Secp256k1 is not valid");
    }

    auto result = cpp_impl->computePubKey(arg_0,arg_1);

    //Wrap result in node object
    Local<Array> arg_2 = Nan::New<Array>();
    for(size_t arg_2_id = 0; arg_2_id < result.size(); arg_2_id++)
    {
        auto arg_2_elem = Nan::New<Uint32>(result[arg_2_id]);
        arg_2->Set((int)arg_2_id,arg_2_elem);
    }


    //Return result
    info.GetReturnValue().Set(arg_2);
}
NAN_METHOD(NJSSecp256k1::sign) {

    //Check if method called with right number of arguments
    if(info.Length() != 2)
    {
        return Nan::ThrowError("NJSSecp256k1::sign needs 2 arguments");
    }

    //Check if parameters have correct types
    vector<uint8_t> arg_0;
    Local<Array> arg_0_container = Local<Array>::Cast(info[0]);
    for(uint32_t arg_0_id = 0; arg_0_id < arg_0_container->Length(); arg_0_id++)
    {
        if(arg_0_container->Get(arg_0_id)->IsUint32())
        {
            auto arg_0_elem = Nan::To<uint32_t>(arg_0_container->Get(arg_0_id)).FromJust();
            arg_0.emplace_back(arg_0_elem);
        }
    }

    vector<uint8_t> arg_1;
    Local<Array> arg_1_container = Local<Array>::Cast(info[1]);
    for(uint32_t arg_1_id = 0; arg_1_id < arg_1_container->Length(); arg_1_id++)
    {
        if(arg_1_container->Get(arg_1_id)->IsUint32())
        {
            auto arg_1_elem = Nan::To<uint32_t>(arg_1_container->Get(arg_1_id)).FromJust();
            arg_1.emplace_back(arg_1_elem);
        }
    }


    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<Secp256k1>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSSecp256k1::sign : implementation of Secp256k1 is not valid");
    }

    auto result = cpp_impl->sign(arg_0,arg_1);

    //Wrap result in node object
    Local<Array> arg_2 = Nan::New<Array>();
    for(size_t arg_2_id = 0; arg_2_id < result.size(); arg_2_id++)
    {
        auto arg_2_elem = Nan::New<Uint32>(result[arg_2_id]);
        arg_2->Set((int)arg_2_id,arg_2_elem);
    }


    //Return result
    info.GetReturnValue().Set(arg_2);
}
NAN_METHOD(NJSSecp256k1::verify) {

    //Check if method called with right number of arguments
    if(info.Length() != 3)
    {
        return Nan::ThrowError("NJSSecp256k1::verify needs 3 arguments");
    }

    //Check if parameters have correct types
    vector<uint8_t> arg_0;
    Local<Array> arg_0_container = Local<Array>::Cast(info[0]);
    for(uint32_t arg_0_id = 0; arg_0_id < arg_0_container->Length(); arg_0_id++)
    {
        if(arg_0_container->Get(arg_0_id)->IsUint32())
        {
            auto arg_0_elem = Nan::To<uint32_t>(arg_0_container->Get(arg_0_id)).FromJust();
            arg_0.emplace_back(arg_0_elem);
        }
    }

    vector<uint8_t> arg_1;
    Local<Array> arg_1_container = Local<Array>::Cast(info[1]);
    for(uint32_t arg_1_id = 0; arg_1_id < arg_1_container->Length(); arg_1_id++)
    {
        if(arg_1_container->Get(arg_1_id)->IsUint32())
        {
            auto arg_1_elem = Nan::To<uint32_t>(arg_1_container->Get(arg_1_id)).FromJust();
            arg_1.emplace_back(arg_1_elem);
        }
    }

    vector<uint8_t> arg_2;
    Local<Array> arg_2_container = Local<Array>::Cast(info[2]);
    for(uint32_t arg_2_id = 0; arg_2_id < arg_2_container->Length(); arg_2_id++)
    {
        if(arg_2_container->Get(arg_2_id)->IsUint32())
        {
            auto arg_2_elem = Nan::To<uint32_t>(arg_2_container->Get(arg_2_id)).FromJust();
            arg_2.emplace_back(arg_2_elem);
        }
    }


    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<Secp256k1>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSSecp256k1::verify : implementation of Secp256k1 is not valid");
    }

    auto result = cpp_impl->verify(arg_0,arg_1,arg_2);

    //Wrap result in node object
    auto arg_3 = Nan::New<Boolean>(result);

    //Return result
    info.GetReturnValue().Set(arg_3);
}
NAN_METHOD(NJSSecp256k1::newInstance) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSSecp256k1::newInstance needs 0 arguments");
    }

    //Check if parameters have correct types

    auto result = Secp256k1::newInstance();

    //Wrap result in node object
    auto arg_0 = NJSSecp256k1::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_0);
}

NAN_METHOD(NJSSecp256k1::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSSecp256k1 function can only be called as constructor (use New)");
    }

    //Check if NJSSecp256k1::New called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSSecp256k1::New needs same number of arguments as ledger::core::api::Secp256k1::createInstance method");
    }

    //Unwrap objects to get C++ classes

    //Call factory
    auto cpp_instance = ledger::core::api::Secp256k1::createInstance();
    djinni::js::ObjectWrapper<ledger::core::api::Secp256k1>::Wrap(cpp_instance, info.This());
    info.GetReturnValue().Set(info.This());
}


Nan::Persistent<ObjectTemplate> NJSSecp256k1::Secp256k1_prototype;

Local<Object> NJSSecp256k1::wrap(const std::shared_ptr<ledger::core::api::Secp256k1> &object) {
    Nan::EscapableHandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(Secp256k1_prototype);

    Local<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance();
        djinni::js::ObjectWrapper<ledger::core::api::Secp256k1>::Wrap(object, obj);
    }
    else
    {
        Nan::ThrowError("NJSSecp256k1::wrap: object template not valid");
    }
    return scope.Escape(obj);
}

NAN_METHOD(NJSSecp256k1::isNull) {
    auto cpp_implementation = djinni::js::ObjectWrapper<Secp256k1>::Unwrap(info.This());
    auto isNull = !cpp_implementation ? true : false;
    return info.GetReturnValue().Set(Nan::New<Boolean>(isNull));
}

void NJSSecp256k1::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSSecp256k1::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSSecp256k1").ToLocalChecked());

    //SetPrototypeMethod all methods
    Nan::SetPrototypeMethod(func_template,"createInstance", createInstance);
    Nan::SetPrototypeMethod(func_template,"computePubKey", computePubKey);
    Nan::SetPrototypeMethod(func_template,"sign", sign);
    Nan::SetPrototypeMethod(func_template,"verify", verify);
    Nan::SetPrototypeMethod(func_template,"newInstance", newInstance);
    //Set object prototype
    Secp256k1_prototype.Reset(objectTemplate);
    Nan::SetPrototypeMethod(func_template,"isNull", isNull);

    //Add template to target
    target->Set(Nan::New<String>("NJSSecp256k1").ToLocalChecked(), func_template->GetFunction());
}
