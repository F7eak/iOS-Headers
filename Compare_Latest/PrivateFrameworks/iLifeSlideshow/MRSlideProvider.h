/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "MRLoadable-Protocol.h"
#import "MRRenderable-Protocol.h"

@class MCSlide, MRAudioPlayer, MRFrame, MRImage, MRLayer, MRLayerEffect, NSConditionLock, NSDictionary, NSInvocationOperation, NSLock, NSString;

@interface MRSlideProvider : NSObject <MRLoadable, MRRenderable>
{
    struct CGSize mDefaultSize;
    float mStillTime;
    NSString *mImageSizeScript;
    NSDictionary *mEffectAttributes;
    NSString *mShowTimeScript;
    NSInvocationOperation *mPreloadOperation;
    NSLock *mPreloadOperationLock;
    NSConditionLock *mPreloadSemaphore;
    MRFrame *mFrame;
    MRImage *mOriginalImage;
    MRImage *mOutputImage;
    struct CGSize mRequestedSize;
    double mShowTime;
    double mShowDuration;
    double mSlideStartTime;
    double mSlideDuration;
    MRLayerEffect *mEffectLayer;
    MCSlide *mSlide;
    int mKenBurnsType;
    NSString *mAssetPath;
    double mOriginalImageAspectRatio;
    MRLayer *mSlideLayer;
    struct CGSize mImageSize;
    struct CGSize mLastImageSize;
    double mLastTime;
    struct CGSize mLastDaSize;
    struct CGSize mSizeFactor;
    _Bool mIsAnimatedGIF;
    MCSlide *mSlideCopy;
    unsigned long long mSlideIndex;
    MRAudioPlayer *mFakeAudioPlayer;
    unsigned int mFlags;
}

@property(readonly, nonatomic) double slideDuration; // @synthesize slideDuration=mSlideDuration;
@property(readonly, nonatomic) double slideStartTime; // @synthesize slideStartTime=mSlideStartTime;
@property(readonly) MRFrame *frame; // @synthesize frame=mFrame;
@property int kenBurnsType; // @synthesize kenBurnsType=mKenBurnsType;
@property(retain, nonatomic) MCSlide *slide; // @synthesize slide=mSlide;
@property(nonatomic) struct CGSize sizeFactor; // @synthesize sizeFactor=mSizeFactor;
@property(readonly, nonatomic) struct CGSize requestedSize; // @synthesize requestedSize=mRequestedSize;
@property(nonatomic) double showDuration; // @synthesize showDuration=mShowDuration;
@property(nonatomic) double showTime; // @synthesize showTime=mShowTime;
@property(copy, nonatomic) NSString *showTimeScript; // @synthesize showTimeScript=mShowTimeScript;
@property(retain, nonatomic) NSDictionary *effectAttributes; // @synthesize effectAttributes=mEffectAttributes;
@property(copy, nonatomic) NSString *imageSizeScript; // @synthesize imageSizeScript=mImageSizeScript;
@property(nonatomic) float stillTime; // @synthesize stillTime=mStillTime;
@property(nonatomic) struct CGSize defaultSize; // @synthesize defaultSize=mDefaultSize;
- (id)patchworkAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (id)retainedByUserRenderedImageAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (_Bool)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (_Bool)updateStuffWithAssetManager:(id)arg1;
- (void)_computeImageSizeInContext:(id)arg1 withArguments:(id)arg2;
@property(readonly, nonatomic) _Bool isInfinite;
@property(readonly, nonatomic) _Bool isAlphaFriendly;
@property(readonly, nonatomic) _Bool isOpaque;
@property(readonly, nonatomic) _Bool isNative3D;
- (void)cancelLoading;
- (void)unload;
- (void)loadTextureWithArguments:(id)arg1;
- (void)_loadTextureWithArguments:(id)arg1;
- (void)loadWithArguments:(id)arg1;
- (void)loadForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 now:(_Bool)arg4;
- (_Bool)isLoadedForTime:(double)arg1;
- (void)_unloadIfNotUpdatingLive;
- (_Bool)endLiveUpdate;
- (_Bool)beginLiveUpdate;
@property(nonatomic) double time;
@property(nonatomic) _Bool isPlaying;
- (void)updateShowTimeAndDurationWithPlug:(id)arg1 andAttributes:(id)arg2;
- (struct CGSize)unframedImageSizeForAspectRatio:(float)arg1 frameID:(id)arg2 andFrameAttributes:(id)arg3 atIndex:(unsigned int)arg4 framedImageSize:(struct CGSize *)arg5;
- (struct CGSize)framedImageSizeAtIndex:(unsigned int)arg1 aspectRatio:(float)arg2;
@property(readonly) _Bool hasFilters;
@property(nonatomic) _Bool needsToUpdateLayout;
@property(readonly, nonatomic) _Bool isLoaded;
@property(readonly) _Bool canPlay;
@property(nonatomic) _Bool slideIsReadonly;
@property(nonatomic) _Bool isStill;
@property(nonatomic) _Bool useMipmapping;
@property(nonatomic) _Bool isMonochromatic;
@property(readonly, nonatomic) float imageAspectRatio;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)cleanup;
- (void)finalize;
- (void)dealloc;
- (id)initWithEffectLayer:(id)arg1;

@end
