//
//  FREventsHeaderViewModel.m
//  Friendly
//
//  Created by Matthew James on 12.04.16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//

#import "FREventsHeaderViewModel.h"
#import "FRUserManager.h"

@implementation FREventsHeaderViewModel

- (void)showUserProfileSelected
{
    [self.delegate showShowUserProfileSelected];
}

- (void)showFilter
{
    [self.delegate showFilterSelected];
}

- (NSString*)photoUrl
{
    NSString* str = [FRUserManager sharedInstance].userModel.photo;
    return str;
}


@end
