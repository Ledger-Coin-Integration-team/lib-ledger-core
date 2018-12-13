// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from emitter.djinni

#import "RCTCoreLGEventBus.h"


@implementation RCTCoreLGEventBus
//Export module
RCT_EXPORT_MODULE(RCTCoreLGEventBus)

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

/**
 *Subscribe an event receiver to the event bus
 *@param context, ExecutionContext object, execution context in which receiver will be notified
 *@param reveiver, EventReceiver object, receiver that event bu will notify
 */
RCT_REMAP_METHOD(subscribe,subscribe:(NSDictionary *)currentInstance withParams:(NSDictionary *)context
                                                                       receiver:(NSDictionary *)receiver withResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {
    if (!currentInstance[@"uid"] || !currentInstance[@"type"])
    {
        reject(@"impl_call_error", @"Error while calling RCTCoreLGEventBus::subscribe, first argument should be an instance of LGEventBus", nil);
        return;
    }
    LGEventBus *currentInstanceObj = [self.objcImplementations objectForKey:currentInstance[@"uid"]];
    if (!currentInstanceObj)
    {
        NSString *error = [NSString stringWithFormat:@"Error while calling LGEventBus::subscribe, instance of uid %@ not found", currentInstance[@"uid"]];
        reject(@"impl_call_error", error, nil);
        return;
    }
    RCTCoreLGExecutionContext *rctParam_context = (RCTCoreLGExecutionContext *)[self.bridge moduleForName:@"CoreLGExecutionContext"];
    id<LGExecutionContext>objcParam_0 = (id<LGExecutionContext>)[rctParam_context.objcImplementations objectForKey:context[@"uid"]];
    LGExecutionContextImpl *objcParam_0_objc = (LGExecutionContextImpl *)objcParam_0;
    if (objcParam_0_objc)
    {
        objcParam_0_objc.resolve = resolve;
        objcParam_0_objc.reject = reject;
    }
    RCTCoreLGEventReceiver *rctParam_receiver = (RCTCoreLGEventReceiver *)[self.bridge moduleForName:@"CoreLGEventReceiver"];
    id<LGEventReceiver>objcParam_1 = (id<LGEventReceiver>)[rctParam_receiver.objcImplementations objectForKey:receiver[@"uid"]];
    LGEventReceiverImpl *objcParam_1_objc = (LGEventReceiverImpl *)objcParam_1;
    if (objcParam_1_objc)
    {
        objcParam_1_objc.resolve = resolve;
        objcParam_1_objc.reject = reject;
    }
    [currentInstanceObj subscribe:objcParam_0 receiver:objcParam_1];

}

/**
 *Unsubscribe an event receiver from the event bus
 *@param receiver, EventReceiver object, receiver to unsubscribe
 */
RCT_REMAP_METHOD(unsubscribe,unsubscribe:(NSDictionary *)currentInstance withParams:(NSDictionary *)receiver withResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {
    if (!currentInstance[@"uid"] || !currentInstance[@"type"])
    {
        reject(@"impl_call_error", @"Error while calling RCTCoreLGEventBus::unsubscribe, first argument should be an instance of LGEventBus", nil);
        return;
    }
    LGEventBus *currentInstanceObj = [self.objcImplementations objectForKey:currentInstance[@"uid"]];
    if (!currentInstanceObj)
    {
        NSString *error = [NSString stringWithFormat:@"Error while calling LGEventBus::unsubscribe, instance of uid %@ not found", currentInstance[@"uid"]];
        reject(@"impl_call_error", error, nil);
        return;
    }
    RCTCoreLGEventReceiver *rctParam_receiver = (RCTCoreLGEventReceiver *)[self.bridge moduleForName:@"CoreLGEventReceiver"];
    id<LGEventReceiver>objcParam_0 = (id<LGEventReceiver>)[rctParam_receiver.objcImplementations objectForKey:receiver[@"uid"]];
    LGEventReceiverImpl *objcParam_0_objc = (LGEventReceiverImpl *)objcParam_0;
    if (objcParam_0_objc)
    {
        objcParam_0_objc.resolve = resolve;
        objcParam_0_objc.reject = reject;
    }
    [currentInstanceObj unsubscribe:objcParam_0];

}
@end
