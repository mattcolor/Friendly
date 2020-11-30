//
//  FRPrivateChatContentIVew.h
//  Friendly
//
//  Created by Matthew James on 19.05.16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FRPrivateChatHeaderView.h"
#import "FRGroupChatNavigationView.h"

@interface FRPrivateChatContentIVew : UIView

@property (nonatomic, strong) FRPrivateChatHeaderView* headerView;
@property (nonatomic, strong) UITableView* tableView;
@property (nonatomic, strong) FRGroupChatNavigationView* navBar;

@end
