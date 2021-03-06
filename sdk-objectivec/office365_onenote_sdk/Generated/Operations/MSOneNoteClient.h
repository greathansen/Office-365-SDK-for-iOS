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

@class MSOneNoteNotebookCollectionFetcher;
@class MSOneNoteSectionGroupCollectionFetcher;
@class MSOneNoteSectionCollectionFetcher;
@class MSOneNotePageCollectionFetcher;
@class MSOneNoteResourceCollectionFetcher;

#import <office365_odata_base/office365_odata_base.h>
#import "MSOneNoteModels.h"

/**
* The header for type MSOneNoteClient.
*/

@interface MSOneNoteClient : MSODataBaseContainer

- (instancetype)initWithUrl:(NSString *)url  dependencyResolver:(id<MSODataDependencyResolver>)resolver;
-(MSOneNoteNotebookCollectionFetcher*) getnotebooks;
-(MSOneNoteSectionGroupCollectionFetcher*) getsectionGroups;
-(MSOneNoteSectionCollectionFetcher*) getsections;
-(MSODataMultipartCollectionFetcher*) getpages;
-(MSOneNoteResourceCollectionFetcher*) getresources;

@end