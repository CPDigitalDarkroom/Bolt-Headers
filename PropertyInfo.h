//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSSet;

@interface PropertyInfo : NSObject
{
    NSSet *_names;
    NSSet *_setters;
    NSSet *_getters;
    NSDictionary *_getterToTypeMap;
    NSDictionary *_setterToTypeMap;
    NSDictionary *_getterToNameMap;
    NSDictionary *_setterToNameMap;
}

@property(retain, nonatomic) NSDictionary *setterToNameMap; // @synthesize setterToNameMap=_setterToNameMap;
@property(retain, nonatomic) NSDictionary *getterToNameMap; // @synthesize getterToNameMap=_getterToNameMap;
@property(retain, nonatomic) NSDictionary *setterToTypeMap; // @synthesize setterToTypeMap=_setterToTypeMap;
@property(retain, nonatomic) NSDictionary *getterToTypeMap; // @synthesize getterToTypeMap=_getterToTypeMap;
@property(retain, nonatomic) NSSet *getters; // @synthesize getters=_getters;
@property(retain, nonatomic) NSSet *setters; // @synthesize setters=_setters;
@property(retain, nonatomic) NSSet *names; // @synthesize names=_names;
- (void).cxx_destruct;

@end
