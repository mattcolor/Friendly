//
//  FRHomeInteractor.h
//  Friendly
//
//  Created by Matthew James on 01.07.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

@class FRHomeDataSource;

@protocol FRHomeViewInterface <NSObject>

- (void)updateDataSource:(FRHomeDataSource*)dataSource;
- (void)updatedEvents;
- (void)updateFeatured:(NSArray*)eventEntity;

@end
