//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JRModelManagerSubscriber.h"

@interface BadgeManager : NSObject <JRModelManagerSubscriber>
{
}

+ (void)start;
+ (id)sharedManager;
- (void)resultsUpdatedForRequest:(id)arg1 results:(id)arg2 changes:(id)arg3;
- (id)init;

@end

