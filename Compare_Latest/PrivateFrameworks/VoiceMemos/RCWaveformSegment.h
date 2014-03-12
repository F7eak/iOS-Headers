/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"

@class NSData;

@interface RCWaveformSegment : NSObject <NSCoding>
{
    NSData *_averagePowerLevelData;
    CDStruct_73a5d3ca _timeRange;
}

+ (void)initialize;
@property(readonly, nonatomic) CDStruct_73a5d3ca timeRange; // @synthesize timeRange=_timeRange;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)segmentsByMergingWithSegment:(id)arg1;
- (id)segmentByClippingToTimeRange:(CDStruct_73a5d3ca)arg1;
- (id)_segmentsByMergingIfNecessaryGreaterSegment:(id)arg1;
- (id)_segmentWithValuesInContainedTimeRange:(CDStruct_73a5d3ca)arg1;
@property(readonly, nonatomic) long long averagePowerLevelsCount;
@property(readonly, nonatomic) const float *averagePowerLevels;
- (id)description;
- (id)copyWithTimeRangeOffsetByTimeOffset:(double)arg1;
- (id)initWithTimeRange:(CDStruct_73a5d3ca)arg1 averagePowerLevelVector:(vector_ec52ae8c *)arg2;
- (id)initWithTimeRange:(CDStruct_73a5d3ca)arg1 averagePowerLevelData:(id)arg2 copyData:(_Bool)arg3;

@end
