//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewDataSource.h"

@class NSIndexPath, NSString, UITableView;

@protocol UITableViewDataSourcePrivate <UITableViewDataSource>
- (void)tableView:(UITableView *)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(NSIndexPath *)arg3 withSender:(id)arg4;
- (BOOL)tableView:(UITableView *)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(NSIndexPath *)arg3 withSender:(id)arg4;
- (BOOL)tableView:(UITableView *)arg1 shouldShowMenuForRowAtIndexPath:(NSIndexPath *)arg2;

@optional
- (NSString *)tableView:(UITableView *)arg1 detailTextForHeaderInSection:(int)arg2;
- (NSIndexPath *)tableView:(UITableView *)arg1 indexPathForSectionIndexTitle:(NSString *)arg2 atIndex:(int)arg3;
@end
