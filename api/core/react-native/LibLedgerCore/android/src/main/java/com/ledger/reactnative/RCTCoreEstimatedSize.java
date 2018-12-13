// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from tuples.djinni

package com.ledger.reactnative;

import co.ledger.core.EstimatedSize;
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

public class RCTCoreEstimatedSize extends ReactContextBaseJavaModule {
    private final ReactApplicationContext reactContext;
    private Map<String, EstimatedSize> javaObjects;
    public Map<String, EstimatedSize> getJavaObjects()
    {
        return javaObjects;
    }

    public RCTCoreEstimatedSize(ReactApplicationContext reactContext)
    {
        super(reactContext);
        this.reactContext = reactContext;
        this.javaObjects = new HashMap<String, EstimatedSize>();
        WritableNativeMap.setUseNativeAccessor(true);
    }

    @Override
    public String getName()
    {
        return "RCTCoreEstimatedSize";
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
            promise.reject("Failed to release instance of RCTCoreEstimatedSize", "First parameter of RCTCoreEstimatedSize::release should be an instance of RCTCoreEstimatedSize");
        }
    }
    @ReactMethod
    public void log(Promise promise)
    {
        WritableNativeArray result = new WritableNativeArray();
        for (Map.Entry<String, EstimatedSize> elem : this.javaObjects.entrySet())
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

    @ReactMethod
    public void init(int Min, int Max, Promise promise) {
        EstimatedSize javaResult = new EstimatedSize(Min, Max);

        String uuid = UUID.randomUUID().toString();
        this.javaObjects.put(uuid, javaResult);
        WritableNativeMap finalResult = new WritableNativeMap();
        finalResult.putString("type","RCTCoreEstimatedSize");
        finalResult.putString("uid",uuid);
        promise.resolve(finalResult);
    }
    @ReactMethod
    public void getMin(ReadableMap currentInstance, Promise promise)
    {
        String uid = currentInstance.getString("uid");
        if (uid.length() > 0)
        {
            EstimatedSize javaObj = this.javaObjects.get(uid);
            int result = javaObj.getMin();
            WritableNativeMap resultMap = new WritableNativeMap();
            resultMap.putInt("value", result);
            promise.resolve(resultMap);
        }
        else
        {
            promise.reject("Failed to call RCTCoreEstimatedSize::getMin", "First parameter of RCTCoreEstimatedSize::getMin should be an instance of RCTCoreEstimatedSize");
        }
    }

    @ReactMethod
    public void getMax(ReadableMap currentInstance, Promise promise)
    {
        String uid = currentInstance.getString("uid");
        if (uid.length() > 0)
        {
            EstimatedSize javaObj = this.javaObjects.get(uid);
            int result = javaObj.getMax();
            WritableNativeMap resultMap = new WritableNativeMap();
            resultMap.putInt("value", result);
            promise.resolve(resultMap);
        }
        else
        {
            promise.reject("Failed to call RCTCoreEstimatedSize::getMax", "First parameter of RCTCoreEstimatedSize::getMax should be an instance of RCTCoreEstimatedSize");
        }
    }

}
