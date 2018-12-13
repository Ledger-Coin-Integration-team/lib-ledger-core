// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from networks.djinni

#import "RCTCoreLGNetworks.h"


@implementation RCTCoreLGNetworks
//Export module
RCT_EXPORT_MODULE(RCTCoreLGNetworks)

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

RCT_REMAP_METHOD(bitcoin,bitcoinWithResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {
    LGBitcoinLikeNetworkParameters * objcResult = [LGNetworks bitcoin];

    NSString *objcResult_uuid = [[NSUUID UUID] UUIDString];
    RCTCoreLGBitcoinLikeNetworkParameters *rctImpl_objcResult = (RCTCoreLGBitcoinLikeNetworkParameters *)[self.bridge moduleForName:@"CoreLGBitcoinLikeNetworkParameters"];
    NSArray *objcResult_array = [[NSArray alloc] initWithObjects:objcResult, objcResult_uuid, nil];
    [rctImpl_objcResult baseSetObject:objcResult_array];
    NSDictionary *result = @{@"type" : @"CoreLGBitcoinLikeNetworkParameters", @"uid" : objcResult_uuid };

    if(result)
    {
        resolve(result);
    }
    else
    {
        reject(@"impl_call_error", @"Error while calling LGNetworks::bitcoin", nil);
        return;
    }

}
@end
