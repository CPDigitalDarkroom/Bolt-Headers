//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseViewController.h"

#import "RegistrationViewController.h"
#import "UITextFieldDelegate.h"

@class ActivityIndicatorView, DigitTextField, NSString, RegistrationNavigationController, UIButton, UIImageView, UIView;

@interface PhoneNumberVerificationViewController : BaseViewController <UITextFieldDelegate, RegistrationViewController>
{
    id <PhoneNumberVerificationViewControllerDelegate> _delegate;
    NSString *_phoneNumber;
    NSString *_countryCode;
    UIView *_containerView;
    DigitTextField *_verificationCodeField;
    UIButton *_callButton;
    ActivityIndicatorView *_loadingSpinnerView;
    UIImageView *_successImageView;
}

@property(retain, nonatomic) UIImageView *successImageView; // @synthesize successImageView=_successImageView;
@property(retain, nonatomic) ActivityIndicatorView *loadingSpinnerView; // @synthesize loadingSpinnerView=_loadingSpinnerView;
@property(retain, nonatomic) UIButton *callButton; // @synthesize callButton=_callButton;
@property(retain, nonatomic) DigitTextField *verificationCodeField; // @synthesize verificationCodeField=_verificationCodeField;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(retain, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(nonatomic) __weak id <PhoneNumberVerificationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)verifyVerificationCode;
- (void)onVerificationCodeRecieved:(id)arg1;
- (void)onVerificationCodeFieldChanged:(id)arg1;
- (void)onCallButtonTapped;
- (void)showSuccessView;
- (void)showLoadingState:(BOOL)arg1;
- (void)onWillResignActive;
- (void)onKeyboardDidChangeFrame:(id)arg1;
- (void)onKeyboardWillShow:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)updateForKeyboardFrame:(struct CGRect)arg1;
- (void)viewDidLoad;
@property(readonly, nonatomic) int preferredGradientType;
- (BOOL)requiresOverlayView;
- (id)initWithPhoneNumber:(id)arg1 countryCode:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, nonatomic) RegistrationNavigationController *pp_navigationController;

@end
