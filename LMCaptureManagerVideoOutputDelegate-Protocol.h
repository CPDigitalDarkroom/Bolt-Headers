//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LMCaptureManager;

@protocol LMCaptureManagerVideoOutputDelegate <NSObject>
- (void)captureManager:(LMCaptureManager *)arg1 didOutputVideoBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (void)captureManager:(LMCaptureManager *)arg1 didDropVideoBuffer:(struct opaqueCMSampleBuffer *)arg2;
@end
