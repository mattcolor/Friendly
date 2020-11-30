//
//  FRSettingInteractor.h
//  Friendly
//
//  Created by Matthew James on 25.03.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

@class FRSettingDataSource;

@protocol FRSettingViewInterface <NSObject>

- (void)updateDataSource:(FRSettingDataSource*)dataSource;

@end
