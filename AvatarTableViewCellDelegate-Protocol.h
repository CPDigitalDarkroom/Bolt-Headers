//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AvatarTableViewCell, UIImage, UIViewController;

@protocol AvatarTableViewCellDelegate <NSObject>
- (void)avatarCell:(AvatarTableViewCell *)arg1 didChooseImage:(UIImage *)arg2;
- (UIViewController *)avatarCellViewControllerForPresentation:(AvatarTableViewCell *)arg1;
@end

