//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MediaLoader : NSObject
{
}

+ (void)cacheMediaAtPath:(id)arg1 forURL:(id)arg2 move:(BOOL)arg3;
+ (void)loadMediaAtURL:(id)arg1 startImmediately:(BOOL)arg2 progressBlock:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)load;

@end
