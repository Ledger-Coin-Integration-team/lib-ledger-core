// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from dynamic.djinni

#ifndef DJINNI_GENERATED_NJSDYNAMICOBJECT_HPP
#define DJINNI_GENERATED_NJSDYNAMICOBJECT_HPP


#include "../../../core/src/api/../utils/optional.hpp"
#include "../../../core/src/api/DynamicType.hpp"
#include "NJSDynamicArrayCpp.hpp"
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include <nan.h>
#include <node.h>
#include "../../../core/src/api/DynamicObject.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSDynamicObject final {
public:

    static void Initialize(Local<Object> target);
    NJSDynamicObject() = delete;

    static Local<Object> wrap(const std::shared_ptr<ledger::core::api::DynamicObject> &object);
    static Nan::Persistent<ObjectTemplate> DynamicObject_prototype;

private:
    /**
     * Store a string with a given key.
     * @param key, string, key to access stored value
     * @param value, string
     * @return DynamicObject object with value stored in it
     */
    static NAN_METHOD(putString);

    /**
     * Store a 32-bit integer with a given key.
     * @param key, string, key to access stored value
     * @param value, 32-bit integer
     * @return DynamicObject object with value stored in it
     */
    static NAN_METHOD(putInt);

    /**
     * Store a 64-bit integer with a given key.
     * @param key, string, key to access stored value
     * @param value, 64-bit integer
     * @return DynamicObject object with value stored in it
     */
    static NAN_METHOD(putLong);

    /**
     * Store a double with a given key.
     * @param key, string, key to access stored value
     * @param value, double
     * @return DynamicObject object with value stored in it
     */
    static NAN_METHOD(putDouble);

    /**
     * Store a binary integer with a given key.
     * @param key, string, key to access stored value
     * @param value, binary
     * @return DynamicObject object with value stored in it
     */
    static NAN_METHOD(putData);

    /**
     * Store a boolean integer with a given key.
     * @param key, string, key to access stored value
     * @param value, bool
     * @return DynamicObject object with value stored in it
     */
    static NAN_METHOD(putBoolean);

    /**
     * Store another DynamicObject object with a given key.
     * @param key, string, key to access stored value
     * @return DynamicObject object with value stored in it
     */
    static NAN_METHOD(putObject);

    /**
     * Store a DynamicArray object with a given key.
     * @param key, string, key to access stored reference
     * @return DynamicArray object with value stored in it
     */
    static NAN_METHOD(putArray);

    /**
     * Get, if exists, stored string having a specific key.
     * @param key, string, key of string to look for
     * @return Optional string
     */
    static NAN_METHOD(getString);

    /**
     * Get, if exists, stored 32 bits integer having a specific key.
     * @param key, string, key of 32 bits integer to look for
     * @return Optional 32 bits integer
     */
    static NAN_METHOD(getInt);

    /**
     * Get, if exists, stored 64 bits integer having a specific key.
     * @param key, string, key of 64 bits integer to look for
     * @return Optional 64 bits integer
     */
    static NAN_METHOD(getLong);

    /**
     * Get, if exists, stored double having a specific key.
     * @param key, string, key of double to look for
     * @return Optional double
     */
    static NAN_METHOD(getDouble);

    /**
     * Get, if exists, stored binary having a specific key.
     * @param key, string, key of binary to look for
     * @return Optional binary
     */
    static NAN_METHOD(getData);

    /**
     * Get, if exists, stored bool having a specific key.
     * @param key, string, key of bool to look for
     * @return Optional bool
     */
    static NAN_METHOD(getBoolean);

    /**
     * Get, if exists, stored DynamicObject having a specific key.
     * @param key, string, key of DynamicObject to look for
     * @return Optional DynamicObject
     */
    static NAN_METHOD(getObject);

    /**
     * Get, if exists, stored DynamicArray having a specific key.
     * @param key, string, key of DynamicArray to look for
     * @return Optional DynamicArray
     */
    static NAN_METHOD(getArray);

    /**
     * Check if a key was used to store a value.
     * @param key, string, key to look for
     * @return bool
     */
    static NAN_METHOD(contains);

    /**
     * Delete key and value stored with it.
     * @param key, string, key to look for
     * @return bool, true if key exists and deletion succeeded, false otherwise
     */
    static NAN_METHOD(remove);

    /**
     * Get list of keys.
     * @return list of string, list all stored keys
     */
    static NAN_METHOD(getKeys);

    /**
     * Get type of object stored with specific key.
     * @param key, string, key to look for
     * @return Optional DynamicType enum entry
     */
    static NAN_METHOD(getType);

    /**
     * Dump whole object's content as string.
     * @return string
     */
    static NAN_METHOD(dump);

    /**
     * Serialize whole object to a binary.
     * @return binary
     */
    static NAN_METHOD(serialize);

    /**
     * Get readonly status of object.
     * @param bool
     */
    static NAN_METHOD(isReadOnly);

    /**
     * Get count of stored references.
     * @return 64 bits integer
     */
    static NAN_METHOD(size);

    /**
     * Create a new instance of DynamicObject class.
     * @return DynamicObject instance
     */
    static NAN_METHOD(newInstance);

    /**
     * Parse a binary to a DynamicObject.
     * @param serialized, binary to parse
     * @return Optional DynamicObject
     */
    static NAN_METHOD(load);

    static NAN_METHOD(New);

    static NAN_METHOD(isNull);
};
#endif //DJINNI_GENERATED_NJSDYNAMICOBJECT_HPP
