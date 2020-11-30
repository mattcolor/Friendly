//
//  FRHomeScreenInteractor.h
//  Friendly
//
//  Created by Matthew James on 29.02.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

@class FRHomeScreenDataSource;

@protocol FRHomeScreenViewInterface <NSObject>

- (void)updateDataSource:(FRHomeScreenDataSource*)dataSource;

@end
