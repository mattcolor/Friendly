//
//  FRFriendsEventsInteractor.h
//  Friendly
//
//  Created by Matthew James on 03.07.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

#import "FRFriendsEventsInteractorIO.h"

@interface FRFriendsEventsInteractor : NSObject <FRFriendsEventsInteractorInput>

@property (nonatomic, weak) id<FRFriendsEventsInteractorOutput> output;

@end

