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

#import "MSSharePointODataEntities.h"

@implementation MSSharePointItemFetcher

-(MSSharePointItemOperations*) getOperations{
	return [[MSSharePointItemOperations alloc] initOperationWithUrl:self.UrlComponent parent:self.Parent];
}

-(id)initWithUrl:(NSString*)urlComponent :(id<MSODataExecutable>)parent{
    self.Parent = parent;
    self.UrlComponent = urlComponent;

    return [super initWithUrl:urlComponent parent:parent andEntityClass : [MSSharePointItem class]];
}

-(NSURLSessionTask*) updateItem:(id)entity withCallback:(void (^)(MSSharePointItem*, MSODataException * error))callback{
	return [super update:entity : callback];
}

-(NSURLSessionTask*) deleteItem:(void (^)(int status, MSODataException * error))callback{
	return [super delete:callback];
}

-(MSSharePointFileFetcher*) asFile{
	return [[MSSharePointFileFetcher alloc] initWithUrl :self.UrlComponent parent:self.Parent andEntityClass:[MSSharePointFile class]];
}
-(MSSharePointFolderFetcher*) asFolder{
	return [[MSSharePointFolderFetcher alloc] initWithUrl :self.UrlComponent parent:self.Parent andEntityClass:[MSSharePointFolder class]];
}

@end