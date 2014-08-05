//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "WebViewControllerDelegate.h"

@class AvatarImageView, PhoneNumberField, TransientUser, UIActivityIndicatorView, UIButton, UILabel, UIView, UnderlinedButton;

@interface UserSearchViewController : UIViewController <WebViewControllerDelegate>
{
    id <UserSearchViewControllerDelegate> _delegate;
    UIView *_searchContainer;
    UIButton *_cancelButton;
    UIButton *_searchButton;
    PhoneNumberField *_phoneNumberTextField;
    UILabel *_searchDetailLabel;
    UIActivityIndicatorView *_progressIndicator;
    UIView *_buttonDividerLine;
    UnderlinedButton *_reportAProblemButton;
    UIView *_addContainer;
    UIButton *_addButton;
    UIButton *_backButton;
    AvatarImageView *_avatarView;
    UILabel *_infoLabel;
    TransientUser *_currentUser;
}

@property(retain, nonatomic) TransientUser *currentUser; // @synthesize currentUser=_currentUser;
@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(retain, nonatomic) AvatarImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) UIButton *addButton; // @synthesize addButton=_addButton;
@property(retain, nonatomic) UIView *addContainer; // @synthesize addContainer=_addContainer;
@property(retain, nonatomic) UnderlinedButton *reportAProblemButton; // @synthesize reportAProblemButton=_reportAProblemButton;
@property(retain, nonatomic) UIView *buttonDividerLine; // @synthesize buttonDividerLine=_buttonDividerLine;
@property(retain, nonatomic) UIActivityIndicatorView *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(retain, nonatomic) UILabel *searchDetailLabel; // @synthesize searchDetailLabel=_searchDetailLabel;
@property(retain, nonatomic) PhoneNumberField *phoneNumberTextField; // @synthesize phoneNumberTextField=_phoneNumberTextField;
@property(retain, nonatomic) UIButton *searchButton; // @synthesize searchButton=_searchButton;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIView *searchContainer; // @synthesize searchContainer=_searchContainer;
@property(nonatomic) __weak id <UserSearchViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onPhoneNumberChanged:(id)arg1;
- (void)onAddTapped:(id)arg1;
- (void)onSearchTapped:(id)arg1;
- (void)onCancelTapped:(id)arg1;
- (void)onBackTapped:(id)arg1;
- (void)onReportAProblemPressed:(id)arg1;
- (void)webViewControllerWantsDismissal:(id)arg1;
- (void)resetSearchUI;
- (void)moveToNoSearchResultsUI;
- (void)showSearchResult:(id)arg1;
- (void)viewDidLoad;
- (BOOL)disablesAutomaticKeyboardDismissal;
- (void)beginEditing;
- (void)setSelectButtonTitle:(id)arg1;

@end

