//
//  BaseCell.m
//  TestReuse
//
//  Created by aignatiev on 24.10.14.
//  Copyright (c) 2014 aignatiev. All rights reserved.
//

#import "BaseCell.h"
#import "CommonDefines.h"

@implementation BaseCell

- (instancetype)initWithCoder:(NSCoder *)coder
{
    self = [super initWithCoder:coder];
    if (self) {
        NSLog(@"[%s] %@", __PRETTY_FUNCTION__, [self reuseIdentifier]);
    }
    return self;
}


- (void)awakeFromNib {
    // Initialization code
//    NSLog(@"[%s] %@", __PRETTY_FUNCTION__, [self reuseIdentifier]);
    NSLog(@"[%s] reuseIdentifier:%@;", __PRETTY_FUNCTION__, [self reuseIdentifier]);
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

@end
