//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AddressBook : NSObject
{
}

+ (void)addContactWithShortName:(id)arg1 fullName:(id)arg2 nationalNumber:(id)arg3 countryCode:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (BOOL)hasContactWithNationalNumber:(id)arg1 andCountryCode:(id)arg2 outShortName:(id *)arg3 outFullName:(id *)arg4;
+ (BOOL)hasContactWithNationalNumber:(id)arg1 andCountryCode:(id)arg2 inAddressbook:(void *)arg3 outShortName:(id *)arg4 outFullName:(id *)arg5;
+ (void)syncAddressBookWithWaterfallID:(id)arg1;
+ (void)syncAddressBook;
+ (id)phoneNumberFromRawString:(id)arg1;
+ (void)requestSystemPermissionWithWaterfall:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (void)requestAppPermissionWithCompletion:(CDUnknownBlockType)arg1;
+ (void)requestAuthorizationWithWaterfall:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (int)authorizationStatus;
+ (void)onDidBecomeActive:(id)arg1;
+ (void)start;

@end

