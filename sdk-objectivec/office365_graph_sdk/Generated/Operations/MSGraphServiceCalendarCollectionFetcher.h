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

@class MSGraphServiceCalendarFetcher;

#import <office365_odata_base/office365_odata_base.h>
#import "MSGraphServiceModels.h"

/**
* The header for type MSGraphServiceCalendarCollectionFetcher.
*/

@protocol MSGraphServiceCalendarCollectionFetcher<MSODataCollectionFetcher>

@optional

- (NSURLSessionTask *)readWithCallback:(void (^)(NSArray<MSGraphServiceCalendar> *calendars, MSODataException *exception))callback;

- (id<MSGraphServiceCalendarCollectionFetcher>)select:(NSString *)params;
- (id<MSGraphServiceCalendarCollectionFetcher>)filter:(NSString *)params;
- (id<MSGraphServiceCalendarCollectionFetcher>)top:(int)value;
- (id<MSGraphServiceCalendarCollectionFetcher>)skip:(int)value;
- (id<MSGraphServiceCalendarCollectionFetcher>)expand:(NSString *)value;
- (id<MSGraphServiceCalendarCollectionFetcher>)orderBy:(NSString *)params;
- (id<MSGraphServiceCalendarCollectionFetcher>)addCustomParametersWithName:(NSString *)name value:(id)value;
- (id<MSGraphServiceCalendarCollectionFetcher>)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;

@required

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent;
- (MSGraphServiceCalendarFetcher *)getById:(NSString *)Id;
- (NSURLSessionTask *)addCalendar:(MSGraphServiceCalendar *)entity callback:(void (^)(MSGraphServiceCalendar *calendar, MSODataException *e))callback;

@end

@interface MSGraphServiceCalendarCollectionFetcher : MSODataCollectionFetcher<MSGraphServiceCalendarCollectionFetcher>

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent;

@end