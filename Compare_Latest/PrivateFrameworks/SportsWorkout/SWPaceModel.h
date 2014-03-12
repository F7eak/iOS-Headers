/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSData;

@interface SWPaceModel : NSObject
{
    void *_paceModelValue;
}

- (_Bool)recalibrateWithAdjustedDistanceMiles:(float)arg1;
- (_Bool)calibrateWithDistanceMiles:(float)arg1 forWalk:(_Bool)arg2;
- (void)resetCalibration;
@property(readonly, nonatomic) float maximumValidCalibrationMiles; // @dynamic maximumValidCalibrationMiles;
@property(readonly, nonatomic) float minimumValidCalibrationMiles; // @dynamic minimumValidCalibrationMiles;
@property(readonly, nonatomic) _Bool canBeUsedForRunCalibration; // @dynamic canBeUsedForRunCalibration;
@property(readonly, nonatomic) _Bool canBeUsedForWalkCalibration; // @dynamic canBeUsedForWalkCalibration;
- (_Bool)feedPacketPayload:(const char *)arg1 timestamp:(unsigned long long)arg2;
- (void)stopEvent;
- (void)resumeEvent;
- (void)startEventWithInitialMiles:(float)arg1 isCalibration:(_Bool)arg2;
@property(readonly, nonatomic) _Bool isWalk; // @dynamic isWalk;
- (unsigned long long)radioIdForFGSN:(id)arg1;
- (id)FGSNForRadioId:(unsigned long long)arg1;
- (float)caloriesForWeight:(float)arg1;
@property(readonly, nonatomic) unsigned long long remainingBatteryLifetimeInHours;
@property(readonly, nonatomic) unsigned long long lifetimeBatteryHoursUsed; // @dynamic lifetimeBatteryHoursUsed;
@property(readonly, nonatomic) float lifetimeCalibratedRunningMiles; // @dynamic lifetimeCalibratedRunningMiles;
@property(readonly, nonatomic) float lifetimeUncalibratedRunningMiles; // @dynamic lifetimeUncalibratedRunningMiles;
@property(readonly, nonatomic) float lifetimeCalibratedWalkingMiles; // @dynamic lifetimeCalibratedWalkingMiles;
@property(readonly, nonatomic) float lifetimeUncalibratedWalkingMiles; // @dynamic lifetimeUncalibratedWalkingMiles;
@property(readonly, nonatomic) unsigned long long runningStepCount; // @dynamic runningStepCount;
@property(readonly, nonatomic) unsigned long long walkingStepCount; // @dynamic walkingStepCount;
@property(readonly, nonatomic) float distanceInMiles; // @dynamic distanceInMiles;
@property(readonly, nonatomic) float paceInSecondsPerMile; // @dynamic paceInSecondsPerMile;
@property(copy, nonatomic) NSData *parameters; // @dynamic parameters;
- (struct PaceModel *)_paceModel;
- (void)dealloc;
- (id)init;

@end
