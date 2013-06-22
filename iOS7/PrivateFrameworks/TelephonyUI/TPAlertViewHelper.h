/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "UIAlertViewDelegate-Protocol.h"

@class UIAlertView;

@interface TPAlertViewHelper : NSObject <UIAlertViewDelegate>
{
    id _completionHandler;
    UIAlertView *_alertView;
}

+ (id)alertHelperWithHandler:(id)arg1 style:(void)arg2 title:(int)arg3 message:(id)arg4 cancelButtonTitle:(id)arg5 otherButtonTitles:(id)arg6;
+ (id)_allHelpersArray;
+ (struct dispatch_queue_s *)_workQueue;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (id)_underlyingAlertView;
- (void)show;
@property(readonly) int firstOtherButtonIndex;
- (void)dismissWithCancelAnimated:(BOOL)arg1;
- (void)dismissWithClickedButtonIndexAnimated:(int)arg1;
- (void)setCompletionHandler:(id)arg1;
- (void)dealloc;
- (id)_initWithTitle:(id)arg1 style:(int)arg2 message:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;

@end
