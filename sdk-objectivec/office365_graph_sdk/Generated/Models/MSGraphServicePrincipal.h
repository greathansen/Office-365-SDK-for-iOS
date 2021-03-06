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

@class MSGraphAppRole;
@class MSGraphKeyCredential;
@class MSGraphOAuth2Permission;
@class MSGraphPasswordCredential;
@class MSGraphAppRoleAssignment;
@class MSGraphOAuth2PermissionGrant;
@class MSGraphDirectoryObject;

#import <Foundation/Foundation.h>
#import "MSGraphProtocols.h"
#import "MSGraphDirectoryObject.h"

/**
* The header for type ServicePrincipal.
*/

@interface MSGraphServicePrincipal : MSGraphDirectoryObject

@property (nonatomic, getter=accountEnabled, setter=setAccountEnabled:) BOOL accountEnabled;
@property (retain, nonatomic, readwrite, getter=appDisplayName, setter=setAppDisplayName:) NSString *appDisplayName;
@property (retain, nonatomic, readwrite, getter=appId, setter=setAppId:) NSString *appId;
@property (retain, nonatomic, readwrite, getter=appOwnerTenantId, setter=setAppOwnerTenantId:) NSString *appOwnerTenantId;
@property (nonatomic, getter=appRoleAssignmentRequired, setter=setAppRoleAssignmentRequired:) BOOL appRoleAssignmentRequired;
@property (retain, nonatomic, readwrite, getter=appRoles, setter=setAppRoles:) NSMutableArray<MSGraphAppRole> *appRoles;
@property (retain, nonatomic, readwrite, getter=displayName, setter=setDisplayName:) NSString *displayName;
@property (retain, nonatomic, readwrite, getter=errorUrl, setter=setErrorUrl:) NSString *errorUrl;
@property (retain, nonatomic, readwrite, getter=homepage, setter=setHomepage:) NSString *homepage;
@property (retain, nonatomic, readwrite, getter=keyCredentials, setter=setKeyCredentials:) NSMutableArray<MSGraphKeyCredential> *keyCredentials;
@property (retain, nonatomic, readwrite, getter=logoutUrl, setter=setLogoutUrl:) NSString *logoutUrl;
@property (retain, nonatomic, readwrite, getter=oauth2Permissions, setter=setOauth2Permissions:) NSMutableArray<MSGraphOAuth2Permission> *oauth2Permissions;
@property (retain, nonatomic, readwrite, getter=passwordCredentials, setter=setPasswordCredentials:) NSMutableArray<MSGraphPasswordCredential> *passwordCredentials;
@property (retain, nonatomic, readwrite, getter=preferredTokenSigningKeyThumbprint, setter=setPreferredTokenSigningKeyThumbprint:) NSString *preferredTokenSigningKeyThumbprint;
@property (retain, nonatomic, readwrite, getter=publisherName, setter=setPublisherName:) NSString *publisherName;
@property (retain, nonatomic, readwrite, getter=replyUrls, setter=setReplyUrls:) NSMutableArray *replyUrls;
@property (retain, nonatomic, readwrite, getter=samlMetadataUrl, setter=setSamlMetadataUrl:) NSString *samlMetadataUrl;
@property (retain, nonatomic, readwrite, getter=servicePrincipalNames, setter=setServicePrincipalNames:) NSMutableArray *servicePrincipalNames;
@property (retain, nonatomic, readwrite, getter=tags, setter=setTags:) NSMutableArray *tags;
@property (retain, nonatomic, readwrite, getter=appRoleAssignedTo, setter=setAppRoleAssignedTo:) MSGraphAppRoleAssignment *appRoleAssignedTo;
@property (retain, nonatomic, readwrite, getter=appRoleAssignments, setter=setAppRoleAssignments:) NSMutableArray<MSGraphAppRoleAssignment> *appRoleAssignments;
@property (retain, nonatomic, readwrite, getter=oauth2PermissionGrants, setter=setOauth2PermissionGrants:) NSMutableArray<MSGraphOAuth2PermissionGrant> *oauth2PermissionGrants;
@property (retain, nonatomic, readwrite, getter=memberOf, setter=setMemberOf:) NSMutableArray<MSGraphDirectoryObject> *memberOf;
@property (retain, nonatomic, readwrite, getter=createdOnBehalfOf, setter=setCreatedOnBehalfOf:) MSGraphDirectoryObject *createdOnBehalfOf;
@property (retain, nonatomic, readwrite, getter=createdObjects, setter=setCreatedObjects:) NSMutableArray<MSGraphDirectoryObject> *createdObjects;
@property (retain, nonatomic, readwrite, getter=owners, setter=setOwners:) NSMutableArray<MSGraphDirectoryObject> *owners;
@property (retain, nonatomic, readwrite, getter=ownedObjects, setter=setOwnedObjects:) NSMutableArray<MSGraphDirectoryObject> *ownedObjects;

@end