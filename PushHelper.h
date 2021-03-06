//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PushHelper : NSObject
{
}

+ (BOOL)isPushDeniedByUser;
+ (void)doRegisterForPush;
+ (void)requestSystemPermissionWithCompletion:(CDUnknownBlockType)arg1;
+ (void)requestAppPermissionWithCompletion:(CDUnknownBlockType)arg1;
+ (void)requestAuthorizationWithCompletion:(CDUnknownBlockType)arg1;
+ (BOOL)appHasPushPermissions;
+ (BOOL)appHasAskedSystemForPushPermissions;
+ (void)registerForPushAllowingSystemPrompt:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;

@end

