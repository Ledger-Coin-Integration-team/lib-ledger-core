// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from emitter.djinni

#ifndef DJINNI_GENERATED_NJSEVENT_HPP
#define DJINNI_GENERATED_NJSEVENT_HPP


#include "../../../core/src/api/EventCode.hpp"
#include "NJSDynamicObjectCpp.hpp"
#include <cstdint>
#include <memory>

#include <nan.h>
#include <node.h>
#include "../../../core/src/api/Event.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSEvent final {
public:

    static void Initialize(Local<Object> target);
    NJSEvent() = delete;

    static Local<Object> wrap(const std::shared_ptr<ledger::core::api::Event> &object);
    static Nan::Persistent<ObjectTemplate> Event_prototype;

private:
    /**
     * Get event code (for more details, please refer to EventCode enum).
     * @return EventCode enum entry
     */
    static NAN_METHOD(getCode);

    /**
     * Get payload of event.
     * @return DynamicObject object
     */
    static NAN_METHOD(getPayload);

    /**
     * Tell whether the event is a sticky one.
     * @return bool
     */
    static NAN_METHOD(isSticky);

    /**
     * If event is sticky, return sticky tag.
     * @return 32 bits integer
     */
    static NAN_METHOD(getStickyTag);

    /**
     * Create a new instance of Event class.
     * @param code, EventCode enum entry
     * @param payload, DynamicObject object
     * @return Event instance
     */
    static NAN_METHOD(newInstance);

    static NAN_METHOD(New);

    static NAN_METHOD(isNull);
};
#endif //DJINNI_GENERATED_NJSEVENT_HPP
