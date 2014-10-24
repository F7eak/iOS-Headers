//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AVMIDIPlayer : NSObject
{
    void *_impl;
}

@property(nonatomic) double currentPosition;
@property(readonly, nonatomic) double duration;
@property(nonatomic) float rate;
@property(readonly, nonatomic, getter=isPlaying) BOOL playing;
- (void)stop;
- (void)play:(CDUnknownBlockType)arg1;
- (void)prepareToPlay;
- (double)beatsForHostTime:(unsigned long long)arg1;
- (unsigned long long)hostTimeForBeats:(double)arg1;
- (id)initWithData:(id)arg1 soundBankURL:(id)arg2 error:(id *)arg3;
- (id)initWithContentsOfURL:(id)arg1 soundBankURL:(id)arg2 error:(id *)arg3;
- (void)dealloc;
- (void)finalize;
- (void)destroyBase;
- (id)initBase;
- (struct MIDIPlayerImpl *)impl;

@end
