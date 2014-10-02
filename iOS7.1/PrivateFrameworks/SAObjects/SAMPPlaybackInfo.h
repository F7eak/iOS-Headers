//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import "SAAceSerializable.h"

@class SACalendar;

@interface SAMPPlaybackInfo : AceObject <SAAceSerializable>
{
}

+ (id)playbackInfoWithDictionary:(id)arg1 context:(id)arg2;
+ (id)playbackInfo;
@property(nonatomic) BOOL rememberPlaybackPosition;
@property(nonatomic) int plays;
@property(nonatomic) int playbackPositionMillis;
@property(retain, nonatomic) SACalendar *lastPlayedDate;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
