//
//  FRIntroInteractor.h
//  Friendly
//
//  Created by Matthew James on 28.03.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

#import "BSTableController.h"

@class FRIntroDataSource;


@interface FRIntroController : BSTableController

- (void)updateDataSource:(FRIntroDataSource*)dataSource;

@end
