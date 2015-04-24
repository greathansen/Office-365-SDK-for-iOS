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

@class MSOneDriveServicesItemFetcher;

#import <office365_odata_base/office365_odata_base.h>
#import "MSOneDriveServicesModels.h"

/**
* The header for type MSOneDriveServicesItemCollectionFetcher.
*/

@protocol MSOneDriveServicesItemCollectionFetcher<MSODataCollectionFetcher>

@optional

- (NSURLSessionTask *)readWithCallback:(void (^)(NSArray<MSOneDriveServicesItem> *items, MSODataException *exception))callback;

- (id<MSOneDriveServicesItemCollectionFetcher>)select:(NSString *)params;
- (id<MSOneDriveServicesItemCollectionFetcher>)filter:(NSString *)params;
- (id<MSOneDriveServicesItemCollectionFetcher>)search:(NSString *)params;
- (id<MSOneDriveServicesItemCollectionFetcher>)top:(int)value;
- (id<MSOneDriveServicesItemCollectionFetcher>)skip:(int)value;
- (id<MSOneDriveServicesItemCollectionFetcher>)expand:(NSString *)value;
- (id<MSOneDriveServicesItemCollectionFetcher>)orderBy:(NSString *)params;
- (id<MSOneDriveServicesItemCollectionFetcher>)addCustomParametersWithName:(NSString *)name value:(id)value;
- (id<MSOneDriveServicesItemCollectionFetcher>)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;

@required

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent;
- (MSOneDriveServicesItemFetcher *)getById:(NSString *)Id;
- (NSURLSessionTask *)add:(MSOneDriveServicesItem *)entity callback:(void (^)(MSOneDriveServicesItem *item, MSODataException *e))callback;

@end

@interface MSOneDriveServicesItemCollectionFetcher : MSODataCollectionFetcher<MSOneDriveServicesItemCollectionFetcher>

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent;

@end