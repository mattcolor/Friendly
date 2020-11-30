//
//  FRSearchByCategoryDiscoverPeopleCellViewModel.m
//  Friendly
//
//  Created by Matthew James on 26.04.16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//

#import "FRSearchByCategoryDiscoverPeopleCellViewModel.h"

@implementation FRSearchByCategoryDiscoverPeopleCellViewModel

- (CGFloat)heightCell
{
    if (self.users.count == 0)
    {
        return 0;
    }
    else
    {
        return 70;
    }
}

@end
