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

#import "MSGraphODataEntities.h"

@implementation MSGraphExtensionPropertyFetcher

@synthesize operations = _operations;

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent {

    if (self = [super initWithUrl:urlComponent parent:parent asClass:[MSGraphExtensionProperty class]]) {

		_operations = [[MSGraphExtensionPropertyOperations alloc] initOperationWithUrl:urlComponent parent:parent];
    }

    return self;
}

- (NSURLSessionTask *)updateExtensionProperty:(id)entity callback:(void (^)(MSGraphExtensionProperty *extensionProperty, MSODataException *exception))callback {

	return [super updateEntity:entity callback:callback];
}

- (NSURLSessionTask *)deleteExtensionProperty:(void (^)(int status, MSODataException *exception))callback {

	return [super deleteWithCallback:callback];
}

@end