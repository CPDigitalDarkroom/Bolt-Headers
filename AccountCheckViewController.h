//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseViewController.h"

#import "RegistrationViewController.h"

@class ActivityIndicatorView, AvatarImageView, NSString, RegistrationNavigationController, TransientUser, UIButton;

@interface AccountCheckViewController : BaseViewController <RegistrationViewController>
{
    id <AccountCheckViewControllerDelegate> _delegate;
    TransientUser *_user;
    NSString *_verificationCode;
    AvatarImageView *_avatarImageView;
    UIButton *_continueButton;
    UIButton *_createAccountButton;
    ActivityIndicatorView *_loadingSpinnerView;
}

@property(retain, nonatomic) ActivityIndicatorView *loadingSpinnerView; // @synthesize loadingSpinnerView=_loadingSpinnerView;
@property(retain, nonatomic) UIButton *createAccountButton; // @synthesize createAccountButton=_createAccountButton;
@property(retain, nonatomic) UIButton *continueButton; // @synthesize continueButton=_continueButton;
@property(retain, nonatomic) AvatarImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(copy, nonatomic) NSString *verificationCode; // @synthesize verificationCode=_verificationCode;
@property(retain, nonatomic) TransientUser *user; // @synthesize user=_user;
@property(nonatomic) __weak id <AccountCheckViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onCreateAccountButtonTapped:(id)arg1;
- (void)onContinueButtonTapped:(id)arg1;
- (void)viewDidLoad;
@property(readonly, nonatomic) int preferredGradientType;
- (BOOL)requiresOverlayView;
- (id)initWithUser:(id)arg1 verificationCode:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) RegistrationNavigationController *pp_navigationController;

@end
