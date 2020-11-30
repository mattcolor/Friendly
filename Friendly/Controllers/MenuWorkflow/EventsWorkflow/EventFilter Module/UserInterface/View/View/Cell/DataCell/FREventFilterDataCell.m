//
//  FREventFilterDataCell.m
//  Friendly
//
//  Created by Matthew James on 25.04.16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//

#import "FREventFilterDataCell.h"

@implementation FREventFilterDataCell

- (instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier
{
    self = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
    if (self)
    {
        self.dataLabel.textColor = [UIColor bs_colorWithHexString:@"263345"];
        self.titleLabel.textColor = [UIColor bs_colorWithHexString:@"9ca0ab"];
    }
    
    return self;
}

@end
