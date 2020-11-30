//
//  FRFriendRequestsView.h
//  Friendly
//
//  Created by Matthew James on 08.04.16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//

@class FRRequestNavView;

@interface FRFriendRequestsView : UIView

@property (nonatomic, strong) FRRequestNavView* navBar;
@property (nonatomic, strong) UITableView* tableView;

@end
