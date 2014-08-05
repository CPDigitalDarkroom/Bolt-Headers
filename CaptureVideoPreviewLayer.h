//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CIImageLayer.h"

#import "LMCaptureManagerVideoOutputDelegate.h"

@class LMCaptureManager;

@interface CaptureVideoPreviewLayer : CIImageLayer <LMCaptureManagerVideoOutputDelegate>
{
    int _sensorID;
    struct CGAffineTransform _videoTransform;
    LMCaptureManager *_captureManager;
}

@property(retain, nonatomic) LMCaptureManager *captureManager; // @synthesize captureManager=_captureManager;
- (void).cxx_destruct;
- (void)captureManager:(id)arg1 didOutputVideoBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (void)captureManager:(id)arg1 didDropVideoBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (id)initWithCaptureManager:(id)arg1;

@end
