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

@class MSDirectoryDeviceFetcher;

#import <office365_odata_base/office365_odata_base.h>
#import "MSDirectoryModels.h"

/**
* The header for type MSDirectoryDeviceCollectionFetcher.
*/

@protocol MSDirectoryDeviceCollectionFetcher<MSODataCollectionFetcher>

@optional

- (NSURLSessionTask *)readWithCallback:(void (^)(NSArray<MSDirectoryDevice> *devices, MSODataException *exception))callback;

- (id<MSDirectoryDeviceCollectionFetcher>)select:(NSString *)params;
- (id<MSDirectoryDeviceCollectionFetcher>)filter:(NSString *)params;
- (id<MSDirectoryDeviceCollectionFetcher>)top:(int)value;
- (id<MSDirectoryDeviceCollectionFetcher>)skip:(int)value;
- (id<MSDirectoryDeviceCollectionFetcher>)expand:(NSString *)value;
- (id<MSDirectoryDeviceCollectionFetcher>)orderBy:(NSString *)params;
- (id<MSDirectoryDeviceCollectionFetcher>)addCustomParametersWithName:(NSString *)name value:(id)value;
- (id<MSDirectoryDeviceCollectionFetcher>)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;

@required

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent;
- (MSDirectoryDeviceFetcher *)getById:(NSString *)Id;
- (NSURLSessionTask *)addDevice:(MSDirectoryDevice *)entity callback:(void (^)(MSDirectoryDevice *device, MSODataException *e))callback;

@end

@interface MSDirectoryDeviceCollectionFetcher : MSODataCollectionFetcher<MSDirectoryDeviceCollectionFetcher>

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent;

@end