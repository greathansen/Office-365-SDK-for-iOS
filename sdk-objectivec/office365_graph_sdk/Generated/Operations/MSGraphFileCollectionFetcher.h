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

@class MSGraphFileFetcher;

#import <office365_odata_base/office365_odata_base.h>
#import "MSGraphModels.h"

/**
* The header for type MSGraphFileCollectionFetcher.
*/

@protocol MSGraphFileCollectionFetcher<MSODataCollectionFetcher>

@optional

- (NSURLSessionTask *)readWithCallback:(void (^)(NSArray<MSGraphFile> *files, MSODataException *exception))callback;

- (id<MSGraphFileCollectionFetcher>)select:(NSString *)params;
- (id<MSGraphFileCollectionFetcher>)filter:(NSString *)params;
- (id<MSGraphFileCollectionFetcher>)top:(int)value;
- (id<MSGraphFileCollectionFetcher>)skip:(int)value;
- (id<MSGraphFileCollectionFetcher>)expand:(NSString *)value;
- (id<MSGraphFileCollectionFetcher>)orderBy:(NSString *)params;
- (id<MSGraphFileCollectionFetcher>)addCustomParametersWithName:(NSString *)name value:(id)value;
- (id<MSGraphFileCollectionFetcher>)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;

@required

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent;
- (MSGraphFileFetcher *)getById:(NSString *)Id;
- (NSURLSessionTask *)addFile:(MSGraphFile *)entity callback:(void (^)(MSGraphFile *file, MSODataException *e))callback;

@end

@interface MSGraphFileCollectionFetcher : MSODataCollectionFetcher<MSGraphFileCollectionFetcher>

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent;

@end