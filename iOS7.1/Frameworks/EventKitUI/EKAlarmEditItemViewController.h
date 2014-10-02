//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKitUI/EKEditItemViewController.h>

#import "CalendarEventAlarmTableDelegate.h"

@class CalendarEventAlarmTable, EKAlarm;

__attribute__((visibility("hidden")))
@interface EKAlarmEditItemViewController : EKEditItemViewController <CalendarEventAlarmTableDelegate>
{
    CalendarEventAlarmTable *_table;
    BOOL _immediateAlarmCreation;
    BOOL _allDay;
    BOOL _shouldAllowAlarmsTriggeringAfterStartDate;
    EKAlarm *_alarm;
    int _alarmIndex;
}

@property(nonatomic) BOOL shouldAllowAlarmsTriggeringAfterStartDate; // @synthesize shouldAllowAlarmsTriggeringAfterStartDate=_shouldAllowAlarmsTriggeringAfterStartDate;
@property(nonatomic) BOOL allDay; // @synthesize allDay=_allDay;
@property(nonatomic) int alarmIndex; // @synthesize alarmIndex=_alarmIndex;
@property(retain, nonatomic) EKAlarm *alarm; // @synthesize alarm=_alarm;
- (void).cxx_destruct;
- (void)alarmTableDidChangeAlarm:(id)arg1;
@property(nonatomic) int presetIdentifier;
- (BOOL)customSelected;
- (void)setCustomString:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithFrame:(struct CGRect)arg1 styleProvider:(id)arg2;

@end
