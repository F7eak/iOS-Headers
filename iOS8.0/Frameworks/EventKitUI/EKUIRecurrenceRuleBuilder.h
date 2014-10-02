//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface EKUIRecurrenceRuleBuilder : NSObject
{
    int _frequency;
    int _interval;
    unsigned int _count;
    NSArray *_dayNumbers;
    int _days;
    int _ordinalValue;
    NSArray *_monthNumbers;
}

@property(retain) NSArray *monthNumbers; // @synthesize monthNumbers=_monthNumbers;
@property int ordinalValue; // @synthesize ordinalValue=_ordinalValue;
@property int days; // @synthesize days=_days;
@property(retain) NSArray *dayNumbers; // @synthesize dayNumbers=_dayNumbers;
@property unsigned int count; // @synthesize count=_count;
@property int interval; // @synthesize interval=_interval;
@property int frequency; // @synthesize frequency=_frequency;
- (void).cxx_destruct;
- (id)description;
- (id)setPositions;
- (id)daysOfTheWeekWithWeek:(int)arg1;
- (id)daysOfTheWeek;
- (int)_frequencyToUse;
- (id)recurrenceRule;
- (void)_setDefaultValues;
- (id)init;

@end
