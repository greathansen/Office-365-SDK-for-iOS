/*******************************************************************************
 * Copyright (c) Microsoft Open Technologies, Inc.
 * All Rights Reserved
 * Licensed under the Apache License, Version 2.0.
 * See License.txt in the project root for license information.
 *
 * Warning: This code was generated automatically. Edits will be overwritten.
 * To make changes to this code, please make changes to the generation framework itself:
 * https://github.com/MSOpenTech/odata-codegen
 *******************************************************************************/
					  		
#import <office365_odata_base/office365_odata_base.h>
#import "MSSharePointModels.h"
#import "MSSharePointItemOperations.h"

/**
* The header for type MSSharePointFolderOperations.
*/

@interface MSSharePointFolderOperations : MSSharePointItemOperations

-(id)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent;

-(NSURLSessionTask*) copy : (NSString *) destFolderId : (NSString *) destFolderPath : (NSString *) newName :  (void (^)(MSSharePointFolder *folder, MSODataException *error)) callback;
-(NSURLSessionTask*) copyRaw : (NSString*) destFolderId : (NSString*) destFolderPath : (NSString*) newName :  (void(^)(NSString* returnValue, MSODataException *error)) callback;
@end