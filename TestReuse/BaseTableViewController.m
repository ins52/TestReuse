//
//  BaseTableViewController.m
//  TestReuse
//
//  Created by aignatiev on 24.10.14.
//  Copyright (c) 2014 aignatiev. All rights reserved.
//

#import "BaseTableViewController.h"
#import "BaseCell.h"
#import "CommonDefines.h"

@interface BaseTableViewController ()

@property (strong, nonatomic) NSArray* showItems;

@end

@implementation BaseTableViewController

- (instancetype)initWithCoder:(NSCoder *)coder
{
    self = [super initWithCoder:coder];
    if (self) {
        _showItems = @[];
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];

    NSMutableArray* newItems = [NSMutableArray array];
    for (NSUInteger i=0; i<5; i++) {
        [newItems addObject:[NSString stringWithFormat:@"Cell %lu", (unsigned long)i+1]];
    }
    self.showItems = newItems;

    [self.tableView registerNib:[UINib nibWithNibName:@"BaseCell" bundle:nil] forCellReuseIdentifier:@"BaseCell"];
}

#pragma mark - UITableViewDataSource

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return self.showItems.count;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    BaseCell* cell = [tableView dequeueReusableCellWithIdentifier:@"BaseCell"];
    NSAssert(cell, @"cell registered but not created");
    DLog(@"cell:[%p]", cell);
    
    cell.labelTitle.text = self.showItems[indexPath.row];

    return cell;
}

#pragma mark - UITableViewDelegate

- (CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath
{
    return 44.0f;
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
}


@end
