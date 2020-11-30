//
//  FRFriendsEventsInteractor.h
//  Friendly
//
//  Created by Matthew James on 03.07.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

#import "FRFriendsEventsViewInterface.h"
#import "FRFriendsEventsModuleInterface.h"
#import "FRBaseVC.h"

@interface FRFriendsEventsVC : FRBaseVC <FRFriendsEventsViewInterface>

@property (nonatomic, strong) id<FRFriendsEventsModuleInterface> eventHandler;
@property (nonatomic, strong) UITableView* tableView;

@property (nonatomic, assign) BOOL willShowEventPreview;

@end
