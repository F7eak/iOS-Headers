/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UITextSelectionRect.h>

// Not exported
@interface _UITextKitSelectionRect : UITextSelectionRect
{
    struct CGRect _rect;
    _Bool _containsEnd;
    _Bool _containsStart;
    _Bool _vertical;
}

+ (id)selectionRectWithRect:(struct CGRect)arg1;
@property(nonatomic, getter=isVertical) _Bool vertical; // @synthesize vertical=_vertical;
@property(nonatomic) _Bool containsStart; // @synthesize containsStart=_containsStart;
@property(nonatomic) _Bool containsEnd; // @synthesize containsEnd=_containsEnd;
@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
- (id)description;
- (long long)writingDirection;

@end
