//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "LMCaptureManagerAudioOutputDelegate.h"
#import "LMCaptureManagerVideoOutputDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UITextViewDelegate.h"

@class ColorPicker, DrawingCanvasView, LMCaptureManager, MessageTextContainer, NSMutableArray, NSURL, RecordingIndicator, SubviewsOnlyHitView, UIButton, UIImageView, UIPanGestureRecognizer, UIPinchGestureRecognizer, UISwipeGestureRecognizer, UITapGestureRecognizer, UIView, VideoRecorder;

@interface CaptureViewController : UIViewController <LMCaptureManagerAudioOutputDelegate, LMCaptureManagerVideoOutputDelegate, UIGestureRecognizerDelegate, UITextViewDelegate>
{
    BOOL _cameraPaused;
    BOOL _buttonsSquishedIn;
    BOOL _isRecording;
    BOOL _acceptsRecordingBuffers;
    BOOL _performingVerticalPan;
    BOOL _panLocked;
    id <CaptureViewControllerDelegate> _delegate;
    float _topContentInset;
    LMCaptureManager *_captureManager;
    VideoRecorder *_videoRecorder;
    struct OpaqueCMClock *_audioClock;
    struct OpaqueCMClock *_videoClock;
    struct opaqueCMSampleBuffer *_lastBuffer;
    NSURL *_videoURL;
    float _initialZoom;
    NSMutableArray *_photoCaptureBlocks;
    SubviewsOnlyHitView *_topControlsContainer;
    UIButton *_toggleCameraButton;
    UIButton *_toggleFlashButton;
    UIButton *_addTextButton;
    UIButton *_doneTextButton;
    SubviewsOnlyHitView *_drawingControlsContainer;
    DrawingCanvasView *_canvasView;
    ColorPicker *_colorPicker;
    UIView *_colorPreview;
    UIButton *_undoLineButton;
    UIButton *_doneDrawingButton;
    UITapGestureRecognizer *_tapRecognizer;
    UITapGestureRecognizer *_doubleTapRecognizer;
    UIPanGestureRecognizer *_panRecognizer;
    UIPinchGestureRecognizer *_pinchRecognizer;
    UISwipeGestureRecognizer *_horizontalSwipeRecognizer;
    UISwipeGestureRecognizer *_verticalSwipeUpRecognizer;
    UISwipeGestureRecognizer *_verticalSwipeDownRecognizer;
    UIImageView *_gradientView;
    UIImageView *_blurView;
    MessageTextContainer *_textContainer;
    RecordingIndicator *_recordingIndicator;
    UIViewController *_cameraPermissionsDeniedController;
    double _lastMicPromptTime;
    struct vImage_Buffer _image;
    struct CGRect _textViewPanStartFrame;
    CDStruct_1b6d18a9 _videoRecordingStartTime;
}

+ (id)baseVideoUrl;
+ (BOOL)hasDeniedCameraAccess;
@property(nonatomic) double lastMicPromptTime; // @synthesize lastMicPromptTime=_lastMicPromptTime;
@property(retain, nonatomic) UIViewController *cameraPermissionsDeniedController; // @synthesize cameraPermissionsDeniedController=_cameraPermissionsDeniedController;
@property(retain, nonatomic) RecordingIndicator *recordingIndicator; // @synthesize recordingIndicator=_recordingIndicator;
@property(nonatomic) struct CGRect textViewPanStartFrame; // @synthesize textViewPanStartFrame=_textViewPanStartFrame;
@property(nonatomic) BOOL panLocked; // @synthesize panLocked=_panLocked;
@property(nonatomic) BOOL performingVerticalPan; // @synthesize performingVerticalPan=_performingVerticalPan;
@property(retain, nonatomic) MessageTextContainer *textContainer; // @synthesize textContainer=_textContainer;
@property(retain, nonatomic) UIImageView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) UIImageView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) UISwipeGestureRecognizer *verticalSwipeDownRecognizer; // @synthesize verticalSwipeDownRecognizer=_verticalSwipeDownRecognizer;
@property(retain, nonatomic) UISwipeGestureRecognizer *verticalSwipeUpRecognizer; // @synthesize verticalSwipeUpRecognizer=_verticalSwipeUpRecognizer;
@property(retain, nonatomic) UISwipeGestureRecognizer *horizontalSwipeRecognizer; // @synthesize horizontalSwipeRecognizer=_horizontalSwipeRecognizer;
@property(retain, nonatomic) UIPinchGestureRecognizer *pinchRecognizer; // @synthesize pinchRecognizer=_pinchRecognizer;
@property(retain, nonatomic) UIPanGestureRecognizer *panRecognizer; // @synthesize panRecognizer=_panRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *doubleTapRecognizer; // @synthesize doubleTapRecognizer=_doubleTapRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *tapRecognizer; // @synthesize tapRecognizer=_tapRecognizer;
@property(nonatomic) struct vImage_Buffer image; // @synthesize image=_image;
@property(retain, nonatomic) UIButton *doneDrawingButton; // @synthesize doneDrawingButton=_doneDrawingButton;
@property(retain, nonatomic) UIButton *undoLineButton; // @synthesize undoLineButton=_undoLineButton;
@property(retain, nonatomic) UIView *colorPreview; // @synthesize colorPreview=_colorPreview;
@property(retain, nonatomic) ColorPicker *colorPicker; // @synthesize colorPicker=_colorPicker;
@property(retain, nonatomic) DrawingCanvasView *canvasView; // @synthesize canvasView=_canvasView;
@property(retain, nonatomic) SubviewsOnlyHitView *drawingControlsContainer; // @synthesize drawingControlsContainer=_drawingControlsContainer;
@property(retain, nonatomic) UIButton *doneTextButton; // @synthesize doneTextButton=_doneTextButton;
@property(retain, nonatomic) UIButton *addTextButton; // @synthesize addTextButton=_addTextButton;
@property(retain, nonatomic) UIButton *toggleFlashButton; // @synthesize toggleFlashButton=_toggleFlashButton;
@property(retain, nonatomic) UIButton *toggleCameraButton; // @synthesize toggleCameraButton=_toggleCameraButton;
@property(retain, nonatomic) SubviewsOnlyHitView *topControlsContainer; // @synthesize topControlsContainer=_topControlsContainer;
@property(retain, nonatomic) NSMutableArray *photoCaptureBlocks; // @synthesize photoCaptureBlocks=_photoCaptureBlocks;
@property(nonatomic) float initialZoom; // @synthesize initialZoom=_initialZoom;
@property CDStruct_1b6d18a9 videoRecordingStartTime; // @synthesize videoRecordingStartTime=_videoRecordingStartTime;
@property(retain) NSURL *videoURL; // @synthesize videoURL=_videoURL;
@property(nonatomic) BOOL acceptsRecordingBuffers; // @synthesize acceptsRecordingBuffers=_acceptsRecordingBuffers;
@property(nonatomic) struct opaqueCMSampleBuffer *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(nonatomic) struct OpaqueCMClock *videoClock; // @synthesize videoClock=_videoClock;
@property(nonatomic) struct OpaqueCMClock *audioClock; // @synthesize audioClock=_audioClock;
@property(retain, nonatomic) VideoRecorder *videoRecorder; // @synthesize videoRecorder=_videoRecorder;
@property(retain, nonatomic) LMCaptureManager *captureManager; // @synthesize captureManager=_captureManager;
@property(nonatomic) float topContentInset; // @synthesize topContentInset=_topContentInset;
@property(nonatomic) BOOL isRecording; // @synthesize isRecording=_isRecording;
@property(nonatomic, getter=areButtonsSquishedIn) BOOL buttonsSquishedIn; // @synthesize buttonsSquishedIn=_buttonsSquishedIn;
@property(nonatomic, getter=isCameraPaused) BOOL cameraPaused; // @synthesize cameraPaused=_cameraPaused;
@property(nonatomic) __weak id <CaptureViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setButtonsSquishedIn:(BOOL)arg1 animated:(BOOL)arg2;
- (void)updateFlashState;
@property(nonatomic) int cameraPosition;
- (void)stopVideoCaptureWasCancelled:(BOOL)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)finishVideoCaptureWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)cancelVideoCapture;
- (void)startVideoCapture;
- (BOOL)showMicDeniedPromptIfNecessary;
- (BOOL)captureImageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)configureCaptureSession;
- (id)tempVideoUrl;
- (void)captureManager:(id)arg1 didOutputAudioBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (void)captureManager:(id)arg1 didOutputVideoBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (void)captureManager:(id)arg1 didDropVideoBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (void)updateVideoLabelForTime:(CDStruct_1b6d18a9)arg1;
- (void)onToggleCameraTapped:(id)arg1;
- (void)onToggleCameraTouched:(id)arg1;
- (void)onToggleFlashTapped:(id)arg1;
- (void)onToggleFlashTouched:(id)arg1;
- (void)onPinch:(id)arg1;
- (void)onVerticalDownSwipe:(id)arg1;
- (void)onVerticalUpSwipe:(id)arg1;
- (void)onHorizontalSwipe:(id)arg1;
- (void)onDoubleTap:(id)arg1;
- (void)onTap:(id)arg1;
- (void)onPan:(id)arg1;
- (void)onAddTextTouched:(id)arg1;
- (void)onAddTextLongPressed:(id)arg1;
- (void)onAddTextPressed:(id)arg1;
- (void)onClearTextPressed:(id)arg1;
- (void)onDrawingDoneTapped:(id)arg1;
- (void)onUndoLinePressed:(id)arg1;
- (void)onUndoLineTapped:(id)arg1;
- (void)onDoneTextTapped:(id)arg1;
- (void)onDoneTextTouched:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)textViewDidChange:(id)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)exitTextMode;
- (void)enterTextMode;
- (void)exitDrawMode;
- (void)enterDrawMode;
- (BOOL)shouldEnableDrawing;
- (void)hideColorPreview;
- (void)onColorPickerValueChanged:(id)arg1;
- (void)onApplicationDidEnterBackground:(id)arg1;
- (void)onApplicationDidBecomeActive:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

@end

