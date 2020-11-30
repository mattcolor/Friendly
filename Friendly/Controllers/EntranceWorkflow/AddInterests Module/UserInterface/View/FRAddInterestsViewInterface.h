//
//  FRAddInterestsInteractor.h
//  Friendly
//
//  Created by Matthew James on 3.03.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

@class FRAddInterestsDataSource;

@protocol FRAddInterestsViewInterface <NSObject>

- (void)updateDataSource:(FRAddInterestsDataSource*)dataSource;
- (void)showHiddenAnimationWithComplete:(void(^)())complete;
@end
