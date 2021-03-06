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

#import "MSOneNoteODataEntities.h"

@implementation MSOneNotePageFetcher

@synthesize operations = _operations;

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent {

    if (self = [super initWithUrl:urlComponent parent:parent asClass:[MSOneNotePage class]]) {

		_operations = [[MSOneNotePageOperations alloc] initOperationWithUrl:urlComponent parent:parent];
    }

    return self;
}

- (NSURLSessionTask *)updatePage:(id)entity callback:(void (^)(MSOneNotePage *page, MSODataException *exception))callback {

	return [super updateEntity:entity callback:callback];
}

- (NSURLSessionTask *)deletePage:(void (^)(int status, MSODataException *exception))callback {

	return [super deleteWithCallback:callback];
}

- (MSOneNoteSectionFetcher *) getparentSection {

	 return [[MSOneNoteSectionFetcher alloc] initWithUrl:@"parentSection" parent:self asClass:[MSOneNoteSection class]];
}

- (MSOneNoteNotebookFetcher *) getparentNotebook {

	 return [[MSOneNoteNotebookFetcher alloc] initWithUrl:@"parentNotebook" parent:self asClass:[MSOneNoteNotebook class]];
}

@end