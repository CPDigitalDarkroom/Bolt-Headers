//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "UITextViewDelegate.h"

@class NSString, UIImage;

@interface RageShakeViewController : UITableViewController <UITextViewDelegate>
{
    id <RageShakeViewControllerDelegate> _delegate;
    UIImage *_snapshot;
    NSString *_text;
    int _mode;
    CDUnknownBlockType _completionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) int mode; // @synthesize mode=_mode;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) UIImage *snapshot; // @synthesize snapshot=_snapshot;
@property(nonatomic) __weak id <RageShakeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)textViewDidEndEditing:(id)arg1;
- (BOOL)textViewShouldBeginEditing:(id)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)onCancelTapped:(id)arg1;
- (void)onDoneTapped:(id)arg1;
- (void)sendReportWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)debugInfo;
- (id)reportFiles;
- (id)tagIDs;
- (id)subscriberIDs;
- (id)tagIDForReportType;
- (void)viewDidLoad;
- (id)initWithSnapshot:(id)arg1 mode:(int)arg2;

@end

