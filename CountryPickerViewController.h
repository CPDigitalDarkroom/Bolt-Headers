//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TableViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class Country, CrystalBackgroundView, NSArray, NSHashTable;

@interface CountryPickerViewController : TableViewController <UITableViewDataSource, UITableViewDelegate>
{
    id <CountryPickerViewControllerDelegate> _delegate;
    NSArray *_countries;
    NSArray *_countryCodes;
    NSArray *_sections;
    Country *_currentCountry;
    NSHashTable *_headerViews;
    CrystalBackgroundView *_backgroundView;
}

+ (id)defaultCountry;
@property(retain, nonatomic) CrystalBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) NSHashTable *headerViews; // @synthesize headerViews=_headerViews;
@property(retain, nonatomic) Country *currentCountry; // @synthesize currentCountry=_currentCountry;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) NSArray *countryCodes; // @synthesize countryCodes=_countryCodes;
@property(retain, nonatomic) NSArray *countries; // @synthesize countries=_countries;
@property(nonatomic) __weak id <CountryPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (int)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(int)arg3;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)updateHeaderColors;
- (void)onDonePressed:(id)arg1;
- (void)setUpTableView;
- (void)setUpHeaderView;
- (void)viewDidLoad;
- (int)tableViewStyle;
- (id)initWithCountry:(id)arg1;

@end

