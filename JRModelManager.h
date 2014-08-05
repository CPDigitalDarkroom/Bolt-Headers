//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JRManagedObjectContext, NSManagedObjectModel, NSMapTable, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSPersistentStoreCoordinator, NSURL;

@interface JRModelManager : NSObject
{
    int _subscriberLock;
    int _modelLock;
    JRManagedObjectContext *_managedObjectContext;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    NSManagedObjectModel *_managedObjectModel;
    NSObject<OS_dispatch_queue> *_notifyQueue;
    NSURL *_storeUrl;
    NSURL *_modelUrl;
    NSMapTable *_objectToModelMap;
    NSMutableDictionary *_subscriberResultsCache;
    NSMapTable *_subscribers;
}

@property(retain) NSMapTable *subscribers; // @synthesize subscribers=_subscribers;
@property(retain) NSMutableDictionary *subscriberResultsCache; // @synthesize subscriberResultsCache=_subscriberResultsCache;
@property(retain) NSMapTable *objectToModelMap; // @synthesize objectToModelMap=_objectToModelMap;
@property(retain) NSURL *modelUrl; // @synthesize modelUrl=_modelUrl;
@property(retain) NSURL *storeUrl; // @synthesize storeUrl=_storeUrl;
@property(retain) NSObject<OS_dispatch_queue> *notifyQueue; // @synthesize notifyQueue=_notifyQueue;
@property(retain) NSManagedObjectModel *managedObjectModel; // @synthesize managedObjectModel=_managedObjectModel;
@property(retain) NSPersistentStoreCoordinator *persistentStoreCoordinator; // @synthesize persistentStoreCoordinator=_persistentStoreCoordinator;
@property(retain) JRManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
- (void).cxx_destruct;
- (void)_unmapAllModels;
- (void)_unmapModelForObject:(id)arg1;
- (id)_mappedObjects;
- (id)_fetchRequestWithEntity:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 inRange:(struct _NSRange)arg4 inContext:(id)arg5;
- (void)_contextChanged:(id)arg1;
- (void)_notifyForSubscriber:(id)arg1 updatedList:(id)arg2;
- (void)_didBecomeActive:(id)arg1;
- (void)_didEnterBackground:(id)arg1;
- (void)_didReceiveMemoryWarning:(id)arg1;
- (void)_willTerminate:(id)arg1;
- (void)_flushModel:(id)arg1;
- (void)_deleteManagedObjects:(id)arg1;
- (void)_managedObjectsWithEntity:(id)arg1 predicate:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_managedObjectsWithEntity:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 inRange:(struct _NSRange)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_addManagedObjectWithEntityName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned int)_countWithEntity:(id)arg1 predicate:(id)arg2;
- (void)_processPendingChanges;
- (void)_persistModelsSynchronus:(BOOL)arg1;
- (id)_modelForManagedObject:(id)arg1;
- (Class)_modelClassForManagedObject:(id)arg1;
- (void)_performBlockAndWait:(CDUnknownBlockType)arg1;
- (void)_performBlock:(CDUnknownBlockType)arg1;
- (void)_removeSubscriber:(id)arg1 requestID:(id)arg2;
- (void)_addSubscriber:(id)arg1 withEntity:(id)arg2 predicate:(id)arg3 sortDescriptors:(id)arg4 inRange:(struct _NSRange)arg5 requestIDCallback:(CDUnknownBlockType)arg6;
- (void)_seed;
- (void)dealloc;
- (id)_initWithStoreURL:(id)arg1 andModelURL:(id)arg2;

@end
