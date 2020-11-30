//
//  FRFriendRequestsInteractor.h
//  Friendly
//
//  Created by Matthew James on 07.04.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

#import "FRFriendRequestsInteractorIO.h"

@interface FRFriendRequestsInteractor : NSObject <FRFriendRequestsInteractorInput>

@property (nonatomic, weak) id<FRFriendRequestsInteractorOutput> output;

@end

