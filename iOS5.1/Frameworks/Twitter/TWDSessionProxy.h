/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "XPCProxyTarget-Protocol.h"

@interface TWDSessionProxy : NSObject <XPCProxyTarget>
{
}

- (id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2;
- (void)showTwitterSettingsIfNeeded:(id)arg1;
- (void)sendStatus:(id)arg1 completion:(id)arg2;
- (void)fetchProfileImageDataForScreenName:(id)arg1 completion:(id)arg2;
- (void)recordsMatchingPrefixString:(id)arg1 completion:(id)arg2;
- (void)fetchRecordForScreenName:(id)arg1 completion:(id)arg2;
- (void)fetchCurrentImageLimits:(id)arg1;
- (void)fetchCurrentTCoLength:(id)arg1;
- (void)setOverrideGeotagInfo:(id)arg1;
- (void)setGeotagStatus:(id)arg1;
- (void)fetchGeotagStatus:(id)arg1;
- (void)fetchRelationshipWithScreenName:(id)arg1 completion:(id)arg2;
- (void)fetchSessionInfo:(id)arg1;
- (void)setActiveAccountIdentifier:(id)arg1;
- (void)setPermission:(id)arg1 forBundleIdentifier:(id)arg2 completion:(id)arg3;
- (void)fetchPermissionForBundleIdentifier:(id)arg1 completion:(id)arg2;
- (void)fetchKnownBundleIdentifiers:(id)arg1;
- (void)fetchPermission:(id)arg1;
- (void)checkIn:(id)arg1;

@end
