//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol TSWPOffscreenColumn <NSObject>
@property(readonly, nonatomic) unsigned int nextWidowPullsDownFromCharIndex;
@property(readonly, nonatomic) struct _NSRange anchoredRange;
@property(readonly, nonatomic) unsigned int startAnchoredCharIndex;
@property(readonly, nonatomic) struct _NSRange range;
@property(readonly, nonatomic) unsigned int startCharIndex;
- (void)trimToCharIndex:(unsigned int)arg1 inTarget:(id <TSWPLayoutTarget>)arg2 removeFootnoteLayoutCount:(unsigned int)arg3 removeAutoNumberFootnoteCount:(unsigned int)arg4;
@end
