//
//  FRFriendRequestsInteractor.h
//  Friendly
//
//  Created by Matthew James on 07.04.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

#import "FRFriendRequestsViewInterface.h"
#import "FRFriendRequestsModuleInterface.h"
#import "FRBaseVC.h"

@interface FRFriendRequestsVC : FRBaseVC <FRFriendRequestsViewInterface>

@property (nonatomic, strong) id<FRFriendRequestsModuleInterface> eventHandler;
@property (nonatomic, assign) UIStatusBarStyle statusBarColor;
@end
