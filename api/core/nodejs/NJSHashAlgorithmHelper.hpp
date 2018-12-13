// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from crypto.djinni

#ifndef DJINNI_GENERATED_NJSHASHALGORITHMHELPER_HPP
#define DJINNI_GENERATED_NJSHASHALGORITHMHELPER_HPP


#include <cstdint>
#include <vector>

#include <nan.h>
#include <node.h>
#include "../../../core/src/api/HashAlgorithmHelper.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSHashAlgorithmHelper: public ledger::core::api::HashAlgorithmHelper {
public:

    static void Initialize(Local<Object> target);
    ~NJSHashAlgorithmHelper()
    {
        njs_impl.Reset();
    };
    NJSHashAlgorithmHelper(Local<Object> njs_implementation){njs_impl.Reset(njs_implementation);};

    /**
     *RACE Integrity Primitives Evaluation Message Digest (used in Bitcoin)
     *@param data in bytes, message to hash
     *@return 160 bits hashed message
     */
    std::vector<uint8_t> ripemd160(const std::vector<uint8_t> & data);

    /**
     *Secure Hash Algorithm (used in Bitcoin)
     *@param data in bytes, message to hash
     *@return 256 bits hashed message
     */
    std::vector<uint8_t> sha256(const std::vector<uint8_t> & data);

    /**
     *Hash algorithm used in ethereum
     *@param data in bytes, message to hash
     *@return 256 bits hashed message
     */
    std::vector<uint8_t> keccak256(const std::vector<uint8_t> & data);

private:
    /**
     *RACE Integrity Primitives Evaluation Message Digest (used in Bitcoin)
     *@param data in bytes, message to hash
     *@return 160 bits hashed message
     */
    static NAN_METHOD(ripemd160);

    /**
     *Secure Hash Algorithm (used in Bitcoin)
     *@param data in bytes, message to hash
     *@return 256 bits hashed message
     */
    static NAN_METHOD(sha256);

    /**
     *Hash algorithm used in ethereum
     *@param data in bytes, message to hash
     *@return 256 bits hashed message
     */
    static NAN_METHOD(keccak256);

    static NAN_METHOD(New);

    Nan::Persistent<Object> njs_impl;
};
#endif //DJINNI_GENERATED_NJSHASHALGORITHMHELPER_HPP
