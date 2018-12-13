// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet.djinni

#import "RCTCoreLGWallet.h"


@implementation RCTCoreLGWallet
//Export module
RCT_EXPORT_MODULE(RCTCoreLGWallet)

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
 *Get name of wallet
 *@return string
 */
RCT_REMAP_METHOD(getName,getName:(NSDictionary *)currentInstance WithResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {
    if (!currentInstance[@"uid"] || !currentInstance[@"type"])
    {
        reject(@"impl_call_error", @"Error while calling RCTCoreLGWallet::getName, first argument should be an instance of LGWallet", nil);
        return;
    }
    LGWallet *currentInstanceObj = [self.objcImplementations objectForKey:currentInstance[@"uid"]];
    if (!currentInstanceObj)
    {
        NSString *error = [NSString stringWithFormat:@"Error while calling LGWallet::getName, instance of uid %@ not found", currentInstance[@"uid"]];
        reject(@"impl_call_error", error, nil);
        return;
    }
    NSString * objcResult = [currentInstanceObj getName];
    NSDictionary *result = @{@"value" : objcResult};
    if(result)
    {
        resolve(result);
    }
    else
    {
        reject(@"impl_call_error", @"Error while calling LGWallet::getName", nil);
        return;
    }

}

/**
 *Get account with specific index
 *@param index, 32 bits integer, index of account in wallet
 *@param callback, Callback returning, if getAccount succeed, an Account object with given index
 */
RCT_REMAP_METHOD(getAccount,getAccount:(NSDictionary *)currentInstance withParams:(int)index withResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {
    if (!currentInstance[@"uid"] || !currentInstance[@"type"])
    {
        reject(@"impl_call_error", @"Error while calling RCTCoreLGWallet::getAccount, first argument should be an instance of LGWallet", nil);
        return;
    }
    LGWallet *currentInstanceObj = [self.objcImplementations objectForKey:currentInstance[@"uid"]];
    if (!currentInstanceObj)
    {
        NSString *error = [NSString stringWithFormat:@"Error while calling LGWallet::getAccount, instance of uid %@ not found", currentInstance[@"uid"]];
        reject(@"impl_call_error", error, nil);
        return;
    }
    RCTCoreLGAccountCallback *objcParam_1 = [[RCTCoreLGAccountCallback alloc] initWithResolver:resolve rejecter:reject andBridge:self.bridge];
    [currentInstanceObj getAccount:index callback:objcParam_1];

}

/**
 *Get number of accounts instanciated under wallet
 *@param callback, Callback returning, if getAccountCount succeed, a 32 bits integer representing number of accounts
 */
RCT_REMAP_METHOD(getAccountCount,getAccountCount:(NSDictionary *)currentInstance WithResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {
    if (!currentInstance[@"uid"] || !currentInstance[@"type"])
    {
        reject(@"impl_call_error", @"Error while calling RCTCoreLGWallet::getAccountCount, first argument should be an instance of LGWallet", nil);
        return;
    }
    LGWallet *currentInstanceObj = [self.objcImplementations objectForKey:currentInstance[@"uid"]];
    if (!currentInstanceObj)
    {
        NSString *error = [NSString stringWithFormat:@"Error while calling LGWallet::getAccountCount, instance of uid %@ not found", currentInstance[@"uid"]];
        reject(@"impl_call_error", error, nil);
        return;
    }
    RCTCoreLGI32Callback *objcParam_0 = [[RCTCoreLGI32Callback alloc] initWithResolver:resolve rejecter:reject andBridge:self.bridge];
    [currentInstanceObj getAccountCount:objcParam_0];

}

/**
 *Get list of accounts instanciated under wallet in a given range
 *@param offset, 32 bits integer from which we retrieve accounts
 *@param count, 32 bits integer, number of accounts to retrieve
 *@param callback, ListCallback returning, if getAccounts succeed, list of Accounts object
 */
RCT_REMAP_METHOD(getAccounts,getAccounts:(NSDictionary *)currentInstance withParams:(int)offset
                                                                              count:(int)count withResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {
    if (!currentInstance[@"uid"] || !currentInstance[@"type"])
    {
        reject(@"impl_call_error", @"Error while calling RCTCoreLGWallet::getAccounts, first argument should be an instance of LGWallet", nil);
        return;
    }
    LGWallet *currentInstanceObj = [self.objcImplementations objectForKey:currentInstance[@"uid"]];
    if (!currentInstanceObj)
    {
        NSString *error = [NSString stringWithFormat:@"Error while calling LGWallet::getAccounts, instance of uid %@ not found", currentInstance[@"uid"]];
        reject(@"impl_call_error", error, nil);
        return;
    }
    RCTCoreLGAccountListCallback *objcParam_2 = [[RCTCoreLGAccountListCallback alloc] initWithResolver:resolve rejecter:reject andBridge:self.bridge];
    [currentInstanceObj getAccounts:offset count:count callback:objcParam_2];

}

/**
 *Get index of next account to create
 *@return callback, Callback returning a 32 bits integer
 */
RCT_REMAP_METHOD(getNextAccountIndex,getNextAccountIndex:(NSDictionary *)currentInstance WithResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {
    if (!currentInstance[@"uid"] || !currentInstance[@"type"])
    {
        reject(@"impl_call_error", @"Error while calling RCTCoreLGWallet::getNextAccountIndex, first argument should be an instance of LGWallet", nil);
        return;
    }
    LGWallet *currentInstanceObj = [self.objcImplementations objectForKey:currentInstance[@"uid"]];
    if (!currentInstanceObj)
    {
        NSString *error = [NSString stringWithFormat:@"Error while calling LGWallet::getNextAccountIndex, instance of uid %@ not found", currentInstance[@"uid"]];
        reject(@"impl_call_error", error, nil);
        return;
    }
    RCTCoreLGI32Callback *objcParam_0 = [[RCTCoreLGI32Callback alloc] initWithResolver:resolve rejecter:reject andBridge:self.bridge];
    [currentInstanceObj getNextAccountIndex:objcParam_0];

}

/**
 *Return event bus through which wallet synchronizes it's accounts and interact with blockchain
 *@return EventBus object
 */
RCT_REMAP_METHOD(getEventBus,getEventBus:(NSDictionary *)currentInstance WithResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {
    if (!currentInstance[@"uid"] || !currentInstance[@"type"])
    {
        reject(@"impl_call_error", @"Error while calling RCTCoreLGWallet::getEventBus, first argument should be an instance of LGWallet", nil);
        return;
    }
    LGWallet *currentInstanceObj = [self.objcImplementations objectForKey:currentInstance[@"uid"]];
    if (!currentInstanceObj)
    {
        NSString *error = [NSString stringWithFormat:@"Error while calling LGWallet::getEventBus, instance of uid %@ not found", currentInstance[@"uid"]];
        reject(@"impl_call_error", error, nil);
        return;
    }
    LGEventBus * objcResult = [currentInstanceObj getEventBus];

    NSString *objcResult_uuid = [[NSUUID UUID] UUIDString];
    RCTCoreLGEventBus *rctImpl_objcResult = (RCTCoreLGEventBus *)[self.bridge moduleForName:@"CoreLGEventBus"];
    NSArray *objcResult_array = [[NSArray alloc] initWithObjects:objcResult, objcResult_uuid, nil];
    [rctImpl_objcResult baseSetObject:objcResult_array];
    NSDictionary *result = @{@"type" : @"CoreLGEventBus", @"uid" : objcResult_uuid };

    if(result)
    {
        resolve(result);
    }
    else
    {
        reject(@"impl_call_error", @"Error while calling LGWallet::getEventBus", nil);
        return;
    }

}

/**
 *Return synchronization status wallet, true if at least one of accounts is synchronizing
 *@return bool
 */
RCT_REMAP_METHOD(isSynchronizing,isSynchronizing:(NSDictionary *)currentInstance WithResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {
    if (!currentInstance[@"uid"] || !currentInstance[@"type"])
    {
        reject(@"impl_call_error", @"Error while calling RCTCoreLGWallet::isSynchronizing, first argument should be an instance of LGWallet", nil);
        return;
    }
    LGWallet *currentInstanceObj = [self.objcImplementations objectForKey:currentInstance[@"uid"]];
    if (!currentInstanceObj)
    {
        NSString *error = [NSString stringWithFormat:@"Error while calling LGWallet::isSynchronizing, instance of uid %@ not found", currentInstance[@"uid"]];
        reject(@"impl_call_error", error, nil);
        return;
    }
    BOOL objcResult = [currentInstanceObj isSynchronizing];
    NSDictionary *result = @{@"value" : @(objcResult)};
    if(result)
    {
        resolve(result);
    }
    else
    {
        reject(@"impl_call_error", @"Error while calling LGWallet::isSynchronizing", nil);
        return;
    }

}

/**
 *Start synchronization of all accounts under wallet
 *@return EventBus object through which wallet get notified of account's synchronization status
 */
RCT_REMAP_METHOD(synchronize,synchronize:(NSDictionary *)currentInstance WithResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {
    if (!currentInstance[@"uid"] || !currentInstance[@"type"])
    {
        reject(@"impl_call_error", @"Error while calling RCTCoreLGWallet::synchronize, first argument should be an instance of LGWallet", nil);
        return;
    }
    LGWallet *currentInstanceObj = [self.objcImplementations objectForKey:currentInstance[@"uid"]];
    if (!currentInstanceObj)
    {
        NSString *error = [NSString stringWithFormat:@"Error while calling LGWallet::synchronize, instance of uid %@ not found", currentInstance[@"uid"]];
        reject(@"impl_call_error", error, nil);
        return;
    }
    LGEventBus * objcResult = [currentInstanceObj synchronize];

    NSString *objcResult_uuid = [[NSUUID UUID] UUIDString];
    RCTCoreLGEventBus *rctImpl_objcResult = (RCTCoreLGEventBus *)[self.bridge moduleForName:@"CoreLGEventBus"];
    NSArray *objcResult_array = [[NSArray alloc] initWithObjects:objcResult, objcResult_uuid, nil];
    [rctImpl_objcResult baseSetObject:objcResult_array];
    NSDictionary *result = @{@"type" : @"CoreLGEventBus", @"uid" : objcResult_uuid };

    if(result)
    {
        resolve(result);
    }
    else
    {
        reject(@"impl_call_error", @"Error while calling LGWallet::synchronize", nil);
        return;
    }

}

/**
 *Get wallet preferences
 *@return Preferences object
 */
RCT_REMAP_METHOD(getPreferences,getPreferences:(NSDictionary *)currentInstance WithResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {
    if (!currentInstance[@"uid"] || !currentInstance[@"type"])
    {
        reject(@"impl_call_error", @"Error while calling RCTCoreLGWallet::getPreferences, first argument should be an instance of LGWallet", nil);
        return;
    }
    LGWallet *currentInstanceObj = [self.objcImplementations objectForKey:currentInstance[@"uid"]];
    if (!currentInstanceObj)
    {
        NSString *error = [NSString stringWithFormat:@"Error while calling LGWallet::getPreferences, instance of uid %@ not found", currentInstance[@"uid"]];
        reject(@"impl_call_error", error, nil);
        return;
    }
    LGPreferences * objcResult = [currentInstanceObj getPreferences];

    NSString *objcResult_uuid = [[NSUUID UUID] UUIDString];
    RCTCoreLGPreferences *rctImpl_objcResult = (RCTCoreLGPreferences *)[self.bridge moduleForName:@"CoreLGPreferences"];
    NSArray *objcResult_array = [[NSArray alloc] initWithObjects:objcResult, objcResult_uuid, nil];
    [rctImpl_objcResult baseSetObject:objcResult_array];
    NSDictionary *result = @{@"type" : @"CoreLGPreferences", @"uid" : objcResult_uuid };

    if(result)
    {
        resolve(result);
    }
    else
    {
        reject(@"impl_call_error", @"Error while calling LGWallet::getPreferences", nil);
        return;
    }

}

/**
 *Return account's logger which provides all needed (e.g. database) logs
 *@return Logger Object
 */
RCT_REMAP_METHOD(getLogger,getLogger:(NSDictionary *)currentInstance WithResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {
    if (!currentInstance[@"uid"] || !currentInstance[@"type"])
    {
        reject(@"impl_call_error", @"Error while calling RCTCoreLGWallet::getLogger, first argument should be an instance of LGWallet", nil);
        return;
    }
    LGWallet *currentInstanceObj = [self.objcImplementations objectForKey:currentInstance[@"uid"]];
    if (!currentInstanceObj)
    {
        NSString *error = [NSString stringWithFormat:@"Error while calling LGWallet::getLogger, instance of uid %@ not found", currentInstance[@"uid"]];
        reject(@"impl_call_error", error, nil);
        return;
    }
    LGLogger * objcResult = [currentInstanceObj getLogger];

    NSString *objcResult_uuid = [[NSUUID UUID] UUIDString];
    RCTCoreLGLogger *rctImpl_objcResult = (RCTCoreLGLogger *)[self.bridge moduleForName:@"CoreLGLogger"];
    NSArray *objcResult_array = [[NSArray alloc] initWithObjects:objcResult, objcResult_uuid, nil];
    [rctImpl_objcResult baseSetObject:objcResult_array];
    NSDictionary *result = @{@"type" : @"CoreLGLogger", @"uid" : objcResult_uuid };

    if(result)
    {
        resolve(result);
    }
    else
    {
        reject(@"impl_call_error", @"Error while calling LGWallet::getLogger", nil);
        return;
    }

}

/**
 *Get preferences of specific account
 *@param index, 32 bits integer, account's index
 *@return Preferences object
 */
RCT_REMAP_METHOD(getAccountPreferences,getAccountPreferences:(NSDictionary *)currentInstance withParams:(int)index withResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {
    if (!currentInstance[@"uid"] || !currentInstance[@"type"])
    {
        reject(@"impl_call_error", @"Error while calling RCTCoreLGWallet::getAccountPreferences, first argument should be an instance of LGWallet", nil);
        return;
    }
    LGWallet *currentInstanceObj = [self.objcImplementations objectForKey:currentInstance[@"uid"]];
    if (!currentInstanceObj)
    {
        NSString *error = [NSString stringWithFormat:@"Error while calling LGWallet::getAccountPreferences, instance of uid %@ not found", currentInstance[@"uid"]];
        reject(@"impl_call_error", error, nil);
        return;
    }
    LGPreferences * objcResult = [currentInstanceObj getAccountPreferences:index];

    NSString *objcResult_uuid = [[NSUUID UUID] UUIDString];
    RCTCoreLGPreferences *rctImpl_objcResult = (RCTCoreLGPreferences *)[self.bridge moduleForName:@"CoreLGPreferences"];
    NSArray *objcResult_array = [[NSArray alloc] initWithObjects:objcResult, objcResult_uuid, nil];
    [rctImpl_objcResult baseSetObject:objcResult_array];
    NSDictionary *result = @{@"type" : @"CoreLGPreferences", @"uid" : objcResult_uuid };

    if(result)
    {
        resolve(result);
    }
    else
    {
        reject(@"impl_call_error", @"Error while calling LGWallet::getAccountPreferences", nil);
        return;
    }

}

/**
 * asBitcoinLikeWallet(): Callback<BitcoinLikeWallet>;
 * asEthereumLikeWallet(): Callback<EthereumLikeWallet>;
 * asRippleLikeWallet(): Callback<RippleLikeWallet>;
 *Convert wallet to a Bitcoin one
 *@return BitcoinWallet object
 */
RCT_REMAP_METHOD(asBitcoinLikeWallet,asBitcoinLikeWallet:(NSDictionary *)currentInstance WithResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {
    if (!currentInstance[@"uid"] || !currentInstance[@"type"])
    {
        reject(@"impl_call_error", @"Error while calling RCTCoreLGWallet::asBitcoinLikeWallet, first argument should be an instance of LGWallet", nil);
        return;
    }
    LGWallet *currentInstanceObj = [self.objcImplementations objectForKey:currentInstance[@"uid"]];
    if (!currentInstanceObj)
    {
        NSString *error = [NSString stringWithFormat:@"Error while calling LGWallet::asBitcoinLikeWallet, instance of uid %@ not found", currentInstance[@"uid"]];
        reject(@"impl_call_error", error, nil);
        return;
    }
    LGBitcoinLikeWallet * objcResult = [currentInstanceObj asBitcoinLikeWallet];

    NSString *objcResult_uuid = [[NSUUID UUID] UUIDString];
    RCTCoreLGBitcoinLikeWallet *rctImpl_objcResult = (RCTCoreLGBitcoinLikeWallet *)[self.bridge moduleForName:@"CoreLGBitcoinLikeWallet"];
    NSArray *objcResult_array = [[NSArray alloc] initWithObjects:objcResult, objcResult_uuid, nil];
    [rctImpl_objcResult baseSetObject:objcResult_array];
    NSDictionary *result = @{@"type" : @"CoreLGBitcoinLikeWallet", @"uid" : objcResult_uuid };

    if(result)
    {
        resolve(result);
    }
    else
    {
        reject(@"impl_call_error", @"Error while calling LGWallet::asBitcoinLikeWallet", nil);
        return;
    }

}

/**
 *Get currency of wallet
 *@return Currency object
 */
RCT_REMAP_METHOD(getCurrency,getCurrency:(NSDictionary *)currentInstance WithResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {
    if (!currentInstance[@"uid"] || !currentInstance[@"type"])
    {
        reject(@"impl_call_error", @"Error while calling RCTCoreLGWallet::getCurrency, first argument should be an instance of LGWallet", nil);
        return;
    }
    LGWallet *currentInstanceObj = [self.objcImplementations objectForKey:currentInstance[@"uid"]];
    if (!currentInstanceObj)
    {
        NSString *error = [NSString stringWithFormat:@"Error while calling LGWallet::getCurrency, instance of uid %@ not found", currentInstance[@"uid"]];
        reject(@"impl_call_error", error, nil);
        return;
    }
    LGCurrency * objcResult = [currentInstanceObj getCurrency];

    NSString *objcResult_uuid = [[NSUUID UUID] UUIDString];
    RCTCoreLGCurrency *rctImpl_objcResult = (RCTCoreLGCurrency *)[self.bridge moduleForName:@"CoreLGCurrency"];
    NSArray *objcResult_array = [[NSArray alloc] initWithObjects:objcResult, objcResult_uuid, nil];
    [rctImpl_objcResult baseSetObject:objcResult_array];
    NSDictionary *result = @{@"type" : @"CoreLGCurrency", @"uid" : objcResult_uuid };

    if(result)
    {
        resolve(result);
    }
    else
    {
        reject(@"impl_call_error", @"Error while calling LGWallet::getCurrency", nil);
        return;
    }

}

/**
 *Know if wallet is a Bitcoin one
 *@return bool
 */
RCT_REMAP_METHOD(isInstanceOfBitcoinLikeWallet,isInstanceOfBitcoinLikeWallet:(NSDictionary *)currentInstance WithResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {
    if (!currentInstance[@"uid"] || !currentInstance[@"type"])
    {
        reject(@"impl_call_error", @"Error while calling RCTCoreLGWallet::isInstanceOfBitcoinLikeWallet, first argument should be an instance of LGWallet", nil);
        return;
    }
    LGWallet *currentInstanceObj = [self.objcImplementations objectForKey:currentInstance[@"uid"]];
    if (!currentInstanceObj)
    {
        NSString *error = [NSString stringWithFormat:@"Error while calling LGWallet::isInstanceOfBitcoinLikeWallet, instance of uid %@ not found", currentInstance[@"uid"]];
        reject(@"impl_call_error", error, nil);
        return;
    }
    BOOL objcResult = [currentInstanceObj isInstanceOfBitcoinLikeWallet];
    NSDictionary *result = @{@"value" : @(objcResult)};
    if(result)
    {
        resolve(result);
    }
    else
    {
        reject(@"impl_call_error", @"Error while calling LGWallet::isInstanceOfBitcoinLikeWallet", nil);
        return;
    }

}

/**
 *Know if wallet is a Ethereum one
 *@return bool
 */
RCT_REMAP_METHOD(isInstanceOfEthereumLikeWallet,isInstanceOfEthereumLikeWallet:(NSDictionary *)currentInstance WithResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {
    if (!currentInstance[@"uid"] || !currentInstance[@"type"])
    {
        reject(@"impl_call_error", @"Error while calling RCTCoreLGWallet::isInstanceOfEthereumLikeWallet, first argument should be an instance of LGWallet", nil);
        return;
    }
    LGWallet *currentInstanceObj = [self.objcImplementations objectForKey:currentInstance[@"uid"]];
    if (!currentInstanceObj)
    {
        NSString *error = [NSString stringWithFormat:@"Error while calling LGWallet::isInstanceOfEthereumLikeWallet, instance of uid %@ not found", currentInstance[@"uid"]];
        reject(@"impl_call_error", error, nil);
        return;
    }
    BOOL objcResult = [currentInstanceObj isInstanceOfEthereumLikeWallet];
    NSDictionary *result = @{@"value" : @(objcResult)};
    if(result)
    {
        resolve(result);
    }
    else
    {
        reject(@"impl_call_error", @"Error while calling LGWallet::isInstanceOfEthereumLikeWallet", nil);
        return;
    }

}

/**
 *Know if wallet is a Ripple one
 *@return bool
 */
RCT_REMAP_METHOD(isInstanceOfRippleLikeWallet,isInstanceOfRippleLikeWallet:(NSDictionary *)currentInstance WithResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {
    if (!currentInstance[@"uid"] || !currentInstance[@"type"])
    {
        reject(@"impl_call_error", @"Error while calling RCTCoreLGWallet::isInstanceOfRippleLikeWallet, first argument should be an instance of LGWallet", nil);
        return;
    }
    LGWallet *currentInstanceObj = [self.objcImplementations objectForKey:currentInstance[@"uid"]];
    if (!currentInstanceObj)
    {
        NSString *error = [NSString stringWithFormat:@"Error while calling LGWallet::isInstanceOfRippleLikeWallet, instance of uid %@ not found", currentInstance[@"uid"]];
        reject(@"impl_call_error", error, nil);
        return;
    }
    BOOL objcResult = [currentInstanceObj isInstanceOfRippleLikeWallet];
    NSDictionary *result = @{@"value" : @(objcResult)};
    if(result)
    {
        resolve(result);
    }
    else
    {
        reject(@"impl_call_error", @"Error while calling LGWallet::isInstanceOfRippleLikeWallet", nil);
        return;
    }

}

/**
 *Get wallet type
 *@return WalletType object
 */
RCT_REMAP_METHOD(getWalletType,getWalletType:(NSDictionary *)currentInstance WithResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {
    if (!currentInstance[@"uid"] || !currentInstance[@"type"])
    {
        reject(@"impl_call_error", @"Error while calling RCTCoreLGWallet::getWalletType, first argument should be an instance of LGWallet", nil);
        return;
    }
    LGWallet *currentInstanceObj = [self.objcImplementations objectForKey:currentInstance[@"uid"]];
    if (!currentInstanceObj)
    {
        NSString *error = [NSString stringWithFormat:@"Error while calling LGWallet::getWalletType, instance of uid %@ not found", currentInstance[@"uid"]];
        reject(@"impl_call_error", error, nil);
        return;
    }
    LGWalletType objcResult = [currentInstanceObj getWalletType];
    NSDictionary *result = @{@"value" : @(objcResult)};
    if(result)
    {
        resolve(result);
    }
    else
    {
        reject(@"impl_call_error", @"Error while calling LGWallet::getWalletType", nil);
        return;
    }

}

/**
 *Get last block of blockchain the wallet operates on
 *@param callback, Callback returning a Block object
 */
RCT_REMAP_METHOD(getLastBlock,getLastBlock:(NSDictionary *)currentInstance WithResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {
    if (!currentInstance[@"uid"] || !currentInstance[@"type"])
    {
        reject(@"impl_call_error", @"Error while calling RCTCoreLGWallet::getLastBlock, first argument should be an instance of LGWallet", nil);
        return;
    }
    LGWallet *currentInstanceObj = [self.objcImplementations objectForKey:currentInstance[@"uid"]];
    if (!currentInstanceObj)
    {
        NSString *error = [NSString stringWithFormat:@"Error while calling LGWallet::getLastBlock, instance of uid %@ not found", currentInstance[@"uid"]];
        reject(@"impl_call_error", error, nil);
        return;
    }
    RCTCoreLGBlockCallback *objcParam_0 = [[RCTCoreLGBlockCallback alloc] initWithResolver:resolve rejecter:reject andBridge:self.bridge];
    [currentInstanceObj getLastBlock:objcParam_0];

}

/**
 *Return infos about the creation of specific account
 *@param accountIndex, 32 bits account, index of account in wallet
 *@param callback, Callback returning an AccountCreationInfo
 */
RCT_REMAP_METHOD(getAccountCreationInfo,getAccountCreationInfo:(NSDictionary *)currentInstance withParams:(int)accountIndex withResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {
    if (!currentInstance[@"uid"] || !currentInstance[@"type"])
    {
        reject(@"impl_call_error", @"Error while calling RCTCoreLGWallet::getAccountCreationInfo, first argument should be an instance of LGWallet", nil);
        return;
    }
    LGWallet *currentInstanceObj = [self.objcImplementations objectForKey:currentInstance[@"uid"]];
    if (!currentInstanceObj)
    {
        NSString *error = [NSString stringWithFormat:@"Error while calling LGWallet::getAccountCreationInfo, instance of uid %@ not found", currentInstance[@"uid"]];
        reject(@"impl_call_error", error, nil);
        return;
    }
    RCTCoreLGAccountCreationInfoCallback *objcParam_1 = [[RCTCoreLGAccountCreationInfoCallback alloc] initWithResolver:resolve rejecter:reject andBridge:self.bridge];
    [currentInstanceObj getAccountCreationInfo:accountIndex callback:objcParam_1];

}

/**TODO */
RCT_REMAP_METHOD(getExtendedKeyAccountCreationInfo,getExtendedKeyAccountCreationInfo:(NSDictionary *)currentInstance withParams:(int)accountIndex withResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {
    if (!currentInstance[@"uid"] || !currentInstance[@"type"])
    {
        reject(@"impl_call_error", @"Error while calling RCTCoreLGWallet::getExtendedKeyAccountCreationInfo, first argument should be an instance of LGWallet", nil);
        return;
    }
    LGWallet *currentInstanceObj = [self.objcImplementations objectForKey:currentInstance[@"uid"]];
    if (!currentInstanceObj)
    {
        NSString *error = [NSString stringWithFormat:@"Error while calling LGWallet::getExtendedKeyAccountCreationInfo, instance of uid %@ not found", currentInstance[@"uid"]];
        reject(@"impl_call_error", error, nil);
        return;
    }
    RCTCoreLGExtendedKeyAccountCreationInfoCallback *objcParam_1 = [[RCTCoreLGExtendedKeyAccountCreationInfoCallback alloc] initWithResolver:resolve rejecter:reject andBridge:self.bridge];
    [currentInstanceObj getExtendedKeyAccountCreationInfo:accountIndex callback:objcParam_1];

}

/**
 *Return infos about the next created account
 *@param callback, Callback returning an AccountCreationInfo
 */
RCT_REMAP_METHOD(getNextAccountCreationInfo,getNextAccountCreationInfo:(NSDictionary *)currentInstance WithResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {
    if (!currentInstance[@"uid"] || !currentInstance[@"type"])
    {
        reject(@"impl_call_error", @"Error while calling RCTCoreLGWallet::getNextAccountCreationInfo, first argument should be an instance of LGWallet", nil);
        return;
    }
    LGWallet *currentInstanceObj = [self.objcImplementations objectForKey:currentInstance[@"uid"]];
    if (!currentInstanceObj)
    {
        NSString *error = [NSString stringWithFormat:@"Error while calling LGWallet::getNextAccountCreationInfo, instance of uid %@ not found", currentInstance[@"uid"]];
        reject(@"impl_call_error", error, nil);
        return;
    }
    RCTCoreLGAccountCreationInfoCallback *objcParam_0 = [[RCTCoreLGAccountCreationInfoCallback alloc] initWithResolver:resolve rejecter:reject andBridge:self.bridge];
    [currentInstanceObj getNextAccountCreationInfo:objcParam_0];

}

/**TODO */
RCT_REMAP_METHOD(getNextExtendedKeyAccountCreationInfo,getNextExtendedKeyAccountCreationInfo:(NSDictionary *)currentInstance WithResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {
    if (!currentInstance[@"uid"] || !currentInstance[@"type"])
    {
        reject(@"impl_call_error", @"Error while calling RCTCoreLGWallet::getNextExtendedKeyAccountCreationInfo, first argument should be an instance of LGWallet", nil);
        return;
    }
    LGWallet *currentInstanceObj = [self.objcImplementations objectForKey:currentInstance[@"uid"]];
    if (!currentInstanceObj)
    {
        NSString *error = [NSString stringWithFormat:@"Error while calling LGWallet::getNextExtendedKeyAccountCreationInfo, instance of uid %@ not found", currentInstance[@"uid"]];
        reject(@"impl_call_error", error, nil);
        return;
    }
    RCTCoreLGExtendedKeyAccountCreationInfoCallback *objcParam_0 = [[RCTCoreLGExtendedKeyAccountCreationInfoCallback alloc] initWithResolver:resolve rejecter:reject andBridge:self.bridge];
    [currentInstanceObj getNextExtendedKeyAccountCreationInfo:objcParam_0];

}

/**
 *Get account from given account creation infos
 *@param accountCreationInfo, AccountCreationInfo object
 *@param callback, Callback returning an Account object with given creation infos
 */
RCT_REMAP_METHOD(newAccountWithInfo,newAccountWithInfo:(NSDictionary *)currentInstance withParams:(NSDictionary *)accountCreationInfo withResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {
    if (!currentInstance[@"uid"] || !currentInstance[@"type"])
    {
        reject(@"impl_call_error", @"Error while calling RCTCoreLGWallet::newAccountWithInfo, first argument should be an instance of LGWallet", nil);
        return;
    }
    LGWallet *currentInstanceObj = [self.objcImplementations objectForKey:currentInstance[@"uid"]];
    if (!currentInstanceObj)
    {
        NSString *error = [NSString stringWithFormat:@"Error while calling LGWallet::newAccountWithInfo, instance of uid %@ not found", currentInstance[@"uid"]];
        reject(@"impl_call_error", error, nil);
        return;
    }
    RCTCoreLGAccountCreationInfo *rctParam_accountCreationInfo = (RCTCoreLGAccountCreationInfo *)[self.bridge moduleForName:@"CoreLGAccountCreationInfo"];
    LGAccountCreationInfo *objcParam_0 = (LGAccountCreationInfo *)[rctParam_accountCreationInfo.objcImplementations objectForKey:accountCreationInfo[@"uid"]];
    RCTCoreLGAccountCallback *objcParam_1 = [[RCTCoreLGAccountCallback alloc] initWithResolver:resolve rejecter:reject andBridge:self.bridge];
    [currentInstanceObj newAccountWithInfo:objcParam_0 callback:objcParam_1];

}

/**TODO */
RCT_REMAP_METHOD(newAccountWithExtendedKeyInfo,newAccountWithExtendedKeyInfo:(NSDictionary *)currentInstance withParams:(NSDictionary *)extendedKeyAccountCreationInfo withResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {
    if (!currentInstance[@"uid"] || !currentInstance[@"type"])
    {
        reject(@"impl_call_error", @"Error while calling RCTCoreLGWallet::newAccountWithExtendedKeyInfo, first argument should be an instance of LGWallet", nil);
        return;
    }
    LGWallet *currentInstanceObj = [self.objcImplementations objectForKey:currentInstance[@"uid"]];
    if (!currentInstanceObj)
    {
        NSString *error = [NSString stringWithFormat:@"Error while calling LGWallet::newAccountWithExtendedKeyInfo, instance of uid %@ not found", currentInstance[@"uid"]];
        reject(@"impl_call_error", error, nil);
        return;
    }
    RCTCoreLGExtendedKeyAccountCreationInfo *rctParam_extendedKeyAccountCreationInfo = (RCTCoreLGExtendedKeyAccountCreationInfo *)[self.bridge moduleForName:@"CoreLGExtendedKeyAccountCreationInfo"];
    LGExtendedKeyAccountCreationInfo *objcParam_0 = (LGExtendedKeyAccountCreationInfo *)[rctParam_extendedKeyAccountCreationInfo.objcImplementations objectForKey:extendedKeyAccountCreationInfo[@"uid"]];
    RCTCoreLGAccountCallback *objcParam_1 = [[RCTCoreLGAccountCallback alloc] initWithResolver:resolve rejecter:reject andBridge:self.bridge];
    [currentInstanceObj newAccountWithExtendedKeyInfo:objcParam_0 callback:objcParam_1];

}

/**
 *Erase data (in user's DB) relative to wallet since given date
 *@param date, start date of data deletion
 */
RCT_REMAP_METHOD(eraseDataSince,eraseDataSince:(NSDictionary *)currentInstance withParams:(nonnull NSDate *)date withResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {
    if (!currentInstance[@"uid"] || !currentInstance[@"type"])
    {
        reject(@"impl_call_error", @"Error while calling RCTCoreLGWallet::eraseDataSince, first argument should be an instance of LGWallet", nil);
        return;
    }
    LGWallet *currentInstanceObj = [self.objcImplementations objectForKey:currentInstance[@"uid"]];
    if (!currentInstanceObj)
    {
        NSString *error = [NSString stringWithFormat:@"Error while calling LGWallet::eraseDataSince, instance of uid %@ not found", currentInstance[@"uid"]];
        reject(@"impl_call_error", error, nil);
        return;
    }
    RCTCoreLGErrorCodeCallback *objcParam_1 = [[RCTCoreLGErrorCodeCallback alloc] initWithResolver:resolve rejecter:reject andBridge:self.bridge];
    [currentInstanceObj eraseDataSince:date callback:objcParam_1];

}
@end
