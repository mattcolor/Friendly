//
//  FRRecommendedUsersInteractor.h
//  Friendly
//
//  Created by Matthew James on 3.03.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

@class FRRecommendedUsersDataSource;

@protocol FRRecommendedUsersViewInterface <NSObject>

- (void)updateDataSource:(FRRecommendedUsersDataSource*)dataSource;
- (void)showHiddenAnimationWithComplete:(void(^)())complete;
@end
