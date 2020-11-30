//
//  FRMessagerInteractor.h
//  Friendly
//
//  Created by Matthew James on 16.07.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

@class FRMessagerDataSource;

@protocol FRMessagerViewInterface <NSObject>

- (void)updateDataSource:(FRMessagerDataSource*)dataSource;
- (void)updateChats;

@end
