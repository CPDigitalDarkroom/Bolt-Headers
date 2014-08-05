//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JRManagedObject.h"

@class ManagedUser, NSDate, NSString;

@interface ManagedIncomingMessage : JRManagedObject
{
}


// Remaining properties
@property(nonatomic) BOOL downloaded; // @dynamic downloaded;
@property(nonatomic) BOOL hasReply; // @dynamic hasReply;
@property(nonatomic) BOOL isReply; // @dynamic isReply;
@property(copy, nonatomic) NSString *mediaURL; // @dynamic mediaURL;
@property(copy, nonatomic) NSString *previousText; // @dynamic previousText;
@property(nonatomic) float previousTextYOffset; // @dynamic previousTextYOffset;
@property(copy, nonatomic) NSString *remoteID; // @dynamic remoteID;
@property(retain, nonatomic) ManagedUser *sender; // @dynamic sender;
@property(retain, nonatomic) NSDate *sentDate; // @dynamic sentDate;
@property(copy, nonatomic) NSString *text; // @dynamic text;
@property(nonatomic) float textYOffset; // @dynamic textYOffset;
@property(nonatomic) int type; // @dynamic type;
@property(nonatomic) BOOL wantsDelete; // @dynamic wantsDelete;
@end

