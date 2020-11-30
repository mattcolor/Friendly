//
//  FRSearchByCategoryDiscoverPeopleCell.m
//  Friendly
//
//  Created by Matthew James on 26.04.16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//

#import "FRSearchByCategoryDiscoverPeopleCell.h"

@implementation FRSearchByCategoryDiscoverPeopleCell

- (void)updateWithModel:(FRSearchByCategoryDiscoverPeopleCellViewModel*)model
{
    [self updateWithUsers:[model users]];
}

@end
