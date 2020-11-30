//
//  FREventFilterInteractor.h
//  Friendly
//
//  Created by Matthew James on 21.04.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

#import "BSTableController.h"
#import "FREventFilterViewConstatns.h"

@class FREventFilterDataSource;


@protocol FREventFilterControllerDelegate <NSObject>

- (void)selectedCell:(FREventFilterCellType)type;

@end


@interface FREventFilterController : BSTableController

@property (nonatomic, weak) id<FREventFilterControllerDelegate> delegate;

- (void)updateDataSource:(FREventFilterDataSource*)dataSource;

@end
