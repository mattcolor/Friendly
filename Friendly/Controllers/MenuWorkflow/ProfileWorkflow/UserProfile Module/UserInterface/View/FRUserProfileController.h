//
//  FRUserProfileInteractor.h
//  Friendly
//
//  Created by Matthew James on 28.03.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

#import "BSTableController.h"

@class FRUserProfileDataSource;


@interface FRUserProfileController : BSTableController

- (void)updateDataSource:(FRUserProfileDataSource*)dataSource;

@end
