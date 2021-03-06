//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

@interface ActivityIndicatorView : UIImageView
{
    BOOL _wantsToSpin;
}

@property(nonatomic) BOOL wantsToSpin; // @synthesize wantsToSpin=_wantsToSpin;
- (void)setHidden:(BOOL)arg1;
- (BOOL)isAnimating;
- (void)stopAnimating;
- (void)startAnimating;
- (void)onAppForeground:(id)arg1;
- (id)initWithActivityIndicatorStyle:(int)arg1;
- (void)dealloc;

@end

