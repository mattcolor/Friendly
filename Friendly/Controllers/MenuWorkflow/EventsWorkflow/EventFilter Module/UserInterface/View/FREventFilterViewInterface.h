//
//  FREventFilterInteractor.h
//  Friendly
//
//  Created by Matthew James on 21.04.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

@class FREventFilterDataSource;

@protocol FREventFilterViewInterface <NSObject>

- (void)updateDataSource:(FREventFilterDataSource*)dataSource;

@end
