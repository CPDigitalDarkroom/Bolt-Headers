//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TableViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@interface ManageAccountViewController : TableViewController <UITableViewDataSource, UITableViewDelegate>
{
}

- (void)doDeleteAccount;
- (void)deleteAccountWithConfirmation;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)setUpTableView;
- (void)setUpHeaderView;
- (id)init;

@end

