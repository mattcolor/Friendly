//
//  FRMessagerInteractor.h
//  Friendly
//
//  Created by Matthew James on 16.07.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

@protocol FRMessagerModuleInterface <NSObject>

- (void)backSelected;
- (void)showFriendRequest;
- (void)selectedUser:(UserEntity*)user;
- (void)searchText:(NSString*)searchText;
- (void)showSearch;
- (void)updateChatRoomsWithCount:(NSInteger)countRooms;
- (void)updateAvailableFriends:(NSInteger)count;
- (void)showAddUser;
@end
