//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet, NSString;

@interface FBBreakpadExceptionHandler : NSObject
{
    int _exceptionPid;
    NSMutableSet *breakpadExtraParameters;
    void *_breakpad;
    NSString *_exceptionDirectory;
}

@property(readonly, nonatomic) NSString *exceptionDirectory; // @synthesize exceptionDirectory=_exceptionDirectory;
@property(nonatomic) void *breakpad; // @synthesize breakpad=_breakpad;
- (void).cxx_destruct;
- (id)_exceptionFilename:(id)arg1;
- (void)processReports:(id)arg1;
- (void)breakpadAddUploadParameterForKey:(id)arg1 withValue:(id)arg2;
- (void)breakpadGenerateReport;
- (void)breakpadSetupExtra;
- (void)breakpadCleanExtra:(id)arg1;
- (int)compareFileByCreationDate:(id)arg1 withFile:(id)arg2 inDirectory:(id)arg3;
- (BOOL)initBreakpadWithInfo:(id)arg1;
- (void)process:(id)arg1;
- (void)send;
- (int)crashReportCount;
- (id)latestBreakpadCrashReport;
- (void)setExceptionInfoString:(id)arg1 forKey:(id)arg2;
- (id)initWithUrl:(id)arg1 exceptionParams:(id)arg2 product:(id)arg3 buildRevision:(id)arg4 exceptionDirectory:(id)arg5 processId:(int)arg6;
- (id)initWithUrl:(id)arg1 exceptionParams:(id)arg2 product:(id)arg3 buildRevision:(id)arg4;
- (id)initWithUrl:(id)arg1 exceptionParams:(id)arg2;

@end
