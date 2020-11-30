//
//  FRSearchByCategoryNearbyCellViewModel.m
//  Friendly
//
//  Created by Matthew James on 26.04.16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//

#import "FRSearchByCategoryNearbyCellViewModel.h"

@implementation FRSearchByCategoryNearbyCellViewModel

- (NSString*)content
{
    return [NSString stringWithFormat:@"%ld NEARBY", (long)self.count];
}

- (void)settingSelected
{
    [self.delegate settingSelected];
}

@end
