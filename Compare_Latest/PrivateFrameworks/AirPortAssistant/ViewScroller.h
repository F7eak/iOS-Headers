/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIScrollView.h"

#import "UIScrollViewDelegate-Protocol.h"

@class NSMutableArray, NSMutableSet;

@interface ViewScroller : UIScrollView <UIScrollViewDelegate>
{
    NSMutableSet *recycledViews;
    NSMutableSet *visibleViews;
    NSMutableArray *views;
    unsigned long long currentViewIndex;
}

@property(nonatomic) unsigned long long currentViewIndex; // @synthesize currentViewIndex;
@property(retain, nonatomic) NSMutableArray *views; // @synthesize views;
@property(retain, nonatomic) NSMutableSet *visibleViews; // @synthesize visibleViews;
@property(retain, nonatomic) NSMutableSet *recycledViews; // @synthesize recycledViews;
- (void)updateVisibleViews;
- (void)scrollViewDidScroll:(id)arg1;
- (void)removeAllViews;
- (void)addView:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)initializeCommon;

@end
