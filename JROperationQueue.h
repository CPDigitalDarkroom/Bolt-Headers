//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable, NSMutableArray, NSObject<OS_dispatch_queue>;

@interface JROperationQueue : NSObject
{
    unsigned int _maxOperationsCount;
    unsigned int _currentOperationCount;
    int _type;
    NSMutableArray *_standardPriorityBlocks;
    NSMutableArray *_highPriorityBlocks;
    NSMapTable *_requestIdToBlockMap;
    unsigned int _requestIdCounter;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) unsigned int requestIdCounter; // @synthesize requestIdCounter=_requestIdCounter;
@property(retain, nonatomic) NSMapTable *requestIdToBlockMap; // @synthesize requestIdToBlockMap=_requestIdToBlockMap;
@property(retain, nonatomic) NSMutableArray *highPriorityBlocks; // @synthesize highPriorityBlocks=_highPriorityBlocks;
@property(retain, nonatomic) NSMutableArray *standardPriorityBlocks; // @synthesize standardPriorityBlocks=_standardPriorityBlocks;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) unsigned int currentOperationCount; // @synthesize currentOperationCount=_currentOperationCount;
@property(nonatomic) unsigned int maxOperationsCount; // @synthesize maxOperationsCount=_maxOperationsCount;
- (void).cxx_destruct;
- (void)cancelAllOperations;
- (void)cancelOperation:(unsigned int)arg1;
- (void)processOperationsInBlockArray:(id)arg1;
- (void)processOperations;
- (unsigned int)addOperationWithBlock:(CDUnknownBlockType)arg1;
- (unsigned int)addHighPriorityOperationWithBlock:(CDUnknownBlockType)arg1;
- (unsigned int)addOperationWithBlock:(CDUnknownBlockType)arg1 isHighPriority:(BOOL)arg2;
- (id)initWithMaxOperationCount:(unsigned int)arg1 type:(int)arg2;

@end

