// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_script.djinni

package com.ledger.reactnative;

import co.ledger.core.BitcoinLikeOperator;
import co.ledger.core.BitcoinLikeScriptChunk;
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

public class RCTCoreBitcoinLikeScriptChunk extends ReactContextBaseJavaModule {

    private final ReactApplicationContext reactContext;
    private Map<String, BitcoinLikeScriptChunk> javaObjects;
    public Map<String, BitcoinLikeScriptChunk> getJavaObjects()
    {
        return javaObjects;
    }

    public RCTCoreBitcoinLikeScriptChunk(ReactApplicationContext reactContext)
    {
        super(reactContext);
        this.reactContext = reactContext;
        this.javaObjects = new HashMap<String, BitcoinLikeScriptChunk>();
        WritableNativeMap.setUseNativeAccessor(true);
    }

    @Override
    public String getName()
    {
        return "RCTCoreBitcoinLikeScriptChunk";
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
            promise.reject("Failed to release instance of RCTCoreBitcoinLikeScriptChunk", "First parameter of RCTCoreBitcoinLikeScriptChunk::release should be an instance of RCTCoreBitcoinLikeScriptChunk");
        }
    }
    @ReactMethod
    public void log(Promise promise)
    {
        WritableNativeArray result = new WritableNativeArray();
        for (Map.Entry<String, BitcoinLikeScriptChunk> elem : this.javaObjects.entrySet())
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
    public static byte[] hexStringToByteArray(String hexString)
    {
        int hexStringLength = hexString.length();
        byte[] data = new byte[hexStringLength / 2];
        for (int i = 0; i < hexStringLength; i += 2)
        {
            data[i / 2] = (byte) ((Character.digit(hexString.charAt(i), 16) << 4) + Character.digit(hexString.charAt(i+1), 16));
        }
        return data;
    }
    static final String HEXES = "0123456789ABCDEF";
    public static String byteArrayToHexString( byte [] data)
    {
        if (data == null)
        {
            return null;
        }
        final StringBuilder hexStringBuilder = new StringBuilder( 2 * data.length );
        for ( final byte b : data )
        {
            hexStringBuilder.append(HEXES.charAt((b & 0xF0) >> 4)).append(HEXES.charAt((b & 0x0F)));
        }
        return hexStringBuilder.toString();
    }

    @ReactMethod
    public void isOperator(ReadableMap currentInstance, Promise promise) {
        try
        {
            String sUid = currentInstance.getString("uid");

            BitcoinLikeScriptChunk currentInstanceObj = this.javaObjects.get(sUid);

            boolean javaResult = currentInstanceObj.isOperator();
            WritableNativeMap result = new WritableNativeMap();
            result.putBoolean("value", javaResult);

            promise.resolve(result);
        }
        catch(Exception e)
        {
            promise.reject(e.toString(), e.getMessage());
        }
    }
    @ReactMethod
    public void isPushedData(ReadableMap currentInstance, Promise promise) {
        try
        {
            String sUid = currentInstance.getString("uid");

            BitcoinLikeScriptChunk currentInstanceObj = this.javaObjects.get(sUid);

            boolean javaResult = currentInstanceObj.isPushedData();
            WritableNativeMap result = new WritableNativeMap();
            result.putBoolean("value", javaResult);

            promise.resolve(result);
        }
        catch(Exception e)
        {
            promise.reject(e.toString(), e.getMessage());
        }
    }
    @ReactMethod
    public void getOperator(ReadableMap currentInstance, Promise promise) {
        try
        {
            String sUid = currentInstance.getString("uid");

            BitcoinLikeScriptChunk currentInstanceObj = this.javaObjects.get(sUid);

            BitcoinLikeOperator javaResult = currentInstanceObj.getOperator();

            String javaResult_uuid = UUID.randomUUID().toString();
            RCTCoreBitcoinLikeOperator rctImpl_javaResult = this.reactContext.getNativeModule(RCTCoreBitcoinLikeOperator.class);
            rctImpl_javaResult.getJavaObjects().put(javaResult_uuid, javaResult);
            WritableNativeMap result = new WritableNativeMap();
            result.putString("type","RCTCoreBitcoinLikeOperator");
            result.putString("uid",javaResult_uuid);

            promise.resolve(result);
        }
        catch(Exception e)
        {
            promise.reject(e.toString(), e.getMessage());
        }
    }
    @ReactMethod
    public void getPushedData(ReadableMap currentInstance, Promise promise) {
        try
        {
            String sUid = currentInstance.getString("uid");

            BitcoinLikeScriptChunk currentInstanceObj = this.javaObjects.get(sUid);

            byte[] javaResult = currentInstanceObj.getPushedData();
            WritableNativeMap result = new WritableNativeMap();
            String finalJavaResult = byteArrayToHexString(javaResult);
            result.putString("value", finalJavaResult);

            promise.resolve(result);
        }
        catch(Exception e)
        {
            promise.reject(e.toString(), e.getMessage());
        }
    }
    @ReactMethod
    public void next(ReadableMap currentInstance, Promise promise) {
        try
        {
            String sUid = currentInstance.getString("uid");

            BitcoinLikeScriptChunk currentInstanceObj = this.javaObjects.get(sUid);

            BitcoinLikeScriptChunk javaResult = currentInstanceObj.next();

            String javaResult_uuid = UUID.randomUUID().toString();
            RCTCoreBitcoinLikeScriptChunk rctImpl_javaResult = this.reactContext.getNativeModule(RCTCoreBitcoinLikeScriptChunk.class);
            rctImpl_javaResult.getJavaObjects().put(javaResult_uuid, javaResult);
            WritableNativeMap result = new WritableNativeMap();
            result.putString("type","RCTCoreBitcoinLikeScriptChunk");
            result.putString("uid",javaResult_uuid);

            promise.resolve(result);
        }
        catch(Exception e)
        {
            promise.reject(e.toString(), e.getMessage());
        }
    }
    @ReactMethod
    public void hasNext(ReadableMap currentInstance, Promise promise) {
        try
        {
            String sUid = currentInstance.getString("uid");

            BitcoinLikeScriptChunk currentInstanceObj = this.javaObjects.get(sUid);

            boolean javaResult = currentInstanceObj.hasNext();
            WritableNativeMap result = new WritableNativeMap();
            result.putBoolean("value", javaResult);

            promise.resolve(result);
        }
        catch(Exception e)
        {
            promise.reject(e.toString(), e.getMessage());
        }
    }
}
