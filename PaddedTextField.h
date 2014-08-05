//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextField.h"

@class NSString, UIColor;

@interface PaddedTextField : UITextField
{
    BOOL _cursorHidden;
    UIColor *_placeholderColor;
    NSString *_placeholderText;
    struct UIEdgeInsets _insets;
}

@property(copy, nonatomic) NSString *placeholderText; // @synthesize placeholderText=_placeholderText;
@property(retain, nonatomic) UIColor *placeholderColor; // @synthesize placeholderColor=_placeholderColor;
@property(nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
@property(nonatomic, getter=isCursorHidden) BOOL cursorHidden; // @synthesize cursorHidden=_cursorHidden;
- (void).cxx_destruct;
- (void)updatePlaceholder;
- (void)setTextAlignment:(int)arg1;
- (void)setTextColor:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setPlaceholder:(id)arg1;
- (struct CGRect)caretRectForPosition:(id)arg1;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
- (struct CGRect)placeholderRectForBounds:(struct CGRect)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;

@end

