//
//  FRProfilePolishInteractor.h
//  Friendly
//
//  Created by Matthew James on 3.03.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

#import "BSTableController.h"

@class FRProfilePolishDataSource;


@interface FRProfilePolishController : BSTableController

- (void)updateDataSource:(FRProfilePolishDataSource*)dataSource;
- (void)hideKeyboard;

@end
