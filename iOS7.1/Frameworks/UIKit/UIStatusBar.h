//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/_UIScrollsToTopInitiatorView.h>

#import "UIStatusBarServerClient.h"
#import "UIStatusBarStateObserver.h"

@class NSMutableArray, NSMutableSet, NSNumber, NSString, UIColor, UILabel, UIStatusBarBackgroundView, UIStatusBarForegroundView, UIStatusBarServer, UIStatusBarStyleAnimationParameters, UIStatusBarStyleAttributes, UIStatusBarStyleRequest, UIStatusBarWindow, UIView;

@interface UIStatusBar : _UIScrollsToTopInitiatorView <UIStatusBarServerClient, UIStatusBarStateObserver>
{
    UIStatusBarWindow *_statusBarWindow;
    UIStatusBarServer *_statusBarServer;
    id <UIStatusBarStateProvider> _inProcessProvider;
    BOOL _showsForeground;
    UIStatusBarBackgroundView *_backgroundView;
    UIStatusBarForegroundView *_foregroundView;
    UILabel *_doubleHeightLabel;
    UIView *_doubleHeightLabelContainer;
    NSString *_currentDoubleHeightText;
    CDStruct_4ec3be00 _currentRawData;
    NSMutableArray *_interruptedAnimationCompositeViews;
    UIStatusBarBackgroundView *_newStyleBackgroundView;
    UIStatusBarForegroundView *_newStyleForegroundView;
    UIStatusBar *_slidingStatusBar;
    int _requestedStyle;
    int _styleOverrides;
    UIStatusBarStyleAttributes *_styleAttributes;
    int _orientation;
    BOOL _hidden;
    BOOL _suppressesHiddenSideEffects;
    BOOL _foreground;
    BOOL _registered;
    BOOL _waitingOnCallbackAfterChangingStyleOverridesLocally;
    BOOL _suppressGlow;
    float _translucentBackgroundAlpha;
    BOOL _showOnlyCenterItems;
    CDStruct_408a6cfc *_localDataOverrides;
    UIColor *_tintColor;
    UIColor *_lastUsedBackgroundColor;
    UIStatusBarStyleAnimationParameters *_nextTintTransition;
    NSNumber *_overrideHeight;
    NSMutableSet *_disableRasterizationReasons;
    BOOL _persistentAnimationsEnabled;
    BOOL _simulatesLegacyAppearance;
    BOOL _serverUpdatesDisabled;
    BOOL _homeItemsDisabled;
    id <UIStatusBarStyleDelegate> _styleDelegate;
    UIColor *_foregroundColor;
    int _legibilityStyle;
}

+ (id)_styleAttributesForStatusBarStyle:(int)arg1 legacy:(BOOL)arg2;
+ (id)_styleAttributesForRequest:(id)arg1;
+ (id)_newStyleAttributesForRequest:(id)arg1;
+ (void)setSuppressUpdateAnimations:(BOOL)arg1;
+ (void)setTintOverrideEnabled:(BOOL)arg1 withColor:(id)arg2;
+ (int)lowBatteryLevel;
+ (void)getData:(CDStruct_4ec3be00 *)arg1 forRequestedData:(const CDStruct_4ec3be00 *)arg2 withOverrides:(const CDStruct_408a6cfc *)arg3;
+ (id)navBarTintColorFromStatusBarTintColor:(id)arg1;
+ (id)statusBarTintColorForNavBarTintColor:(id)arg1;
+ (id)defaultBlueTintColor;
+ (int)cornerStyleForRequestedStyle:(int)arg1 effectiveStyle:(int)arg2 alignment:(int)arg3;
+ (int)defaultStyleForRequestedStyle:(int)arg1 styleOverrides:(int)arg2;
+ (int)defaultStatusBarStyleWithTint:(BOOL)arg1;
+ (float)heightForStyle:(int)arg1 orientation:(int)arg2;
+ (struct CGRect)_frameForStyleAttributes:(id)arg1 orientation:(int)arg2;
+ (struct CGRect)_frameForStyleAttributes:(id)arg1 orientation:(int)arg2 inWindowOfSize:(struct CGSize)arg3;
+ (struct CGRect)_frameForStyle:(int)arg1 orientation:(int)arg2 inWindowOfSize:(struct CGSize)arg3;
@property(nonatomic) int legibilityStyle; // @synthesize legibilityStyle=_legibilityStyle;
@property(retain, nonatomic) UIColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property(nonatomic) BOOL homeItemsDisabled; // @synthesize homeItemsDisabled=_homeItemsDisabled;
@property(nonatomic) BOOL serverUpdatesDisabled; // @synthesize serverUpdatesDisabled=_serverUpdatesDisabled;
@property(nonatomic) BOOL simulatesLegacyAppearance; // @synthesize simulatesLegacyAppearance=_simulatesLegacyAppearance;
@property(nonatomic) BOOL persistentAnimationsEnabled; // @synthesize persistentAnimationsEnabled=_persistentAnimationsEnabled;
@property(nonatomic) id <UIStatusBarStyleDelegate> styleDelegate; // @synthesize styleDelegate=_styleDelegate;
@property(readonly, nonatomic) int styleOverrides; // @synthesize styleOverrides=_styleOverrides;
@property(nonatomic) UIStatusBarWindow *statusBarWindow; // @synthesize statusBarWindow=_statusBarWindow;
- (void)_clearOverrideHeight;
- (void)_setOverrideHeight:(float)arg1;
- (id)_currentComposedDataForStyle:(id)arg1;
- (id)_currentComposedData;
- (float)_hiddenAlphaForHideAnimationParameters:(id)arg1;
- (struct CGAffineTransform)_hiddenTransformForHideAnimationParameters:(id)arg1;
- (BOOL)_isTransparent;
- (id)_backgroundView;
- (void)statusBarStateProvider:(id)arg1 didChangeDoubleHeightStatusStringForStyle:(int)arg2;
- (void)statusBarStateProvider:(id)arg1 didPostStatusBarData:(const CDStruct_4ec3be00 *)arg2 withActions:(int)arg3;
- (void)statusBarServer:(id)arg1 didReceiveDoubleHeightStatusString:(id)arg2 forStyle:(int)arg3;
- (void)statusBarServer:(id)arg1 didReceiveGlowAnimationState:(BOOL)arg2 forStyle:(int)arg3;
- (void)statusBarServer:(id)arg1 didReceiveStyleOverrides:(int)arg2;
- (void)statusBarServer:(id)arg1 didReceiveStatusBarData:(const CDStruct_4ec3be00 *)arg2 withActions:(int)arg3;
- (void)_itemViewShouldEndDisablingRasterization:(id)arg1;
- (void)_itemViewShouldBeginDisablingRasterization:(id)arg1;
- (void)_endDisablingRasterizationForReason:(id)arg1;
- (void)_beginDisablingRasterizationForReason:(id)arg1;
- (void)_updateShouldRasterize;
- (void)_didChangeFromIdiom:(int)arg1 onScreen:(id)arg2 traverseHierarchy:(BOOL)arg3;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)_currentStyleAttributes;
- (void)setStyleRequest:(id)arg1 animationParameters:(id)arg2;
@property(copy, nonatomic) UIStatusBarStyleRequest *styleRequest;
- (id)currentStyleRequestForStyle:(int)arg1;
- (void)setLegibilityStyle:(int)arg1 animationParameters:(id)arg2;
- (void)_styleOverridesDidChange:(id)arg1;
- (void)setForegroundColor:(id)arg1 animationParameters:(id)arg2;
- (void)_updatePersistentAnimationsEnabledForForegroundView:(id)arg1;
- (void)_itemViewPerformButtonAction:(id)arg1;
- (void)crossfadeTime:(BOOL)arg1 duration:(double)arg2;
- (void)_willEnterForeground:(id)arg1;
- (void)_didEnterBackground:(id)arg1;
- (void)_evaluateServerRegistration;
- (void)didMoveToSuperview;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (BOOL)_shouldSeekHigherPriorityTouchTarget;
- (BOOL)_touchShouldProduceReturnEvent;
- (id)_styleAttributesForRequest:(id)arg1;
- (void)setSuppressesHiddenSideEffects:(BOOL)arg1;
- (BOOL)isHidden;
- (void)setHidden:(BOOL)arg1;
- (void)setHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHidden:(BOOL)arg1 animationParameters:(id)arg2;
- (void)_statusBarDidAnimateRotation;
- (void)_statusBarWillAnimateRotation;
- (void)setOrientation:(int)arg1;
- (void)layoutSubviews;
- (void)setTintColor:(id)arg1 withDuration:(double)arg2;
- (void)setTintColor:(id)arg1;
- (id)activeTintColor;
- (void)_swapToNewForegroundView;
- (void)_swapToNewBackgroundView;
- (void)_crossfadeToNewForegroundViewWithAlpha:(float)arg1;
- (void)_crossfadeToNewBackgroundView;
- (void)_setStyle:(id)arg1;
- (void)_setFrameForStyle:(id)arg1;
- (void)_finishedSettingStyleWithOldHeight:(float)arg1 newHeight:(float)arg2 animation:(int)arg3;
- (void)_setStyle:(id)arg1 animation:(int)arg2;
- (id)_prepareToSetStyle:(id)arg1 animation:(int)arg2;
- (void)_updateBackgroundFrame;
- (struct CGRect)_backgroundFrameForAttributes:(id)arg1;
- (void)_setVisualAltitudeBias:(struct CGSize)arg1;
- (void)_setVisualAltitude:(float)arg1;
- (id)_prepareInterruptedAnimationCompositeViewIncludingForeground:(BOOL)arg1;
- (struct CGAffineTransform)_slideTransform;
- (id)currentDoubleHeightLabelText;
- (void)_adjustDoubleHeightTextVisibility;
- (void)_setDoubleHeightStatusString:(id)arg1;
- (id)_doubleHeightStatusStringForStyle:(int)arg1;
- (BOOL)_shouldUseInProcessProviderDoubleHeightStatusString;
- (void)_requestStyleAttributes:(id)arg1 animationParameters:(id)arg2;
- (void)requestStyle:(int)arg1 animationParameters:(id)arg2;
- (void)requestStyle:(int)arg1 animation:(int)arg2 startTime:(double)arg3 duration:(double)arg4 curve:(int)arg5;
- (void)requestStyle:(int)arg1 animated:(BOOL)arg2;
- (void)requestStyle:(int)arg1;
- (int)styleForRequestedStyle:(int)arg1;
- (BOOL)isTranslucent;
- (BOOL)isDoubleHeight;
- (int)currentStyle;
- (float)_standardHeight;
- (float)heightForOrientation:(int)arg1;
- (struct CGRect)frameForOrientation:(int)arg1;
- (float)currentHeight;
- (struct CGRect)currentFrame;
- (void)setLocalDataOverrides:(CDStruct_408a6cfc *)arg1;
- (void)setShowsOnlyCenterItems:(BOOL)arg1;
- (void)setBackgroundAlpha:(float)arg1;
- (void)setSuppressesGlow:(BOOL)arg1;
- (void)forgetEitherSideHistory;
- (void)noteStyleOverridesChangedLocally;
- (void)forceUpdateStyleOverrides:(BOOL)arg1;
- (void)forceUpdateGlowAnimation;
- (void)forceUpdateDoubleHeightStatus;
- (void)forceUpdateToData:(const CDStruct_4ec3be00 *)arg1 animated:(BOOL)arg2;
- (void)forceUpdateData:(BOOL)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 showForegroundView:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect)arg1 showForegroundView:(BOOL)arg2 inProcessStateProvider:(id)arg3;

@end
