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

@class MSDirectoryOAuth2PermissionGrantFetcher;

#import <office365_odata_base/office365_odata_base.h>
#import "MSDirectoryModels.h"

/**
* The header for type MSDirectoryOAuth2PermissionGrantCollectionFetcher.
*/

@protocol MSDirectoryOAuth2PermissionGrantCollectionFetcher<MSODataCollectionFetcher>

@optional

- (NSURLSessionTask *)readWithCallback:(void (^)(NSArray<MSDirectoryOAuth2PermissionGrant> *oAuth2PermissionGrants, MSODataException *exception))callback;

- (id<MSDirectoryOAuth2PermissionGrantCollectionFetcher>)select:(NSString *)params;
- (id<MSDirectoryOAuth2PermissionGrantCollectionFetcher>)filter:(NSString *)params;
- (id<MSDirectoryOAuth2PermissionGrantCollectionFetcher>)top:(int)value;
- (id<MSDirectoryOAuth2PermissionGrantCollectionFetcher>)skip:(int)value;
- (id<MSDirectoryOAuth2PermissionGrantCollectionFetcher>)expand:(NSString *)value;
- (id<MSDirectoryOAuth2PermissionGrantCollectionFetcher>)orderBy:(NSString *)params;
- (id<MSDirectoryOAuth2PermissionGrantCollectionFetcher>)addCustomParametersWithName:(NSString *)name value:(id)value;
- (id<MSDirectoryOAuth2PermissionGrantCollectionFetcher>)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;

@required

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent;
- (MSDirectoryOAuth2PermissionGrantFetcher *)getById:(NSString *)Id;
- (NSURLSessionTask *)addOAuth2PermissionGrant:(MSDirectoryOAuth2PermissionGrant *)entity callback:(void (^)(MSDirectoryOAuth2PermissionGrant *oAuth2PermissionGrant, MSODataException *e))callback;

@end

@interface MSDirectoryOAuth2PermissionGrantCollectionFetcher : MSODataCollectionFetcher<MSDirectoryOAuth2PermissionGrantCollectionFetcher>

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent;

@end