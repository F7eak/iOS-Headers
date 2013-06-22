/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIKeyboardCandidateSingle.h"

@class NSArray;

@interface TIZephyrCandidate : UIKeyboardCandidateSingle
{
    unsigned int _wordOriginFeedbackID;
    NSArray *_usageTrackingTypes;
    BOOL extensionCandidate;
}

@property(nonatomic, getter=isExtensionCandidate) BOOL extensionCandidate; // @synthesize extensionCandidate;
- (id)usageTrackingTypes;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isAutocorrection;
- (unsigned int)wordOriginFeedbackID;
- (void)dealloc;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 wordOriginFeedbackID:(unsigned int)arg3 usageTrackingTypes:(id)arg4;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 wordOriginFeedbackID:(unsigned int)arg3;

@end
