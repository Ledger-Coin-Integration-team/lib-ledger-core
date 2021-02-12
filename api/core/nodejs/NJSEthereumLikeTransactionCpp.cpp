// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from ethereum_like_wallet.djinni

#include "NJSEthereumLikeTransactionCpp.hpp"
#include "NJSObjectWrapper.hpp"
#include "NJSHexUtils.hpp"

using namespace v8;
using namespace node;
using namespace std;

NAN_METHOD(NJSEthereumLikeTransaction::getHash) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSEthereumLikeTransaction::getHash needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::EthereumLikeTransaction>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSEthereumLikeTransaction::getHash : implementation of EthereumLikeTransaction is not valid");
    }

    auto result = cpp_impl->getHash();

    //Wrap result in node object
    auto arg_0 = Nan::New<String>(result).ToLocalChecked();

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSEthereumLikeTransaction::getNonce) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSEthereumLikeTransaction::getNonce needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::EthereumLikeTransaction>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSEthereumLikeTransaction::getNonce : implementation of EthereumLikeTransaction is not valid");
    }

    auto result = cpp_impl->getNonce();

    //Wrap result in node object
    auto arg_0 = Nan::New<Int32>(result);

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSEthereumLikeTransaction::getGasPrice) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSEthereumLikeTransaction::getGasPrice needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::EthereumLikeTransaction>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSEthereumLikeTransaction::getGasPrice : implementation of EthereumLikeTransaction is not valid");
    }

    auto result = cpp_impl->getGasPrice();

    //Wrap result in node object
    auto arg_0 = NJSAmount::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSEthereumLikeTransaction::getGasLimit) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSEthereumLikeTransaction::getGasLimit needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::EthereumLikeTransaction>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSEthereumLikeTransaction::getGasLimit : implementation of EthereumLikeTransaction is not valid");
    }

    auto result = cpp_impl->getGasLimit();

    //Wrap result in node object
    auto arg_0 = NJSAmount::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSEthereumLikeTransaction::getGasUsed) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSEthereumLikeTransaction::getGasUsed needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::EthereumLikeTransaction>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSEthereumLikeTransaction::getGasUsed : implementation of EthereumLikeTransaction is not valid");
    }

    auto result = cpp_impl->getGasUsed();

    //Wrap result in node object
    auto arg_0 = NJSAmount::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSEthereumLikeTransaction::getReceiver) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSEthereumLikeTransaction::getReceiver needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::EthereumLikeTransaction>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSEthereumLikeTransaction::getReceiver : implementation of EthereumLikeTransaction is not valid");
    }

    auto result = cpp_impl->getReceiver();

    //Wrap result in node object
    auto arg_0 = NJSEthereumLikeAddress::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSEthereumLikeTransaction::getSender) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSEthereumLikeTransaction::getSender needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::EthereumLikeTransaction>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSEthereumLikeTransaction::getSender : implementation of EthereumLikeTransaction is not valid");
    }

    auto result = cpp_impl->getSender();

    //Wrap result in node object
    auto arg_0 = NJSEthereumLikeAddress::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSEthereumLikeTransaction::getValue) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSEthereumLikeTransaction::getValue needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::EthereumLikeTransaction>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSEthereumLikeTransaction::getValue : implementation of EthereumLikeTransaction is not valid");
    }

    auto result = cpp_impl->getValue();

    //Wrap result in node object
    auto arg_0 = NJSAmount::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSEthereumLikeTransaction::getData) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSEthereumLikeTransaction::getData needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::EthereumLikeTransaction>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSEthereumLikeTransaction::getData : implementation of EthereumLikeTransaction is not valid");
    }

    auto result = cpp_impl->getData();

    //Wrap result in node object
    Local<Value> arg_0;
    if(result)
    {
        auto arg_0_optional = (result).value();
        auto arg_0_tmp = Nan::New<String>("0x" + djinni::js::hex::toString(arg_0_optional)).ToLocalChecked();

        arg_0 = arg_0_tmp;
    }


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSEthereumLikeTransaction::getStatus) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSEthereumLikeTransaction::getStatus needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::EthereumLikeTransaction>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSEthereumLikeTransaction::getStatus : implementation of EthereumLikeTransaction is not valid");
    }

    auto result = cpp_impl->getStatus();

    //Wrap result in node object
    auto arg_0 = Nan::New<Int32>(result);

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSEthereumLikeTransaction::serialize) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSEthereumLikeTransaction::serialize needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::EthereumLikeTransaction>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSEthereumLikeTransaction::serialize : implementation of EthereumLikeTransaction is not valid");
    }

    auto result = cpp_impl->serialize();

    //Wrap result in node object
    auto arg_0 = Nan::New<String>("0x" + djinni::js::hex::toString(result)).ToLocalChecked();


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSEthereumLikeTransaction::setSignature) {

    //Check if method called with right number of arguments
    if(info.Length() != 3)
    {
        return Nan::ThrowError("NJSEthereumLikeTransaction::setSignature needs 3 arguments");
    }

    //Check if parameters have correct types
    if(!info[0]->IsString())
    {
        Nan::ThrowError("info[0] should be a hexadecimal string.");
    }
    std::vector<uint8_t> arg_0;
    Nan::Utf8String str_arg_0(info[0]);
    std::string string_arg_0(*str_arg_0, str_arg_0.length());
    if (string_arg_0.rfind("0x", 0) == 0)
    {
        arg_0 = djinni::js::hex::toByteArray(string_arg_0.substr(2));
    }
    else
    {
        arg_0 = std::vector<uint8_t>(string_arg_0.cbegin(), string_arg_0.cend());
    }

    if(!info[1]->IsString())
    {
        Nan::ThrowError("info[1] should be a hexadecimal string.");
    }
    std::vector<uint8_t> arg_1;
    Nan::Utf8String str_arg_1(info[1]);
    std::string string_arg_1(*str_arg_1, str_arg_1.length());
    if (string_arg_1.rfind("0x", 0) == 0)
    {
        arg_1 = djinni::js::hex::toByteArray(string_arg_1.substr(2));
    }
    else
    {
        arg_1 = std::vector<uint8_t>(string_arg_1.cbegin(), string_arg_1.cend());
    }

    if(!info[2]->IsString())
    {
        Nan::ThrowError("info[2] should be a hexadecimal string.");
    }
    std::vector<uint8_t> arg_2;
    Nan::Utf8String str_arg_2(info[2]);
    std::string string_arg_2(*str_arg_2, str_arg_2.length());
    if (string_arg_2.rfind("0x", 0) == 0)
    {
        arg_2 = djinni::js::hex::toByteArray(string_arg_2.substr(2));
    }
    else
    {
        arg_2 = std::vector<uint8_t>(string_arg_2.cbegin(), string_arg_2.cend());
    }


    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::EthereumLikeTransaction>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSEthereumLikeTransaction::setSignature : implementation of EthereumLikeTransaction is not valid");
    }
    cpp_impl->setSignature(arg_0,arg_1,arg_2);
}
NAN_METHOD(NJSEthereumLikeTransaction::setDERSignature) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSEthereumLikeTransaction::setDERSignature needs 1 arguments");
    }

    //Check if parameters have correct types
    if(!info[0]->IsString())
    {
        Nan::ThrowError("info[0] should be a hexadecimal string.");
    }
    std::vector<uint8_t> arg_0;
    Nan::Utf8String str_arg_0(info[0]);
    std::string string_arg_0(*str_arg_0, str_arg_0.length());
    if (string_arg_0.rfind("0x", 0) == 0)
    {
        arg_0 = djinni::js::hex::toByteArray(string_arg_0.substr(2));
    }
    else
    {
        arg_0 = std::vector<uint8_t>(string_arg_0.cbegin(), string_arg_0.cend());
    }


    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::EthereumLikeTransaction>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSEthereumLikeTransaction::setDERSignature : implementation of EthereumLikeTransaction is not valid");
    }
    cpp_impl->setDERSignature(arg_0);
}
NAN_METHOD(NJSEthereumLikeTransaction::setVSignature) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSEthereumLikeTransaction::setVSignature needs 1 arguments");
    }

    //Check if parameters have correct types
    if(!info[0]->IsString())
    {
        Nan::ThrowError("info[0] should be a hexadecimal string.");
    }
    std::vector<uint8_t> arg_0;
    Nan::Utf8String str_arg_0(info[0]);
    std::string string_arg_0(*str_arg_0, str_arg_0.length());
    if (string_arg_0.rfind("0x", 0) == 0)
    {
        arg_0 = djinni::js::hex::toByteArray(string_arg_0.substr(2));
    }
    else
    {
        arg_0 = std::vector<uint8_t>(string_arg_0.cbegin(), string_arg_0.cend());
    }


    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::EthereumLikeTransaction>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSEthereumLikeTransaction::setVSignature : implementation of EthereumLikeTransaction is not valid");
    }
    cpp_impl->setVSignature(arg_0);
}
NAN_METHOD(NJSEthereumLikeTransaction::getDate) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSEthereumLikeTransaction::getDate needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::EthereumLikeTransaction>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSEthereumLikeTransaction::getDate : implementation of EthereumLikeTransaction is not valid");
    }

    auto result = cpp_impl->getDate();

    //Wrap result in node object
    auto date_arg_0 = chrono::duration_cast<chrono::milliseconds>(result.time_since_epoch()).count();
    auto arg_0 = Nan::New<Date>(date_arg_0).ToLocalChecked();

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSEthereumLikeTransaction::getBlock) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSEthereumLikeTransaction::getBlock needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::EthereumLikeTransaction>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSEthereumLikeTransaction::getBlock : implementation of EthereumLikeTransaction is not valid");
    }

    auto result = cpp_impl->getBlock();

    //Wrap result in node object
    auto arg_0 = NJSEthereumLikeBlock::wrap(result);



    //Return result
    info.GetReturnValue().Set(arg_0);
}

NAN_METHOD(NJSEthereumLikeTransaction::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSEthereumLikeTransaction function can only be called as constructor (use New)");
    }
    info.GetReturnValue().Set(info.This());
}


Nan::Persistent<ObjectTemplate> NJSEthereumLikeTransaction::EthereumLikeTransaction_prototype;

Local<Object> NJSEthereumLikeTransaction::wrap(const std::shared_ptr<ledger::core::api::EthereumLikeTransaction> &object) {
    Nan::EscapableHandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(EthereumLikeTransaction_prototype);

    Local<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance(Nan::GetCurrentContext()).ToLocalChecked();
        djinni::js::ObjectWrapper<ledger::core::api::EthereumLikeTransaction>::Wrap(object, obj);
    }
    else
    {
        Nan::ThrowError("NJSEthereumLikeTransaction::wrap: object template not valid");
    }
    return scope.Escape(obj);
}

NAN_METHOD(NJSEthereumLikeTransaction::isNull) {
    auto cpp_implementation = djinni::js::ObjectWrapper<ledger::core::api::EthereumLikeTransaction>::Unwrap(info.This());
    auto isNull = !cpp_implementation ? true : false;
    return info.GetReturnValue().Set(Nan::New<Boolean>(isNull));
}

void NJSEthereumLikeTransaction::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSEthereumLikeTransaction::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSEthereumLikeTransaction").ToLocalChecked());

    //SetPrototypeMethod all methods
    Nan::SetPrototypeMethod(func_template,"getHash", getHash);
    Nan::SetPrototypeMethod(func_template,"getNonce", getNonce);
    Nan::SetPrototypeMethod(func_template,"getGasPrice", getGasPrice);
    Nan::SetPrototypeMethod(func_template,"getGasLimit", getGasLimit);
    Nan::SetPrototypeMethod(func_template,"getGasUsed", getGasUsed);
    Nan::SetPrototypeMethod(func_template,"getReceiver", getReceiver);
    Nan::SetPrototypeMethod(func_template,"getSender", getSender);
    Nan::SetPrototypeMethod(func_template,"getValue", getValue);
    Nan::SetPrototypeMethod(func_template,"getData", getData);
    Nan::SetPrototypeMethod(func_template,"getStatus", getStatus);
    Nan::SetPrototypeMethod(func_template,"serialize", serialize);
    Nan::SetPrototypeMethod(func_template,"setSignature", setSignature);
    Nan::SetPrototypeMethod(func_template,"setDERSignature", setDERSignature);
    Nan::SetPrototypeMethod(func_template,"setVSignature", setVSignature);
    Nan::SetPrototypeMethod(func_template,"getDate", getDate);
    Nan::SetPrototypeMethod(func_template,"getBlock", getBlock);
    Nan::SetPrototypeMethod(func_template,"isNull", isNull);
    //Set object prototype
    EthereumLikeTransaction_prototype.Reset(objectTemplate);

    //Add template to target
    Nan::Set(target, Nan::New<String>("NJSEthereumLikeTransaction").ToLocalChecked(), Nan::GetFunction(func_template).ToLocalChecked());
}
