//
//  FRProfilePolishInteractor.h
//  Friendly
//
//  Created by Matthew James on 3.03.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

@class FRProfilePolishDataSource;

@protocol FRProfilePolishViewInterface <NSObject>

- (void)updateDataSource:(FRProfilePolishDataSource*)dataSource;
- (void)showHiddenAnimationWithComplete:(void(^)())complete;

@end
