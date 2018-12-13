// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from http_client.djinni

#import "RCTCoreLGHttpReadBodyResult.h"
#import "LGHttpReadBodyResult.h"

@implementation RCTCoreLGHttpReadBodyResult

//Export module
RCT_EXPORT_MODULE(RCTCoreLGHttpReadBodyResult)

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
RCT_REMAP_METHOD(init, initWithError:(nullable NSDictionary *)error
                                data:(NSString *)data withResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {
    NSMutableDictionary *implementationsData = [[NSMutableDictionary alloc] init];
    RCTCoreLGError *rctParam_error = (RCTCoreLGError *)[self.bridge moduleForName:@"CoreLGError"];
    LGError *field_0 = (LGError *)[rctParam_error.objcImplementations objectForKey:error[@"uid"]];
    [implementationsData setObject:error[@"uid"] forKey:@"error"];
    NSData *field_1 = [self hexStringToData:data];



    LGHttpReadBodyResult * finalResult = [[LGHttpReadBodyResult alloc] initWithError:field_0 data:field_1];
    NSString *uuid = [[NSUUID UUID] UUIDString];
    RCTCoreLGHttpReadBodyResult *rctImpl = (RCTCoreLGHttpReadBodyResult *)[self.bridge moduleForName:@"CoreLGHttpReadBodyResult"];
    NSArray *finalResultArray = [[NSArray alloc] initWithObjects:finalResult, uuid, nil];
    [rctImpl baseSetObject:finalResultArray];
    NSDictionary *result = @{@"type" : @"CoreLGHttpReadBodyResult", @"uid" : uuid };
    if (result)
    {
        [self.implementationsData setObject:implementationsData forKey:uuid];
        resolve(result);
    }
}

-(void)mapImplementationsData:(NSDictionary *)currentInstance
{
    LGHttpReadBodyResult *objcImpl = (LGHttpReadBodyResult *)[self.objcImplementations objectForKey:currentInstance[@"uid"]];
    NSMutableDictionary *implementationsData = [[NSMutableDictionary alloc] init];
    id field_0 = objcImpl.error;
    NSString *field_0_uuid = [[NSUUID UUID] UUIDString];
    RCTCoreLGError *rctImpl_field_0 = (RCTCoreLGError *)[self.bridge moduleForName:@"CoreLGError"];
    if (field_0)
    {
        NSArray *field_0_array = [[NSArray alloc] initWithObjects:field_0, field_0_uuid, nil];
        [rctImpl_field_0 baseSetObject:field_0_array];
    }
    NSDictionary *converted_field_0 = @{@"type" : @"CoreLGError", @"uid" : field_0_uuid };
    [implementationsData setObject:converted_field_0 forKey:@"error"];
    [self.implementationsData setObject:implementationsData forKey:currentInstance[@"uid"]];
}
RCT_REMAP_METHOD(getError, getError:(NSDictionary *)currentInstance withResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)rejecter)
{
    NSDictionary *data = (NSDictionary *)[self.implementationsData objectForKey:currentInstance[@"uid"]];
    if (!data)
    {
        [self mapImplementationsData:currentInstance];
        data = (NSDictionary *)[self.implementationsData objectForKey:currentInstance[@"uid"]];
    }
    NSDictionary *result = [data objectForKey:@"error"];
    resolve(result);
}

RCT_REMAP_METHOD(getData, getData:(NSDictionary *)currentInstance withResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)rejecter)
{
    LGHttpReadBodyResult *objcImpl = (LGHttpReadBodyResult *)[self.objcImplementations objectForKey:currentInstance[@"uid"]];
    NSDictionary *result = @{@"value" : objcImpl.data.description};
    resolve(result);
}

@end
