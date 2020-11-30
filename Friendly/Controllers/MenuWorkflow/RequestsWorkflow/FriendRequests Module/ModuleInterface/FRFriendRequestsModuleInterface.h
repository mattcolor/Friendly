//
//  FRFriendRequestsInteractor.h
//  Friendly
//
//  Created by Matthew James on 07.04.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

@protocol FRFriendRequestsModuleInterface <NSObject>

- (void)backSelected;
- (void)showAddFriends;
- (void)viewWillApear;
- (void)showUserProfileWithUserId:(NSString*)userId;

@end
