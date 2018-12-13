// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from preferences.djinni

#import "RCTCoreLGPreferences.h"


@implementation RCTCoreLGPreferences
//Export module
RCT_EXPORT_MODULE(RCTCoreLGPreferences)

@synthesize bridge = _bridge;


+ (BOOL)requiresMainQueueSetup
{
    return NO;
}
RCT_REMAP_METHOD(release, release:(NSDictionary *)currentInstance withResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject)
{
    [self baseRelease:currentInstance withResolver: resolve rejecter:reject];
}
RCT_REMAP_METHOD(log, logWithResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject)
{
    [self baseLogWithResolver:resolve rejecter:reject];
}
RCT_REMAP_METHOD(flush, flushWithResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject)
{
    [self baseFlushWithResolver:resolve rejecter:reject];
}
RCT_REMAP_METHOD(isNull, isNull:(NSDictionary *)currentInstance withResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject)
{
    [self baseIsNull:currentInstance withResolver:resolve rejecter:reject];
}
-(NSData *) hexStringToData: (NSString *)hexString 
{
    NSMutableData *data= [[NSMutableData alloc] init];
    unsigned char byte;
    char byteChars[3] = {'\0','\0','\0'};
    for (int i = 0; i < ([hexString length] / 2); i++)
    {
        byteChars[0] = [hexString characterAtIndex: i*2];
        byteChars[1] = [hexString characterAtIndex: i*2 + 1];
        byte = strtol(byteChars, NULL, 16);
        [data appendBytes:&byte length:1];
    }
    return data;
}

/**
 * Retrieves the value associated with the given key or fallback to the default value.
 * @return The data associated with the key or fallbackValue.
 */
RCT_REMAP_METHOD(getString,getString:(NSDictionary *)currentInstance withParams:(nonnull NSString *)key
                                                                  fallbackValue:(nonnull NSString *)fallbackValue withResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {
    if (!currentInstance[@"uid"] || !currentInstance[@"type"])
    {
        reject(@"impl_call_error", @"Error while calling RCTCoreLGPreferences::getString, first argument should be an instance of LGPreferences", nil);
        return;
    }
    LGPreferences *currentInstanceObj = [self.objcImplementations objectForKey:currentInstance[@"uid"]];
    if (!currentInstanceObj)
    {
        NSString *error = [NSString stringWithFormat:@"Error while calling LGPreferences::getString, instance of uid %@ not found", currentInstance[@"uid"]];
        reject(@"impl_call_error", error, nil);
        return;
    }
    NSString * objcResult = [currentInstanceObj getString:key fallbackValue:fallbackValue];
    NSDictionary *result = @{@"value" : objcResult};
    if(result)
    {
        resolve(result);
    }
    else
    {
        reject(@"impl_call_error", @"Error while calling LGPreferences::getString", nil);
        return;
    }

}

/**
 * Retrieves the value associated with the given key or fallback to the default value.
 * @return The data associated with the key or fallbackValue.
 */
RCT_REMAP_METHOD(getInt,getInt:(NSDictionary *)currentInstance withParams:(nonnull NSString *)key
                                                            fallbackValue:(int)fallbackValue withResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {
    if (!currentInstance[@"uid"] || !currentInstance[@"type"])
    {
        reject(@"impl_call_error", @"Error while calling RCTCoreLGPreferences::getInt, first argument should be an instance of LGPreferences", nil);
        return;
    }
    LGPreferences *currentInstanceObj = [self.objcImplementations objectForKey:currentInstance[@"uid"]];
    if (!currentInstanceObj)
    {
        NSString *error = [NSString stringWithFormat:@"Error while calling LGPreferences::getInt, instance of uid %@ not found", currentInstance[@"uid"]];
        reject(@"impl_call_error", error, nil);
        return;
    }
    NSInteger objcResult = [currentInstanceObj getInt:key fallbackValue:fallbackValue];
    NSDictionary *result = @{@"value" : @(objcResult)};
    if(result)
    {
        resolve(result);
    }
    else
    {
        reject(@"impl_call_error", @"Error while calling LGPreferences::getInt", nil);
        return;
    }

}

/**
 * Retrieves the value associated with the given key or fallback to the default value.
 * @return The data associated with the key or fallbackValue.
 */
RCT_REMAP_METHOD(getLong,getLong:(NSDictionary *)currentInstance withParams:(nonnull NSString *)key
                                                              fallbackValue:(int)fallbackValue withResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {
    if (!currentInstance[@"uid"] || !currentInstance[@"type"])
    {
        reject(@"impl_call_error", @"Error while calling RCTCoreLGPreferences::getLong, first argument should be an instance of LGPreferences", nil);
        return;
    }
    LGPreferences *currentInstanceObj = [self.objcImplementations objectForKey:currentInstance[@"uid"]];
    if (!currentInstanceObj)
    {
        NSString *error = [NSString stringWithFormat:@"Error while calling LGPreferences::getLong, instance of uid %@ not found", currentInstance[@"uid"]];
        reject(@"impl_call_error", error, nil);
        return;
    }
    NSInteger objcResult = [currentInstanceObj getLong:key fallbackValue:fallbackValue];
    NSDictionary *result = @{@"value" : @(objcResult)};
    if(result)
    {
        resolve(result);
    }
    else
    {
        reject(@"impl_call_error", @"Error while calling LGPreferences::getLong", nil);
        return;
    }

}

/**
 * Retrieves the value associated with the given key or fallback to the default value.
 * @return The data associated with the key or fallbackValue.
 */
RCT_REMAP_METHOD(getBoolean,getBoolean:(NSDictionary *)currentInstance withParams:(nonnull NSString *)key
                                                                    fallbackValue:(BOOL)fallbackValue withResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {
    if (!currentInstance[@"uid"] || !currentInstance[@"type"])
    {
        reject(@"impl_call_error", @"Error while calling RCTCoreLGPreferences::getBoolean, first argument should be an instance of LGPreferences", nil);
        return;
    }
    LGPreferences *currentInstanceObj = [self.objcImplementations objectForKey:currentInstance[@"uid"]];
    if (!currentInstanceObj)
    {
        NSString *error = [NSString stringWithFormat:@"Error while calling LGPreferences::getBoolean, instance of uid %@ not found", currentInstance[@"uid"]];
        reject(@"impl_call_error", error, nil);
        return;
    }
    BOOL objcResult = [currentInstanceObj getBoolean:key fallbackValue:fallbackValue];
    NSDictionary *result = @{@"value" : @(objcResult)};
    if(result)
    {
        resolve(result);
    }
    else
    {
        reject(@"impl_call_error", @"Error while calling LGPreferences::getBoolean", nil);
        return;
    }

}

/**
 * Retrieves the value associated with the given key or fallback to the default value.
 * @return The data associated with the key or fallbackValue.
 */
RCT_REMAP_METHOD(getStringArray,getStringArray:(NSDictionary *)currentInstance withParams:(nonnull NSString *)key
                                                                            fallbackValue:(nonnull NSArray<NSString *> *)fallbackValue withResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {
    if (!currentInstance[@"uid"] || !currentInstance[@"type"])
    {
        reject(@"impl_call_error", @"Error while calling RCTCoreLGPreferences::getStringArray, first argument should be an instance of LGPreferences", nil);
        return;
    }
    LGPreferences *currentInstanceObj = [self.objcImplementations objectForKey:currentInstance[@"uid"]];
    if (!currentInstanceObj)
    {
        NSString *error = [NSString stringWithFormat:@"Error while calling LGPreferences::getStringArray, instance of uid %@ not found", currentInstance[@"uid"]];
        reject(@"impl_call_error", error, nil);
        return;
    }
    NSArray<NSString *> * objcResult = [currentInstanceObj getStringArray:key fallbackValue:fallbackValue];
    NSDictionary *result = @{@"value" : objcResult};
    if(result)
    {
        resolve(result);
    }
    else
    {
        reject(@"impl_call_error", @"Error while calling LGPreferences::getStringArray", nil);
        return;
    }

}

/**
 * Retrieves the value associated with the given key or fallback to the default value.
 * @return The data associated with the key or fallbackValue.
 */
RCT_REMAP_METHOD(getData,getData:(NSDictionary *)currentInstance withParams:(nonnull NSString *)key
                                                              fallbackValue:(NSString *)fallbackValue withResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {
    if (!currentInstance[@"uid"] || !currentInstance[@"type"])
    {
        reject(@"impl_call_error", @"Error while calling RCTCoreLGPreferences::getData, first argument should be an instance of LGPreferences", nil);
        return;
    }
    LGPreferences *currentInstanceObj = [self.objcImplementations objectForKey:currentInstance[@"uid"]];
    if (!currentInstanceObj)
    {
        NSString *error = [NSString stringWithFormat:@"Error while calling LGPreferences::getData, instance of uid %@ not found", currentInstance[@"uid"]];
        reject(@"impl_call_error", error, nil);
        return;
    }
    NSData *objcParam_1 = [self hexStringToData:fallbackValue];

    NSData * objcResult = [currentInstanceObj getData:key fallbackValue:objcParam_1];
    NSDictionary *result = @{@"value" : objcResult.description};
    if(result)
    {
        resolve(result);
    }
    else
    {
        reject(@"impl_call_error", @"Error while calling LGPreferences::getData", nil);
        return;
    }

}

/**
 * Checks whether the Preferences contains the given key.
 * @return true the preferences contains the key, false otherwise.
 */
RCT_REMAP_METHOD(contains,contains:(NSDictionary *)currentInstance withParams:(nonnull NSString *)key withResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {
    if (!currentInstance[@"uid"] || !currentInstance[@"type"])
    {
        reject(@"impl_call_error", @"Error while calling RCTCoreLGPreferences::contains, first argument should be an instance of LGPreferences", nil);
        return;
    }
    LGPreferences *currentInstanceObj = [self.objcImplementations objectForKey:currentInstance[@"uid"]];
    if (!currentInstanceObj)
    {
        NSString *error = [NSString stringWithFormat:@"Error while calling LGPreferences::contains, instance of uid %@ not found", currentInstance[@"uid"]];
        reject(@"impl_call_error", error, nil);
        return;
    }
    BOOL objcResult = [currentInstanceObj contains:key];
    NSDictionary *result = @{@"value" : @(objcResult)};
    if(result)
    {
        resolve(result);
    }
    else
    {
        reject(@"impl_call_error", @"Error while calling LGPreferences::contains", nil);
        return;
    }

}

/**
 * Get a preferences editor in order to add/modify/remove data.
 * @return An interface for editting preferences.
 */
RCT_REMAP_METHOD(edit,edit:(NSDictionary *)currentInstance WithResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {
    if (!currentInstance[@"uid"] || !currentInstance[@"type"])
    {
        reject(@"impl_call_error", @"Error while calling RCTCoreLGPreferences::edit, first argument should be an instance of LGPreferences", nil);
        return;
    }
    LGPreferences *currentInstanceObj = [self.objcImplementations objectForKey:currentInstance[@"uid"]];
    if (!currentInstanceObj)
    {
        NSString *error = [NSString stringWithFormat:@"Error while calling LGPreferences::edit, instance of uid %@ not found", currentInstance[@"uid"]];
        reject(@"impl_call_error", error, nil);
        return;
    }
    LGPreferencesEditor * objcResult = [currentInstanceObj edit];

    NSString *objcResult_uuid = [[NSUUID UUID] UUIDString];
    RCTCoreLGPreferencesEditor *rctImpl_objcResult = (RCTCoreLGPreferencesEditor *)[self.bridge moduleForName:@"CoreLGPreferencesEditor"];
    NSArray *objcResult_array = [[NSArray alloc] initWithObjects:objcResult, objcResult_uuid, nil];
    [rctImpl_objcResult baseSetObject:objcResult_array];
    NSDictionary *result = @{@"type" : @"CoreLGPreferencesEditor", @"uid" : objcResult_uuid };

    if(result)
    {
        resolve(result);
    }
    else
    {
        reject(@"impl_call_error", @"Error while calling LGPreferences::edit", nil);
        return;
    }

}
@end
