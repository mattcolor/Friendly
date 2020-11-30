//
//  FRCreateEventInteractor.h
//  Friendly
//
//  Created by Matthew James on 8.03.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

#import "BSTableController.h"
#import "FRCreateEventViewConstants.h"


@class FRCreateEventDataSource;

@protocol FRCreateEventControllerDelegate <NSObject>

- (void)selectedCell:(FRCreateEventCellType)cellType;

@end

@interface FRCreateEventController : BSTableController

@property (nonatomic, weak) id<FRCreateEventControllerDelegate> delegate;
- (void)updateDataSource:(FRCreateEventDataSource*)dataSource;

@end
