//
//  FRFriendRequestsInteractor.h
//  Friendly
//
//  Created by Matthew James on 07.04.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

@class FRFriendRequestsDataSource, FRFriendFamiliarCellViewModel, FRFriendRequestsCellViewModel;

@protocol FRFriendRequestsViewInterface <NSObject>

- (void)updateDataSource:(FRFriendRequestsDataSource*)dataSource;
- (void)updateViewWithFriendRequests:(NSArray*)friendRequests potentialFriends:(NSArray*)potentialFriends;

- (void)removePotentialFriend:(FRFriendFamiliarCellViewModel*)model;
- (void)removeFriendRequest:(FRFriendRequestsCellViewModel*)model;
                               

@end
