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

#import <Foundation/Foundation.h>
#import "MSDirectoryProtocols.h"

@class MSDirectoryAssignedPlan;
@class MSDirectoryProvisionedPlan;
@class MSDirectoryProvisioningError;
@class MSDirectoryVerifiedDomain;


#import "MSDirectoryDirectoryObject.h"

/**
* The header for type TenantDetail.
*/

@interface MSDirectoryTenantDetail : MSDirectoryDirectoryObject
@property (retain, nonatomic, readwrite) NSMutableArray<MSDirectoryAssignedPlan> *assignedPlans;
@property (retain, nonatomic, readwrite) NSString *city;
@property (retain, nonatomic, readwrite) NSDate *companyLastDirSyncTime;
@property (retain, nonatomic, readwrite) NSString *country;
@property (retain, nonatomic, readwrite) NSString *countryLetterCode;
@property (nonatomic) BOOL dirSyncEnabled;
@property (retain, nonatomic, readwrite) NSString *displayName;
@property (retain, nonatomic, readwrite) NSMutableArray *marketingNotificationEmails;
@property (retain, nonatomic, readwrite) NSString *postalCode;
@property (retain, nonatomic, readwrite) NSString *preferredLanguage;
@property (retain, nonatomic, readwrite) NSMutableArray<MSDirectoryProvisionedPlan> *provisionedPlans;
@property (retain, nonatomic, readwrite) NSMutableArray<MSDirectoryProvisioningError> *provisioningErrors;
@property (retain, nonatomic, readwrite) NSString *state;
@property (retain, nonatomic, readwrite) NSString *street;
@property (retain, nonatomic, readwrite) NSMutableArray *technicalNotificationMails;
@property (retain, nonatomic, readwrite) NSString *telephoneNumber;
@property (retain, nonatomic, readwrite) NSMutableArray<MSDirectoryVerifiedDomain> *verifiedDomains;

@end