// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from addresses.djinni

#import "RCTCoreLGBitcoinLikeNetworkParameters.h"
#import "LGBitcoinLikeNetworkParameters.h"

@implementation RCTCoreLGBitcoinLikeNetworkParameters

//Export module
RCT_EXPORT_MODULE(RCTCoreLGBitcoinLikeNetworkParameters)

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
RCT_REMAP_METHOD(init, initWithIdentifier:(nonnull NSString *)Identifier
                             P2PKHVersion:(NSString *)P2PKHVersion
                              P2SHVersion:(NSString *)P2SHVersion
                              XPUBVersion:(NSString *)XPUBVersion
                                FeePolicy:(int)FeePolicy
                               DustAmount:(int)DustAmount
                            MessagePrefix:(nonnull NSString *)MessagePrefix
               UsesTimestampedTransaction:(BOOL)UsesTimestampedTransaction
                           TimestampDelay:(int)TimestampDelay
                                  SigHash:(NSString *)SigHash
                           AdditionalBIPs:(nonnull NSArray<NSString *> *)AdditionalBIPs withResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {
    NSData *field_1 = [self hexStringToData:P2PKHVersion];

    NSData *field_2 = [self hexStringToData:P2SHVersion];

    NSData *field_3 = [self hexStringToData:XPUBVersion];

    NSData *field_9 = [self hexStringToData:SigHash];



    LGBitcoinLikeNetworkParameters * finalResult = [[LGBitcoinLikeNetworkParameters alloc] initWithIdentifier:Identifier P2PKHVersion:field_1 P2SHVersion:field_2 XPUBVersion:field_3 FeePolicy:(LGBitcoinLikeFeePolicy)FeePolicy DustAmount:DustAmount MessagePrefix:MessagePrefix UsesTimestampedTransaction:UsesTimestampedTransaction TimestampDelay:TimestampDelay SigHash:field_9 AdditionalBIPs:AdditionalBIPs];
    NSString *uuid = [[NSUUID UUID] UUIDString];
    RCTCoreLGBitcoinLikeNetworkParameters *rctImpl = (RCTCoreLGBitcoinLikeNetworkParameters *)[self.bridge moduleForName:@"CoreLGBitcoinLikeNetworkParameters"];
    NSArray *finalResultArray = [[NSArray alloc] initWithObjects:finalResult, uuid, nil];
    [rctImpl baseSetObject:finalResultArray];
    NSDictionary *result = @{@"type" : @"CoreLGBitcoinLikeNetworkParameters", @"uid" : uuid };
    if (result)
    {
        resolve(result);
    }
}

RCT_REMAP_METHOD(getIdentifier, getIdentifier:(NSDictionary *)currentInstance withResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)rejecter)
{
    LGBitcoinLikeNetworkParameters *objcImpl = (LGBitcoinLikeNetworkParameters *)[self.objcImplementations objectForKey:currentInstance[@"uid"]];
    NSDictionary *result = @{@"value" : objcImpl.Identifier};
    resolve(result);
}

RCT_REMAP_METHOD(getP2PKHVersion, getP2PKHVersion:(NSDictionary *)currentInstance withResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)rejecter)
{
    LGBitcoinLikeNetworkParameters *objcImpl = (LGBitcoinLikeNetworkParameters *)[self.objcImplementations objectForKey:currentInstance[@"uid"]];
    NSDictionary *result = @{@"value" : objcImpl.P2PKHVersion.description};
    resolve(result);
}

RCT_REMAP_METHOD(getP2SHVersion, getP2SHVersion:(NSDictionary *)currentInstance withResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)rejecter)
{
    LGBitcoinLikeNetworkParameters *objcImpl = (LGBitcoinLikeNetworkParameters *)[self.objcImplementations objectForKey:currentInstance[@"uid"]];
    NSDictionary *result = @{@"value" : objcImpl.P2SHVersion.description};
    resolve(result);
}

RCT_REMAP_METHOD(getXPUBVersion, getXPUBVersion:(NSDictionary *)currentInstance withResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)rejecter)
{
    LGBitcoinLikeNetworkParameters *objcImpl = (LGBitcoinLikeNetworkParameters *)[self.objcImplementations objectForKey:currentInstance[@"uid"]];
    NSDictionary *result = @{@"value" : objcImpl.XPUBVersion.description};
    resolve(result);
}

RCT_REMAP_METHOD(getFeePolicy, getFeePolicy:(NSDictionary *)currentInstance withResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)rejecter)
{
    LGBitcoinLikeNetworkParameters *objcImpl = (LGBitcoinLikeNetworkParameters *)[self.objcImplementations objectForKey:currentInstance[@"uid"]];
    NSDictionary *result = @{@"value" : @((int)objcImpl.FeePolicy)};
    resolve(result);
}

RCT_REMAP_METHOD(getDustAmount, getDustAmount:(NSDictionary *)currentInstance withResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)rejecter)
{
    LGBitcoinLikeNetworkParameters *objcImpl = (LGBitcoinLikeNetworkParameters *)[self.objcImplementations objectForKey:currentInstance[@"uid"]];
    NSDictionary *result = @{@"value" : @((int)objcImpl.DustAmount)};
    resolve(result);
}

RCT_REMAP_METHOD(getMessagePrefix, getMessagePrefix:(NSDictionary *)currentInstance withResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)rejecter)
{
    LGBitcoinLikeNetworkParameters *objcImpl = (LGBitcoinLikeNetworkParameters *)[self.objcImplementations objectForKey:currentInstance[@"uid"]];
    NSDictionary *result = @{@"value" : objcImpl.MessagePrefix};
    resolve(result);
}

RCT_REMAP_METHOD(getUsesTimestampedTransaction, getUsesTimestampedTransaction:(NSDictionary *)currentInstance withResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)rejecter)
{
    LGBitcoinLikeNetworkParameters *objcImpl = (LGBitcoinLikeNetworkParameters *)[self.objcImplementations objectForKey:currentInstance[@"uid"]];
    NSDictionary *result = @{@"value" : @(objcImpl.UsesTimestampedTransaction)};
    resolve(result);
}

RCT_REMAP_METHOD(getTimestampDelay, getTimestampDelay:(NSDictionary *)currentInstance withResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)rejecter)
{
    LGBitcoinLikeNetworkParameters *objcImpl = (LGBitcoinLikeNetworkParameters *)[self.objcImplementations objectForKey:currentInstance[@"uid"]];
    NSDictionary *result = @{@"value" : @((int)objcImpl.TimestampDelay)};
    resolve(result);
}

RCT_REMAP_METHOD(getSigHash, getSigHash:(NSDictionary *)currentInstance withResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)rejecter)
{
    LGBitcoinLikeNetworkParameters *objcImpl = (LGBitcoinLikeNetworkParameters *)[self.objcImplementations objectForKey:currentInstance[@"uid"]];
    NSDictionary *result = @{@"value" : objcImpl.SigHash.description};
    resolve(result);
}

RCT_REMAP_METHOD(getAdditionalBIPs, getAdditionalBIPs:(NSDictionary *)currentInstance withResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)rejecter)
{
    LGBitcoinLikeNetworkParameters *objcImpl = (LGBitcoinLikeNetworkParameters *)[self.objcImplementations objectForKey:currentInstance[@"uid"]];
    NSDictionary *result = @{@"value" : objcImpl.AdditionalBIPs};
    resolve(result);
}

@end
