//
//  FRIntroInteractor.h
//  Friendly
//
//  Created by Matthew James on 28.03.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

@class FRIntroDataSource;

@protocol FRIntroViewInterface <NSObject>

- (void)updateDataSource:(FRIntroDataSource*)dataSource;

@end
