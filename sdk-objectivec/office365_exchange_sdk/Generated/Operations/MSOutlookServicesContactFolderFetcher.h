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

@class MSOutlookServicesContactFetcher;
@class MSOutlookServicesContactCollectionFetcher;
@class MSOutlookServicesContactFolderFetcher;
@class MSOutlookServicesContactFolderCollectionFetcher;
@class MSOutlookServicesContactFolderOperations;

#import <office365_odata_base/office365_odata_base.h>
#import "MSOutlookServicesModels.h"

/**
* The header for type MSOutlookServicesContactFolderFetcher.
*/

@protocol MSOutlookServicesContactFolderFetcher<MSODataEntityFetcher>

@optional

- (NSURLSessionTask *) readWithCallback:(void (^)(MSOutlookServicesContactFolder *contactFolder, MSODataException *exception))callback;
- (id<MSOutlookServicesContactFolderFetcher>)addCustomParametersWithName:(NSString *)name value:(id)value;
- (id<MSOutlookServicesContactFolderFetcher>)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (id<MSOutlookServicesContactFolderFetcher>)select:(NSString *)params;
- (id<MSOutlookServicesContactFolderFetcher>)expand:(NSString *)value;

@required

@property (copy, nonatomic, readonly) MSOutlookServicesContactFolderOperations *operations;

- (MSOutlookServicesContactCollectionFetcher *)getContacts;
- (MSOutlookServicesContactFetcher *) getContactsById:(NSString*)_id;
- (MSOutlookServicesContactFolderCollectionFetcher *)getChildFolders;
- (MSOutlookServicesContactFolderFetcher *) getChildFoldersById:(NSString*)_id;

@end

@interface MSOutlookServicesContactFolderFetcher : MSODataEntityFetcher<MSOutlookServicesContactFolderFetcher>

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSODataExecutable>)parent;
- (NSURLSessionTask *) update:(MSOutlookServicesContactFolder *)contactFolder callback:(void (^)(MSOutlookServicesContactFolder *contactFolder, MSODataException *error))callback;
- (NSURLSessionTask *) delete:(void (^)(int status, MSODataException *exception))callback;

@end