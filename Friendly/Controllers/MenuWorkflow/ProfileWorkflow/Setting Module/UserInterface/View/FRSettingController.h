//
//  FRSettingInteractor.h
//  Friendly
//
//  Created by Matthew James on 25.03.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

#import "BSTableController.h"

@class FRSettingDataSource;

@protocol FRSettingControllerDelegate <NSObject>

- (void)logOut;

@end

@interface FRSettingController : BSTableController

@property (nonatomic, weak) id<FRSettingControllerDelegate> delegate;
- (void)updateDataSource:(FRSettingDataSource*)dataSource;

@end
