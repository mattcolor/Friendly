//
//  FREditProfileInteractor.h
//  Friendly
//
//  Created by Matthew James on 17.03.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

#import "BSTableController.h"

@class FREditProfileDataSource;


@interface FREditProfileController : BSTableController

- (void)updateDataSource:(FREditProfileDataSource*)dataSource;

@end
