//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITapGestureRecognizer.h"

@class NSNumber, UIColor;

@interface HighlightingTapGestureRecognizer : UITapGestureRecognizer
{
    UIColor *_defaultColor;
    float _defaultAlpha;
    UIColor *_highlightBackgroundColor;
    NSNumber *_highlightAlpha;
}

@property(copy, nonatomic) NSNumber *highlightAlpha; // @synthesize highlightAlpha=_highlightAlpha;
@property(retain, nonatomic) UIColor *highlightBackgroundColor; // @synthesize highlightBackgroundColor=_highlightBackgroundColor;
- (void).cxx_destruct;
- (void)reset;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end

