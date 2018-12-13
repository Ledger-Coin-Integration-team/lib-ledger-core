// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from http_client.djinni

package com.ledger.reactnative;

import co.ledger.core.HttpClient;
import co.ledger.core.HttpRequest;
import com.facebook.react.bridge.Promise;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactContext;
import com.facebook.react.bridge.ReactContextBaseJavaModule;
import com.facebook.react.bridge.ReactMethod;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.bridge.ReadableNativeArray;
import com.facebook.react.bridge.ReadableNativeMap;
import com.facebook.react.bridge.WritableNativeArray;
import com.facebook.react.bridge.WritableNativeMap;
import java.text.DateFormat;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Date;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;
import java.util.Optional;
import java.util.UUID;

/**Class representing the http client performing the http requests */
public class RCTCoreHttpClient extends ReactContextBaseJavaModule {

    private final ReactApplicationContext reactContext;
    private Map<String, HttpClientImpl> javaObjects;
    public Map<String, HttpClientImpl> getJavaObjects()
    {
        return javaObjects;
    }

    public RCTCoreHttpClient(ReactApplicationContext reactContext)
    {
        super(reactContext);
        this.reactContext = reactContext;
        this.javaObjects = new HashMap<String, HttpClientImpl>();
        WritableNativeMap.setUseNativeAccessor(true);
    }

    @Override
    public String getName()
    {
        return "RCTCoreHttpClient";
    }
    @ReactMethod
    public void newInstance(Promise promise)
    {
        HttpClientImpl newInstance = new HttpClientImpl(this.reactContext);
        String uuid = UUID.randomUUID().toString();
        this.javaObjects.put(uuid, newInstance);
        WritableNativeMap finalResult = new WritableNativeMap();
        finalResult.putString("type","RCTCoreHttpClient");
        finalResult.putString("uid",uuid);
        promise.resolve(finalResult);
    }
    @ReactMethod
    public void release(ReadableMap currentInstance, Promise promise)
    {
        String uid = currentInstance.getString("uid");
        if (uid.length() > 0)
        {
            this.javaObjects.remove(uid);
            promise.resolve(0);
        }
        else
        {
            promise.reject("Failed to release instance of RCTCoreHttpClient", "First parameter of RCTCoreHttpClient::release should be an instance of RCTCoreHttpClient");
        }
    }
    @ReactMethod
    public void log(Promise promise)
    {
        WritableNativeArray result = new WritableNativeArray();
        for (Map.Entry<String, HttpClientImpl> elem : this.javaObjects.entrySet())
        {
            result.pushString(elem.getKey());
        }
        promise.resolve(result);
    }
    @ReactMethod
    public void flush(Promise promise)
    {
        this.javaObjects.clear();
        promise.resolve(0);
    }
    @ReactMethod
    public void isNull(ReadableMap currentInstance, Promise promise)
    {
        String uid = currentInstance.getString("uid");
        if (uid.length() > 0)
        {
            if (this.javaObjects.get(uid) == null)
            {
                promise.resolve(true);
                return;
            }
            else
            {
                promise.resolve(false);
                return;
            }
        }
        promise.resolve(true);
    }

    /**
     *Execute a giver Http request\
     *@param request, HttpRequest object, requestr to execute
     */
    @ReactMethod
    public void execute(ReadableMap currentInstance, ReadableMap request, Promise promise) {
        try
        {
            String sUid = currentInstance.getString("uid");

            HttpClientImpl currentInstanceObj = this.javaObjects.get(sUid);

            RCTCoreHttpRequest rctParam_request = this.reactContext.getNativeModule(RCTCoreHttpRequest.class);
            HttpRequest javaParam_0 = rctParam_request.getJavaObjects().get(request.getString("uid"));
            currentInstanceObj.execute(javaParam_0);
        }
        catch(Exception e)
        {
            promise.reject(e.toString(), e.getMessage());
        }
    }
}
