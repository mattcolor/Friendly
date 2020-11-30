//
//  FREventListCellViewModel.m
//  Friendly
//
//  Created by Matthew James on 11.04.16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//

#import "FREventListCellViewModel.h"

@implementation FREventListCellViewModel

- (void)pressUserPhoto:(NSString*)userId
{
    [self.delegate pressUserPhoto:userId];
}

- (void)pressJoinEventId:(NSString*)eventId andModel:(FREvent*)event
{
    [self.delegate selectedJointEventId:eventId andModel:event];
}

- (void)selectedShareEvent:(FREvent*)event
{
    [self.delegate selectedShareEvent:event];
}

@end
