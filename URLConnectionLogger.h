//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface URLConnectionLogger : NSObject
{
}

+ (id)networkingLog;
+ (void)setLogLevel:(int)arg1;
+ (id)logLineArray;
+ (void)logConnectionFinished:(id)arg1 request:(id)arg2 response:(id)arg3 data:(id)arg4 error:(id)arg5;
+ (void)logConnectionStart:(id)arg1 request:(id)arg2;
+ (void)pushLogLine:(id)arg1;

@end
