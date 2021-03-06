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

@class MSGraphFileAttachmentFetcher;
@class MSGraphItemAttachmentFetcher;
@class MSGraphReferenceAttachmentFetcher;
@class MSGraphAttachmentOperations;

#import <office365_odata_base/office365_odata_base.h>
#import "MSGraphModels.h"

/**
* The header for type MSGraphAttachmentFetcher.
*/

@protocol MSGraphAttachmentFetcher<MSODataEntityFetcher>

@optional

- (NSURLSessionTask *) readWithCallback:(void (^)(MSGraphAttachment *attachment, MSODataException *exception))callback;
- (id<MSGraphAttachmentFetcher>)addCustomParametersWithName:(NSString *)name value:(id)value;
- (id<MSGraphAttachmentFetcher>)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (id<MSGraphAttachmentFetcher>)select:(NSString *)params;
- (id<MSGraphAttachmentFetcher>)expand:(NSString *)value;

@required

@property (copy, nonatomic, readonly) MSGraphAttachmentOperations *operations;

- (MSGraphFileAttachmentFetcher *)asFileAttachment;	
- (MSGraphItemAttachmentFetcher *)asItemAttachment;	
- (MSGraphReferenceAttachmentFetcher *)asReferenceAttachment;	

@end

@interface MSGraphAttachmentFetcher : MSODataEntityFetcher<MSGraphAttachmentFetcher>

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSODataExecutable>)parent;
- (NSURLSessionTask *) updateAttachment:(MSGraphAttachment *)attachment callback:(void (^)(MSGraphAttachment *attachment, MSODataException *error))callback;
- (NSURLSessionTask *) deleteAttachment:(void (^)(int status, MSODataException *exception))callback;

@end