//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSPredicate, NSString;

@interface PHFetchOptions : NSObject <NSCopying>
{
    BOOL _includeHiddenAssets;
    BOOL _includeAllBurstAssets;
    BOOL _wantsIncrementalChangeDetails;
    BOOL _includeWallpaperAssets;
    BOOL _forceIncludeCloudSharedAssets;
    BOOL _forceIncludeiTunesSyncAssets;
    BOOL _includeDuplicateAssets;
    BOOL _hasIncludeCloudSharedAssetsOverride;
    NSPredicate *_predicate;
    NSArray *_sortDescriptors;
    unsigned int _fetchPropertyHint;
    int _chunkSizeForFetch;
    NSString *_transientIdentifier;
    NSPredicate *_internalPredicate;
    NSArray *_internalSortDescriptors;
    NSArray *_customObjectIDSortOrder;
}

+ (id)fetchOptionsWithInclusiveDefaults;
@property(readonly, nonatomic) BOOL hasIncludeCloudSharedAssetsOverride; // @synthesize hasIncludeCloudSharedAssetsOverride=_hasIncludeCloudSharedAssetsOverride;
@property(retain, nonatomic) NSArray *customObjectIDSortOrder; // @synthesize customObjectIDSortOrder=_customObjectIDSortOrder;
@property(nonatomic) BOOL includeDuplicateAssets; // @synthesize includeDuplicateAssets=_includeDuplicateAssets;
@property(nonatomic) BOOL forceIncludeiTunesSyncAssets; // @synthesize forceIncludeiTunesSyncAssets=_forceIncludeiTunesSyncAssets;
@property(nonatomic) BOOL forceIncludeCloudSharedAssets; // @synthesize forceIncludeCloudSharedAssets=_forceIncludeCloudSharedAssets;
@property(nonatomic) BOOL includeWallpaperAssets; // @synthesize includeWallpaperAssets=_includeWallpaperAssets;
@property(retain, nonatomic) NSArray *internalSortDescriptors; // @synthesize internalSortDescriptors=_internalSortDescriptors;
@property(retain, nonatomic) NSPredicate *internalPredicate; // @synthesize internalPredicate=_internalPredicate;
@property(retain, nonatomic) NSString *transientIdentifier; // @synthesize transientIdentifier=_transientIdentifier;
@property(nonatomic) int chunkSizeForFetch; // @synthesize chunkSizeForFetch=_chunkSizeForFetch;
@property(nonatomic) unsigned int fetchPropertyHint; // @synthesize fetchPropertyHint=_fetchPropertyHint;
@property(nonatomic) BOOL wantsIncrementalChangeDetails; // @synthesize wantsIncrementalChangeDetails=_wantsIncrementalChangeDetails;
@property(nonatomic) BOOL includeAllBurstAssets; // @synthesize includeAllBurstAssets=_includeAllBurstAssets;
@property(nonatomic) BOOL includeHiddenAssets; // @synthesize includeHiddenAssets=_includeHiddenAssets;
@property(retain, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
@property(retain, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
