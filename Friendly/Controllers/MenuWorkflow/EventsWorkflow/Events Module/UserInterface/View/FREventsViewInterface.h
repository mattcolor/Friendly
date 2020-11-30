//
//  FREventsInteractor.h
//  Friendly
//
//  Created by Matthew James on 29.02.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

@class FREventsDataSource;

@protocol FREventsViewInterface <NSObject>

- (void)updateDataSource:(FREventsDataSource*)dataSource;

@end
