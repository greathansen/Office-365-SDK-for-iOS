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

#import "MSSharePointODataEntities.h"

/**
* The implementation file for type MSSharePointFileOperations.
*/

@implementation MSSharePointFileOperations

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent {
 
    return [super initOperationWithUrl:urlComponent parent:parent];
}

- (NSURLSessionTask *)copyWithDestFolderId:(NSString *)destFolderId destFolderPath:(NSString *)destFolderPath newName:(NSString *)newName callback:(void (^)(MSSharePointFile *file, MSODataException *exception))callback {
	
	NSString *destFolderIdString = [self.resolver.jsonSerializer serialize:destFolderId property:@"destFolderId"];
	NSString *destFolderPathString = [self.resolver.jsonSerializer serialize:destFolderPath property:@"destFolderPath"];
	NSString *newNameString = [self.resolver.jsonSerializer serialize:newName property:@"newName"];
	NSURLSessionTask *task = [self copyRawWithDestFolderId:destFolderIdString destFolderPath:destFolderPathString newName:newNameString callback:^(NSString *returnValue, MSODataException *exception) {
       
	   if (exception == nil) {

			MSSharePointFile * result = (MSSharePointFile *)[super.resolver.jsonSerializer deserialize:[returnValue dataUsingEncoding:NSUTF8StringEncoding] asClass:[MSSharePointFile class]];
            callback(result, exception);
        } 
		else {

            callback(nil, exception);
        }
    }];
    
    return task;
}

- (NSURLSessionTask *)copyRawWithDestFolderId:(NSString *) destFolderId destFolderPath:(NSString *) destFolderPath newName:(NSString *) newName callback:(void(^)(NSString *returnValue, MSODataException *exception))callback {

	id<MSODataRequest> request = [super.resolver createODataRequest];
	NSArray *parameters = [[NSArray alloc] initWithObjects:
                          [[NSDictionary alloc] initWithObjectsAndKeys :destFolderId,@"destFolderId", nil],
                          [[NSDictionary alloc] initWithObjectsAndKeys :destFolderPath,@"destFolderPath", nil],
                          [[NSDictionary alloc] initWithObjectsAndKeys :newName,@"newName", nil], nil];

	NSData* payload = [[MSODataBaseContainerHelper generatePayloadWithParameters:parameters dependencyResolver:self.resolver] dataUsingEncoding:NSUTF8StringEncoding];

	[request setContent:payload];


	[request.url appendPathComponent:@"copy"];
	[request setVerb:HTTP_VERB_POST];

	NSURLSessionTask *task = [super oDataExecuteRequest:request 
											   callback:^(id<MSODataResponse> response, MSODataException *exception) {
        
		if (exception == nil) {
            
			callback([[NSString alloc] initWithData:response.data encoding:NSUTF8StringEncoding], exception);
        }
        else {

            callback([[NSString alloc] initWithFormat:@"%d", response.status], exception);
        }
    }];
    
    return task;
}
    				
- (NSURLSessionTask *)uploadContentWithContentStream:(NSStream *)contentStream callback:(void (^)(int returnValue, MSODataException *exception))callback {
	
	NSString *contentStreamString = [self.resolver.jsonSerializer serialize:contentStream property:@"contentStream"];
	NSURLSessionTask *task = [self uploadContentRawWithContentStream:contentStreamString callback:^(NSString *returnValue, MSODataException *exception) {
       
	   if (exception == nil) {

			int result = (int)[super.resolver.jsonSerializer deserialize:[returnValue dataUsingEncoding:NSUTF8StringEncoding] asClass:nil];
            callback(result, exception);
        } 
		else {

            callback((int)[returnValue integerValue], exception);
        }
    }];
    
    return task;
}

- (NSURLSessionTask *)uploadContentRawWithContentStream:(NSString *) contentStream callback:(void(^)(NSString *returnValue, MSODataException *exception))callback {

	id<MSODataRequest> request = [super.resolver createODataRequest];
	NSArray *parameters = [[NSArray alloc] initWithObjects:
                          [[NSDictionary alloc] initWithObjectsAndKeys :contentStream,@"contentStream", nil], nil];

	NSData* payload = [[MSODataBaseContainerHelper generatePayloadWithParameters:parameters dependencyResolver:self.resolver] dataUsingEncoding:NSUTF8StringEncoding];

	[request setContent:payload];


	[request.url appendPathComponent:@"uploadContent"];
	[request setVerb:HTTP_VERB_POST];

	NSURLSessionTask *task = [super oDataExecuteRequest:request 
											   callback:^(id<MSODataResponse> response, MSODataException *exception) {
        
		if (exception == nil) {
            
			callback([[NSString alloc] initWithData:response.data encoding:NSUTF8StringEncoding], exception);
        }
        else {

            callback([[NSString alloc] initWithFormat:@"%d", response.status], exception);
        }
    }];
    
    return task;
}
    				
- (NSURLSessionTask *)contentWithCallback:(void (^)(NSStream *stream, MSODataException *exception))callback {

	id<MSODataRequest> request = [self.resolver createODataRequest];
	NSDictionary *params = nil;
	
	NSString *parameters = [MSODataBaseContainerHelper getFunctionParameters:params];

	[request.url appendPathComponent:[[NSString alloc] initWithFormat:@"content(%@)",parameters]];
	[request setVerb:HTTP_VERB_POST];

	NSURLSessionTask *task = [super oDataExecuteRequest:request 
											   callback:^(id<MSODataResponse> response, MSODataException *exception) {
       
	   if (exception == nil) {

			NSStream * result = (NSStream *)[super.resolver.jsonSerializer deserialize:response.data asClass:[NSStream class]];
            callback(result, exception);
        }
        else {

            callback(nil, exception);
        }
    }];
    
    return task;
}
@end