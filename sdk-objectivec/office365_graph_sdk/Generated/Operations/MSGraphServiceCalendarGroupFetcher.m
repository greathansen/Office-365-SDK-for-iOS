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

#import "MSGraphServiceODataEntities.h"

@implementation MSGraphServiceCalendarGroupFetcher

@synthesize operations = _operations;

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent {

    if (self = [super initWithUrl:urlComponent parent:parent asClass:[MSGraphServiceCalendarGroup class]]) {

		_operations = [[MSGraphServiceCalendarGroupOperations alloc] initOperationWithUrl:urlComponent parent:parent];
    }

    return self;
}

- (NSURLSessionTask *)updateCalendarGroup:(id)entity callback:(void (^)(MSGraphServiceCalendarGroup *calendarGroup, MSODataException *exception))callback {

	return [super updateEntity:entity callback:callback];
}

- (NSURLSessionTask *)deleteCalendarGroup:(void (^)(int status, MSODataException *exception))callback {

	return [super deleteWithCallback:callback];
}

- (MSGraphServiceCalendarCollectionFetcher *)getCalendars {

    return [[MSGraphServiceCalendarCollectionFetcher alloc] initWithUrl:@"Calendars" parent:self asClass:[MSGraphServiceCalendar class]];
}

- (id<MSGraphServiceCalendarFetcher>)getCalendarsById:(NSString *)_id {

    return [[[MSGraphServiceCalendarCollectionFetcher alloc] initWithUrl:@"Calendars" parent:self asClass:[MSGraphServiceCalendar class]] getById:_id];
}

@end