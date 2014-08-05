//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NBPhoneNumberDesc, NSMutableArray, NSNumber, NSString;

@interface NBPhoneMetaData : NSObject
{
    BOOL sameMobileAndFixedLinePattern;
    BOOL mainCountryForCode;
    BOOL leadingZeroPossible;
    NBPhoneNumberDesc *generalDesc;
    NBPhoneNumberDesc *fixedLine;
    NBPhoneNumberDesc *mobile;
    NBPhoneNumberDesc *tollFree;
    NBPhoneNumberDesc *premiumRate;
    NBPhoneNumberDesc *sharedCost;
    NBPhoneNumberDesc *personalNumber;
    NBPhoneNumberDesc *voip;
    NBPhoneNumberDesc *pager;
    NBPhoneNumberDesc *uan;
    NBPhoneNumberDesc *emergency;
    NBPhoneNumberDesc *voicemail;
    NBPhoneNumberDesc *noInternationalDialling;
    NSString *codeID;
    NSNumber *countryCode;
    NSString *internationalPrefix;
    NSString *preferredInternationalPrefix;
    NSString *nationalPrefix;
    NSString *preferredExtnPrefix;
    NSString *nationalPrefixForParsing;
    NSString *nationalPrefixTransformRule;
    NSMutableArray *numberFormats;
    NSMutableArray *intlNumberFormats;
    NSString *leadingDigits;
}

@property(nonatomic) BOOL leadingZeroPossible; // @synthesize leadingZeroPossible;
@property(retain, nonatomic) NSString *leadingDigits; // @synthesize leadingDigits;
@property(nonatomic) BOOL mainCountryForCode; // @synthesize mainCountryForCode;
@property(retain, nonatomic) NSMutableArray *intlNumberFormats; // @synthesize intlNumberFormats;
@property(retain, nonatomic) NSMutableArray *numberFormats; // @synthesize numberFormats;
@property(nonatomic) BOOL sameMobileAndFixedLinePattern; // @synthesize sameMobileAndFixedLinePattern;
@property(retain, nonatomic) NSString *nationalPrefixTransformRule; // @synthesize nationalPrefixTransformRule;
@property(retain, nonatomic) NSString *nationalPrefixForParsing; // @synthesize nationalPrefixForParsing;
@property(retain, nonatomic) NSString *preferredExtnPrefix; // @synthesize preferredExtnPrefix;
@property(retain, nonatomic) NSString *nationalPrefix; // @synthesize nationalPrefix;
@property(retain, nonatomic) NSString *preferredInternationalPrefix; // @synthesize preferredInternationalPrefix;
@property(retain, nonatomic) NSString *internationalPrefix; // @synthesize internationalPrefix;
@property(retain, nonatomic) NSNumber *countryCode; // @synthesize countryCode;
@property(retain, nonatomic) NSString *codeID; // @synthesize codeID;
@property(retain, nonatomic) NBPhoneNumberDesc *noInternationalDialling; // @synthesize noInternationalDialling;
@property(retain, nonatomic) NBPhoneNumberDesc *voicemail; // @synthesize voicemail;
@property(retain, nonatomic) NBPhoneNumberDesc *emergency; // @synthesize emergency;
@property(retain, nonatomic) NBPhoneNumberDesc *uan; // @synthesize uan;
@property(retain, nonatomic) NBPhoneNumberDesc *pager; // @synthesize pager;
@property(retain, nonatomic) NBPhoneNumberDesc *voip; // @synthesize voip;
@property(retain, nonatomic) NBPhoneNumberDesc *personalNumber; // @synthesize personalNumber;
@property(retain, nonatomic) NBPhoneNumberDesc *sharedCost; // @synthesize sharedCost;
@property(retain, nonatomic) NBPhoneNumberDesc *premiumRate; // @synthesize premiumRate;
@property(retain, nonatomic) NBPhoneNumberDesc *tollFree; // @synthesize tollFree;
@property(retain, nonatomic) NBPhoneNumberDesc *mobile; // @synthesize mobile;
@property(retain, nonatomic) NBPhoneNumberDesc *fixedLine; // @synthesize fixedLine;
@property(retain, nonatomic) NBPhoneNumberDesc *generalDesc; // @synthesize generalDesc;
- (void).cxx_destruct;
- (id)numberFormatArrayFromData:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)buildData:(id)arg1;
- (id)description;
- (id)init;

@end

