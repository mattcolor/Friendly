//
//  FRRecommendedUsersInteractor.h
//  Friendly
//
//  Created by Matthew James on 3.03.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

@class FRRecomendedUserModels;

@interface FRRecommendedUsersWireframe : NSObject


- (void)presentRecommendedUsersControllerFromNavigationController:(UINavigationController*)nc interests:(NSArray*)interests users:(FRRecomendedUserModels*)users;

- (void)presentAddFriendsControllerFrom:(UINavigationController*)nc;
- (void)dismissRecommendedUsersController;

- (void)presentHomeScreenController;
- (void)presentProfilePolish;
- (void)showUserProfileWithId:(NSString*)userId;

@end
