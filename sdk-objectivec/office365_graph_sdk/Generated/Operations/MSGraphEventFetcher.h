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

@class MSGraphAttachmentFetcher;
@class MSGraphAttachmentCollectionFetcher;
@class MSGraphCalendarFetcher;
@class MSGraphEventFetcher;
@class MSGraphEventCollectionFetcher;
@class MSGraphEventOperations;

#import <office365_odata_base/office365_odata_base.h>
#import "MSGraphModels.h"

/**
* The header for type MSGraphEventFetcher.
*/

@protocol MSGraphEventFetcher<MSODataEntityFetcher>

@optional

- (NSURLSessionTask *) readWithCallback:(void (^)(MSGraphEvent *event, MSODataException *exception))callback;
- (id<MSGraphEventFetcher>)addCustomParametersWithName:(NSString *)name value:(id)value;
- (id<MSGraphEventFetcher>)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (id<MSGraphEventFetcher>)select:(NSString *)params;
- (id<MSGraphEventFetcher>)expand:(NSString *)value;

@required

@property (copy, nonatomic, readonly) MSGraphEventOperations *operations;

- (MSGraphAttachmentCollectionFetcher *)getAttachments;
- (MSGraphAttachmentFetcher *) getAttachmentsById:(NSString*)_id;
- (MSGraphCalendarFetcher *)getCalendar;
- (MSGraphEventCollectionFetcher *)getInstances;
- (MSGraphEventFetcher *) getInstancesById:(NSString*)_id;

@end

@interface MSGraphEventFetcher : MSODataEntityFetcher<MSGraphEventFetcher>

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSODataExecutable>)parent;
- (NSURLSessionTask *) updateEvent:(MSGraphEvent *)event callback:(void (^)(MSGraphEvent *event, MSODataException *error))callback;
- (NSURLSessionTask *) deleteEvent:(void (^)(int status, MSODataException *exception))callback;

@end