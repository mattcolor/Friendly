//
//  FRFriendsEventsInteractor.h
//  Friendly
//
//  Created by Matthew James on 03.07.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

@class FRFriendsEventsDataSource;

@protocol FRFriendsEventsViewInterface <NSObject>

- (void)updateDataSource:(FRFriendsEventsDataSource*)dataSource;
- (void)updatedEvents;

@end
