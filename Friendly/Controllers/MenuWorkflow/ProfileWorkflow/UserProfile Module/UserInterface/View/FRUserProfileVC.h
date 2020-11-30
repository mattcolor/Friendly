//
//  FRUserProfileInteractor.h
//  Friendly
//
//  Created by Matthew James on 28.03.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

#import "FRUserProfileViewInterface.h"
#import "FRUserProfileModuleInterface.h"
#import "FRBaseVC.h"

@class UserEntity;

@interface FRUserProfileVC : FRBaseVC <FRUserProfileViewInterface>

@property (nonatomic, strong) UITableView* tableView;
@property (nonatomic, strong) UserEntity *user;
@property (nonatomic, strong) id<FRUserProfileModuleInterface> eventHandler;

@end
