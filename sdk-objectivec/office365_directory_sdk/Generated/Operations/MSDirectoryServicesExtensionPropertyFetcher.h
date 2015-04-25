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

@class MSDirectoryServicesExtensionPropertyOperations;

#import <office365_odata_base/office365_odata_base.h>
#import "MSDirectoryServicesModels.h"

/**
* The header for type MSDirectoryServicesExtensionPropertyFetcher.
*/

@protocol MSDirectoryServicesExtensionPropertyFetcher<MSODataEntityFetcher>

@optional

- (NSURLSessionTask *) readWithCallback:(void (^)(MSDirectoryServicesExtensionProperty *extensionProperty, MSODataException *exception))callback;
- (id<MSDirectoryServicesExtensionPropertyFetcher>)addCustomParametersWithName:(NSString *)name value:(id)value;
- (id<MSDirectoryServicesExtensionPropertyFetcher>)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (id<MSDirectoryServicesExtensionPropertyFetcher>)select:(NSString *)params;
- (id<MSDirectoryServicesExtensionPropertyFetcher>)expand:(NSString *)value;

@required

@property (copy, nonatomic, readonly) MSDirectoryServicesExtensionPropertyOperations *operations;


@end

@interface MSDirectoryServicesExtensionPropertyFetcher : MSODataEntityFetcher<MSDirectoryServicesExtensionPropertyFetcher>

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSODataExecutable>)parent;
- (NSURLSessionTask *) updateExtensionProperty:(MSDirectoryServicesExtensionProperty *)extensionProperty callback:(void (^)(MSDirectoryServicesExtensionProperty *extensionProperty, MSODataException *error))callback;
- (NSURLSessionTask *) deleteExtensionProperty:(void (^)(int status, MSODataException *exception))callback;

@end