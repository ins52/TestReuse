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
        DLog(@"%@", [self reuseIdentifier]);
    }
    return self;
}


- (void)awakeFromNib {
    // Initialization code
    DLog(@"reuseIdentifier:%@;", [self reuseIdentifier]);
}

@end
