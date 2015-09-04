//
//  NSPersistentStoreCoordinator+MagicalRecord.h
//
//  Created by Saul Mora on 3/11/10.
//  Copyright 2010 Magical Panda Software, LLC All rights reserved.
//

#import "MagicalRecord.h"
#import "NSPersistentStore+MagicalRecord.h"

extern NSString * _Nonnull const MagicalRecordShouldDeletePersistentStoreOnModelMismatchKey;

NS_ASSUME_NONNULL_BEGIN
@interface NSPersistentStoreCoordinator (MagicalRecord)

+ (NSPersistentStoreCoordinator *) MR_newPersistentStoreCoordinator NS_RETURNS_RETAINED;

+ (NSPersistentStoreCoordinator *) MR_coordinatorWithPersistentStore:(NSPersistentStore *)persistentStore;
+ (NSPersistentStoreCoordinator *) MR_coordinatorWithPersistentStore:(NSPersistentStore *)persistentStore andModel:(NSManagedObjectModel *)model;
+ (NSPersistentStoreCoordinator *) MR_coordinatorWithPersistentStore:(NSPersistentStore *)persistentStore andModel:(NSManagedObjectModel *)model withOptions:(NSDictionary * _Nullable)options;

+ (NSPersistentStoreCoordinator *) MR_coordinatorWithSqliteStoreNamed:(NSString *)storeFileName;
+ (NSPersistentStoreCoordinator *) MR_coordinatorWithSqliteStoreNamed:(NSString *)storeFileName withOptions:(NSDictionary * _Nullable)options;
+ (NSPersistentStoreCoordinator *) MR_coordinatorWithSqliteStoreNamed:(NSString *)storeFileName andModel:(NSManagedObjectModel *)model withOptions:(NSDictionary * _Nullable)options;

+ (NSPersistentStoreCoordinator *) MR_coordinatorWithSqliteStoreAtURL:(NSURL *)url;
+ (NSPersistentStoreCoordinator *) MR_coordinatorWithSqliteStoreAtURL:(NSURL *)url andModel:(NSManagedObjectModel *)model;
+ (NSPersistentStoreCoordinator *) MR_coordinatorWithSqliteStoreAtURL:(NSURL *)url andModel:(NSManagedObjectModel *)model withOptions:(NSDictionary * _Nullable)options;

- (NSPersistentStore *) MR_addSqliteStoreAtURL:(NSURL *)url withOptions:(NSDictionary *__autoreleasing _Nullable)options;
- (NSPersistentStore *) MR_addSqliteStoreNamed:(id)storeFileName withOptions:(__autoreleasing NSDictionary * _Nullable)options;

@end
NS_ASSUME_NONNULL_END
