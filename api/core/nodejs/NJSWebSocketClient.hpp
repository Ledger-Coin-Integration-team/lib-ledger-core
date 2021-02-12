// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from websocket_client.djinni

#ifndef DJINNI_GENERATED_NJSWEBSOCKETCLIENT_HPP
#define DJINNI_GENERATED_NJSWEBSOCKETCLIENT_HPP


#include "../../../core/src/api/WebSocketConnection.hpp"
#include "NJSWebSocketConnectionCpp.hpp"
#include <memory>
#include <string>

#include <nan.h>
#include <node.h>
#include "../../../core/src/api/WebSocketClient.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSWebSocketClient: public ledger::core::api::WebSocketClient {
public:

    static void Initialize(Local<Object> target);

    static Local<Object> wrap(const std::shared_ptr<ledger::core::api::WebSocketClient> &object);
    static Nan::Persistent<ObjectTemplate> WebSocketClient_prototype;
    ~NJSWebSocketClient()
    {
        njs_impl.Reset();
    };
    NJSWebSocketClient(Local<Object> njs_implementation){njs_impl.Reset(njs_implementation);};

    /**
     * Connect to a given URL via a Web Socket connection.
     * @param url, the URL to connect to
     * @connection, the Web Socket connection to use
     */
    void connect(const std::string & url, const std::shared_ptr<::ledger::core::api::WebSocketConnection> & connection);

    /**
     * Send a message to a given client.
     * @connection, the Web Socket connection to use
     * @data, the message to send
     */
    void send(const std::shared_ptr<::ledger::core::api::WebSocketConnection> & connection, const std::string & data);

    /**
     * Disconnect a client.
     * @connection, the Web Socket connection to use
     */
    void disconnect(const std::shared_ptr<::ledger::core::api::WebSocketConnection> & connection);

private:
    /**
     * Connect to a given URL via a Web Socket connection.
     * @param url, the URL to connect to
     * @connection, the Web Socket connection to use
     */
    static NAN_METHOD(connect);

    /**
     * Send a message to a given client.
     * @connection, the Web Socket connection to use
     * @data, the message to send
     */
    static NAN_METHOD(send);

    /**
     * Disconnect a client.
     * @connection, the Web Socket connection to use
     */
    static NAN_METHOD(disconnect);

    static NAN_METHOD(New);

    Nan::Persistent<Object> njs_impl;
};
#endif //DJINNI_GENERATED_NJSWEBSOCKETCLIENT_HPP
