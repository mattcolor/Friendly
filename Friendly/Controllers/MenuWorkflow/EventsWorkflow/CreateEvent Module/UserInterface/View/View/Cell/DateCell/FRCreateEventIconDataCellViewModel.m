//
//  FRCreateEventIconDataCellViewModel.m
//  Friendly
//
//  Created by Matthew James on 09.03.16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//

#import "FRCreateEventIconDataCellViewModel.h"

@implementation FRCreateEventIconDataCellViewModel

- (NSAttributedString*)attributedTitle
{
    NSMutableAttributedString* attribString = [[NSMutableAttributedString alloc]initWithString:[NSString stringWithFormat:@"%@ *", self.title]];
    [attribString setAttributes:@{NSForegroundColorAttributeName : [UIColor bs_colorWithHexString:@"#FF6868"]} range:NSMakeRange(self.title.length, 2)];
    
    return attribString;
}

@end
