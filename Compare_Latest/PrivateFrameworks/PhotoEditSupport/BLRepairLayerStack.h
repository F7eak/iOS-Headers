//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoEditSupport/BLBaseLayerStack.h>

@class UIImage;

@interface BLRepairLayerStack : BLBaseLayerStack
{
    UIImage *_analysisImage;
    UIImage *_sourceImage;
    UIImage *_repairSourceImage;
    UIImage *_redEyeSourceImage;
    int _mode;
    struct CGSize _repairSourceSize;
    struct CGSize _redEyeSourceSize;
}

+ (id)layerStack;
+ (id)addAutoRedEyeCorrection:(id)arg1 toCurrentStrokesDataDictionary:(id)arg2 forSourceSize:(struct CGSize)arg3;
+ (int)maxEdgeSize;
@property(nonatomic) int mode; // @synthesize mode=_mode;
@property(nonatomic) struct CGSize redEyeSourceSize; // @synthesize redEyeSourceSize=_redEyeSourceSize;
@property(retain, nonatomic) UIImage *redEyeSourceImage; // @synthesize redEyeSourceImage=_redEyeSourceImage;
@property(nonatomic) struct CGSize repairSourceSize; // @synthesize repairSourceSize=_repairSourceSize;
@property(retain, nonatomic) UIImage *repairSourceImage; // @synthesize repairSourceImage=_repairSourceImage;
@property(retain, nonatomic) UIImage *sourceImage; // @synthesize sourceImage=_sourceImage;
@property(retain, nonatomic) UIImage *analysisImage; // @synthesize analysisImage=_analysisImage;
- (void)repairChanged;
- (void)redEyeChanged;
- (id)imagePatchListForLayerStack;
- (struct CGContext *)newContextForRect:(struct CGRect)arg1 inDestRect:(struct CGRect)arg2 andScale:(float)arg3;
- (struct CGImage *)newImageForRect:(struct CGRect)arg1 inDestRect:(struct CGRect)arg2 andScale:(float)arg3;
- (BOOL)readyToDrawForMode:(int)arg1;
@property(nonatomic) UIImage *redEyeRepairedImage;
- (double)timestamp;
- (void)dealloc;
- (BOOL)hasRedEye;
- (BOOL)hasRepair;
- (BOOL)haveLayerMask;
- (BOOL)readyToDraw;
- (void)setStrokesDataDictionary:(id)arg1;
- (id)strokesDataDictionary;
- (id)init;

@end
