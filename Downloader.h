//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JRModelManagerSubscriber.h"

@class NSMutableSet, Reachability;

@interface Downloader : NSObject <JRModelManagerSubscriber>
{
    NSMutableSet *_messagesToDownload;
    Reachability *_reachability;
}

+ (void)setDisabled:(BOOL)arg1;
+ (int)downloadCount;
+ (void)start;
+ (id)sharedInstance;
@property(retain, nonatomic) Reachability *reachability; // @synthesize reachability=_reachability;
@property(retain, nonatomic) NSMutableSet *messagesToDownload; // @synthesize messagesToDownload=_messagesToDownload;
- (void).cxx_destruct;
- (void)applicationBecameActive:(id)arg1;
- (void)sendMediaDownloadCountChangedNotificationWithCount:(int)arg1;
- (void)downloadMedia;
- (void)resultsUpdatedForRequest:(id)arg1 results:(id)arg2 changes:(id)arg3;
- (id)init;
- (void)dealloc;

@end

