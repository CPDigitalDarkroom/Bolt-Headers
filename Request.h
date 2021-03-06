//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString;

@interface Request : NSObject
{
    BOOL _useOutputFile;
    NSString *_method;
    int _priority;
    unsigned int _cachePolicy;
    NSDictionary *_parameters;
    NSArray *_files;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _willStartRequestBlock;
    CDUnknownBlockType _progressHandler;
    NSString *_url;
}

@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(copy, nonatomic) CDUnknownBlockType willStartRequestBlock; // @synthesize willStartRequestBlock=_willStartRequestBlock;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) NSArray *files; // @synthesize files=_files;
@property(retain, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(nonatomic) unsigned int cachePolicy; // @synthesize cachePolicy=_cachePolicy;
@property(nonatomic) int priority; // @synthesize priority=_priority;
@property(nonatomic) BOOL useOutputFile; // @synthesize useOutputFile=_useOutputFile;
@property(copy, nonatomic) NSString *method; // @synthesize method=_method;
- (void).cxx_destruct;
- (id)init;

@end

