// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet.djinni

#include "NJSOperationQueryCpp.hpp"
#include "NJSObjectWrapper.hpp"
#include "NJSHexUtils.hpp"

using namespace v8;
using namespace node;
using namespace std;

NAN_METHOD(NJSOperationQuery::addOrder) {

    //Check if method called with right number of arguments
    if(info.Length() != 2)
    {
        return Nan::ThrowError("NJSOperationQuery::addOrder needs 2 arguments");
    }

    //Check if parameters have correct types
    auto arg_0 = (ledger::core::api::OperationOrderKey)Nan::To<int>(info[0]).FromJust();
    auto arg_1 = Nan::To<bool>(info[1]).FromJust();

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::OperationQuery>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSOperationQuery::addOrder : implementation of OperationQuery is not valid");
    }

    auto result = cpp_impl->addOrder(arg_0,arg_1);

    //Wrap result in node object
    auto arg_2 = NJSOperationQuery::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_2);
}
NAN_METHOD(NJSOperationQuery::filter) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSOperationQuery::filter needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::OperationQuery>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSOperationQuery::filter : implementation of OperationQuery is not valid");
    }

    auto result = cpp_impl->filter();

    //Wrap result in node object
    auto arg_0 = NJSQueryFilter::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSOperationQuery::offset) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSOperationQuery::offset needs 1 arguments");
    }

    //Check if parameters have correct types
    auto arg_0 = Nan::To<int32_t>(info[0]).FromJust();

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::OperationQuery>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSOperationQuery::offset : implementation of OperationQuery is not valid");
    }

    auto result = cpp_impl->offset(arg_0);

    //Wrap result in node object
    auto arg_1 = NJSOperationQuery::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSOperationQuery::limit) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSOperationQuery::limit needs 1 arguments");
    }

    //Check if parameters have correct types
    auto arg_0 = Nan::To<int32_t>(info[0]).FromJust();

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::OperationQuery>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSOperationQuery::limit : implementation of OperationQuery is not valid");
    }

    auto result = cpp_impl->limit(arg_0);

    //Wrap result in node object
    auto arg_1 = NJSOperationQuery::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSOperationQuery::complete) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSOperationQuery::complete needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::OperationQuery>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSOperationQuery::complete : implementation of OperationQuery is not valid");
    }

    auto result = cpp_impl->complete();

    //Wrap result in node object
    auto arg_0 = NJSOperationQuery::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSOperationQuery::partial) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSOperationQuery::partial needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::OperationQuery>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSOperationQuery::partial : implementation of OperationQuery is not valid");
    }

    auto result = cpp_impl->partial();

    //Wrap result in node object
    auto arg_0 = NJSOperationQuery::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSOperationQuery::execute) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSOperationQuery::execute needs 0 arguments");
    }

    //Check if parameters have correct types

    //Create promise and set it into Callback
    auto arg_0_resolver = v8::Promise::Resolver::New(Nan::GetCurrentContext()).ToLocalChecked();
    NJSOperationListCallback *njs_ptr_arg_0 = new NJSOperationListCallback(arg_0_resolver);
    std::shared_ptr<NJSOperationListCallback> arg_0(njs_ptr_arg_0);


    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::OperationQuery>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSOperationQuery::execute : implementation of OperationQuery is not valid");
    }
    cpp_impl->execute(arg_0);
    info.GetReturnValue().Set(arg_0_resolver->GetPromise());
}

NAN_METHOD(NJSOperationQuery::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSOperationQuery function can only be called as constructor (use New)");
    }
    info.GetReturnValue().Set(info.This());
}


Nan::Persistent<ObjectTemplate> NJSOperationQuery::OperationQuery_prototype;

Local<Object> NJSOperationQuery::wrap(const std::shared_ptr<ledger::core::api::OperationQuery> &object) {
    Nan::EscapableHandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(OperationQuery_prototype);

    Local<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance(Nan::GetCurrentContext()).ToLocalChecked();
        djinni::js::ObjectWrapper<ledger::core::api::OperationQuery>::Wrap(object, obj);
    }
    else
    {
        Nan::ThrowError("NJSOperationQuery::wrap: object template not valid");
    }
    return scope.Escape(obj);
}

NAN_METHOD(NJSOperationQuery::isNull) {
    auto cpp_implementation = djinni::js::ObjectWrapper<ledger::core::api::OperationQuery>::Unwrap(info.This());
    auto isNull = !cpp_implementation ? true : false;
    return info.GetReturnValue().Set(Nan::New<Boolean>(isNull));
}

void NJSOperationQuery::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSOperationQuery::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSOperationQuery").ToLocalChecked());

    //SetPrototypeMethod all methods
    Nan::SetPrototypeMethod(func_template,"addOrder", addOrder);
    Nan::SetPrototypeMethod(func_template,"filter", filter);
    Nan::SetPrototypeMethod(func_template,"offset", offset);
    Nan::SetPrototypeMethod(func_template,"limit", limit);
    Nan::SetPrototypeMethod(func_template,"complete", complete);
    Nan::SetPrototypeMethod(func_template,"partial", partial);
    Nan::SetPrototypeMethod(func_template,"execute", execute);
    Nan::SetPrototypeMethod(func_template,"isNull", isNull);
    //Set object prototype
    OperationQuery_prototype.Reset(objectTemplate);

    //Add template to target
    Nan::Set(target, Nan::New<String>("NJSOperationQuery").ToLocalChecked(), Nan::GetFunction(func_template).ToLocalChecked());
}
