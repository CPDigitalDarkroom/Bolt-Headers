//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGEventAggregator.h"

@class NSMutableDictionary;

@interface IGAverageEvent : IGEventAggregator
{
    NSMutableDictionary *_pendingAverages;
}

@property(retain, nonatomic) NSMutableDictionary *pendingAverages; // @synthesize pendingAverages=_pendingAverages;
- (void).cxx_destruct;
- (id)createCounterForAverage:(id)arg1 withFirstValue:(double)arg2;
- (void)reset;
- (void)save;
- (void)recordAverage:(id)arg1 value:(double)arg2;
- (id)initWithDelegate:(id)arg1;

@end

