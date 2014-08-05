//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface BreakpadController : NSObject
{
    NSObject<OS_dispatch_queue> *queue_;
    void *breakpadRef_;
    NSMutableDictionary *configuration_;
    BOOL enableUploads_;
    BOOL started_;
    int uploadIntervalInSeconds_;
    NSDictionary *uploadTimeParameters_;
}

+ (id)sharedInstance;
- (void)sendStoredCrashReports;
- (void)reportWillBeSent;
- (int)sendDelay;
- (void)getCrashReportCount:(CDUnknownBlockType)arg1;
- (void)hasReportToUpload:(CDUnknownBlockType)arg1;
- (void)withBreakpadRef:(CDUnknownBlockType)arg1;
- (void)removeUploadParameterForKey:(id)arg1;
- (void)addUploadParameter:(id)arg1 forKey:(id)arg2;
- (void)setParametersToAddAtUploadTime:(id)arg1;
- (void)setUploadInterval:(int)arg1;
- (void)setUploadingURL:(id)arg1;
- (void)resetConfiguration;
- (void)updateConfiguration:(id)arg1;
- (void)setUploadingEnabled:(BOOL)arg1;
- (void)stop;
- (void)start:(BOOL)arg1;
- (void)dealloc;
- (id)initSingleton;
- (id)init;

@end

