/*******************************************************************************
 * Copyright (c) Microsoft Open Technologies, Inc.
 * All Rights Reserved
 * See License.txt in the project root for license information.
 ******************************************************************************/
#import <UIKit/UIKit.h>

//! Project version number for office365_discovery_sdk.
FOUNDATION_EXPORT double office365_discovery_sdkVersionNumber;

//! Project version string for office365_discovery_sdk.
FOUNDATION_EXPORT const unsigned char office365_discovery_sdkVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <office365_discovery_sdk/PublicHeader.h>

#import <office365_odata_base/MSCredentials.h>
#import <office365_odata_base/MSCredentialsFactory.h>
#import <office365_odata_base/MSDependencyResolver.h>
#import <office365_odata_base/MSHttpTransport.h>
#import <office365_odata_base/MSHttpVerb.h>
#import <office365_odata_base/MSJsonSerializer.h>
#import <office365_odata_base/MSLogger.h>
#import <office365_odata_base/MSLogLevel.h>
#import <office365_odata_base/MSRequest.h>
#import <office365_odata_base/MSResponse.h>
#import <office365_odata_base/MSODataUrl.h>

#import <office365_discovery_sdk/MSODataExecutable.h>
#import <office365_discovery_sdk/MSBaseODataContainer.h>
#import <office365_discovery_sdk/MSDiscoveryClient.h>
#import <office365_discovery_sdk/MSODataEntityFetcher.h>
#import <office365_discovery_sdk/MSODataOperations.h>
#import <office365_discovery_sdk/MSODataCollectionFetcher.h>
#import <office365_discovery_sdk/MSODataMediaEntityFetcher.h>

#import <office365_discovery_sdk/MSServiceInfoCollectionFetcher.h>
#import <office365_discovery_sdk/MSServiceInfoCollectionOperations.h>
#import <office365_discovery_sdk/MSServiceInfoFetcher.h>
#import <office365_discovery_sdk/MSServiceInfoOperations.h>
#import <office365_discovery_sdk/MSODataMediaEntityFetcher.h>

// Helpers
#import <office365_discovery_sdk/MSBaseODataContainerHelper.h>
#import <office365_discovery_sdk/MSEntityFetcherHelper.h>

