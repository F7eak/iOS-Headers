//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PCInterfaceUsabilityMonitorDelegate.h"
#import "PCInterfaceUsabilityMonitorProtocol.h"

@class CUTWeakReference, NSString, PCInterfaceUsabilityMonitor;

__attribute__((visibility("hidden")))
@interface PCWWANUsabilityMonitor : NSObject <PCInterfaceUsabilityMonitorProtocol, PCInterfaceUsabilityMonitorDelegate>
{
    struct dispatch_queue_s *_delegateQueue;
    struct dispatch_queue_s *_ivarQueue;
    struct dispatch_queue_s *_monitorDelegateQueue;
    CUTWeakReference *_delegateReference;
    BOOL _isInCall;
    BOOL _isInHighPowerState;
    BOOL _trackUsability;
    unsigned int _thresholdOffTransitionCount;
    double _trackedTimeInterval;
    NSString *_interfaceName;
    PCInterfaceUsabilityMonitor *_interfaceMonitor;
    struct __CFString *_currentRAT;
    int _powerlogCDRXToken;
    long _wwanContextID;
    struct dispatch_queue_s *_ctServerQueue;
}

- (void)interfaceReachabilityChanged:(id)arg1;
- (void)interfaceLinkQualityChanged:(id)arg1 previousLinkQuality:(int)arg2;
- (void)_callDelegateOnIvarQueueWithBlock:(CDUnknownBlockType)arg1;
@property(nonatomic) id <PCInterfaceUsabilityMonitorDelegate> delegate;
@property(readonly, nonatomic) BOOL isRadioHot;
@property(readonly, nonatomic) BOOL isPoorLinkQuality;
@property(readonly, nonatomic) NSString *linkQualityString;
@property(readonly, nonatomic) BOOL isInternetReachable;
@property(readonly, nonatomic) BOOL isInterfaceHistoricallyUsable;
@property(readonly, nonatomic) BOOL isInterfaceUsable;
@property(readonly, nonatomic) int linkQuality;
@property(readonly, nonatomic) int interfaceIdentifier;
- (void)setTrackedTimeInterval:(double)arg1;
- (void)setThresholdOffTransitionCount:(unsigned int)arg1;
- (void)setTrackUsability:(BOOL)arg1;
- (void)_forwardConfigurationOnIvarQueue;
@property(readonly, nonatomic) struct __CFString *wwanInterfaceName;
@property(readonly, nonatomic) struct __CFString *currentRAT; // @synthesize currentRAT=_currentRAT;
@property(readonly, nonatomic) BOOL isLTEWithCDRX;
- (void)_adjustInterfaceNameForWWANContextID:(long)arg1;
- (void)_setupWWANMonitor;
- (void)dealloc;
- (id)initWithDelegateQueue:(struct dispatch_queue_s *)arg1;

@end
