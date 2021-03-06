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

@class MSGraphTenantDetailOperations;

#import <office365_odata_base/office365_odata_base.h>
#import "MSGraphModels.h"

/**
* The header for type MSGraphTenantDetailFetcher.
*/

@protocol MSGraphTenantDetailFetcher<MSODataEntityFetcher>

@optional

- (NSURLSessionTask *) readWithCallback:(void (^)(MSGraphTenantDetail *tenantDetail, MSODataException *exception))callback;
- (id<MSGraphTenantDetailFetcher>)addCustomParametersWithName:(NSString *)name value:(id)value;
- (id<MSGraphTenantDetailFetcher>)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (id<MSGraphTenantDetailFetcher>)select:(NSString *)params;
- (id<MSGraphTenantDetailFetcher>)expand:(NSString *)value;

@required

@property (copy, nonatomic, readonly) MSGraphTenantDetailOperations *operations;


@end

@interface MSGraphTenantDetailFetcher : MSODataEntityFetcher<MSGraphTenantDetailFetcher>

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSODataExecutable>)parent;
- (NSURLSessionTask *) updateTenantDetail:(MSGraphTenantDetail *)tenantDetail callback:(void (^)(MSGraphTenantDetail *tenantDetail, MSODataException *error))callback;
- (NSURLSessionTask *) deleteTenantDetail:(void (^)(int status, MSODataException *exception))callback;

@end