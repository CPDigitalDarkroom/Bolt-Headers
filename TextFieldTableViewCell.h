//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "UITextFieldDelegate.h"

@class NSString, UITextField, UIView;

@interface TextFieldTableViewCell : UITableViewCell <UITextFieldDelegate>
{
    UITextField *_textField;
    id <TextFieldTableViewCellDelegate> _delegate;
    UIView *_bottomBorderView;
}

@property(retain, nonatomic) UIView *bottomBorderView; // @synthesize bottomBorderView=_bottomBorderView;
@property(nonatomic) __weak id <TextFieldTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)onTextFieldChanged:(id)arg1;
@property(copy, nonatomic) NSString *text;
@property(copy, nonatomic) NSString *placeholder;
- (void)beginEditing;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

