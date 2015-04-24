/*******************************************************************************
Copyright (c) Microsoft Open Technologies, Inc. All Rights Reserved.
Licensed under the MIT or Apache License; see LICENSE in the source repository
root for authoritative license information.﻿

**NOTE** This code was generated by a tool and will occasionally be
overwritten. We welcome comments and issues regarding this code; they will be
addressed in the generation tool. If you wish to submit pull requests, please
do so for the templates in that tool.

This code was generated by Vipr (https://github.com/microsoft/vipr) using
the T4TemplateWriter (https://github.com/msopentech/vipr-t4templatewriter).
******************************************************************************/

#import "MSGraphServiceODataEntities.h"

@implementation MSGraphServiceDirectoryRoleFetcher

@synthesize operations = _operations;

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent {

    if (self = [super initWithUrl:urlComponent parent:parent asClass:[MSGraphServiceDirectoryRole class]]) {

		_operations = [[MSGraphServiceDirectoryRoleOperations alloc] initOperationWithUrl:urlComponent parent:parent];
    }

    return self;
}

- (NSURLSessionTask *)update:(id)entity callback:(void (^)(MSGraphServiceDirectoryRole *directoryRole, MSODataException *exception))callback {

	return [super updateEntity:entity callback:callback];
}

- (NSURLSessionTask *)delete:(void (^)(int status, MSODataException *exception))callback {

	return [super deleteWithCallback:callback];
}

- (MSGraphServiceDirectoryObjectCollectionFetcher *)getmembers {

    return [[MSGraphServiceDirectoryObjectCollectionFetcher alloc] initWithUrl:@"members" parent:self asClass:[MSGraphServiceDirectoryObject class]];
}

- (id<MSGraphServiceDirectoryObjectFetcher>)getmembersById:(NSString *)_id {

    return [[[MSGraphServiceDirectoryObjectCollectionFetcher alloc] initWithUrl:@"members" parent:self asClass:[MSGraphServiceDirectoryObject class]] getById:_id];
}

- (MSGraphServiceDirectoryObjectCollectionFetcher *)getmemberOf {

    return [[MSGraphServiceDirectoryObjectCollectionFetcher alloc] initWithUrl:@"memberOf" parent:self asClass:[MSGraphServiceDirectoryObject class]];
}

- (id<MSGraphServiceDirectoryObjectFetcher>)getmemberOfById:(NSString *)_id {

    return [[[MSGraphServiceDirectoryObjectCollectionFetcher alloc] initWithUrl:@"memberOf" parent:self asClass:[MSGraphServiceDirectoryObject class]] getById:_id];
}

- (MSGraphServiceDirectoryObjectCollectionFetcher *)getowners {

    return [[MSGraphServiceDirectoryObjectCollectionFetcher alloc] initWithUrl:@"owners" parent:self asClass:[MSGraphServiceDirectoryObject class]];
}

- (id<MSGraphServiceDirectoryObjectFetcher>)getownersById:(NSString *)_id {

    return [[[MSGraphServiceDirectoryObjectCollectionFetcher alloc] initWithUrl:@"owners" parent:self asClass:[MSGraphServiceDirectoryObject class]] getById:_id];
}

- (MSGraphServiceDirectoryObjectCollectionFetcher *)getownedObjects {

    return [[MSGraphServiceDirectoryObjectCollectionFetcher alloc] initWithUrl:@"ownedObjects" parent:self asClass:[MSGraphServiceDirectoryObject class]];
}

- (id<MSGraphServiceDirectoryObjectFetcher>)getownedObjectsById:(NSString *)_id {

    return [[[MSGraphServiceDirectoryObjectCollectionFetcher alloc] initWithUrl:@"ownedObjects" parent:self asClass:[MSGraphServiceDirectoryObject class]] getById:_id];
}

@end