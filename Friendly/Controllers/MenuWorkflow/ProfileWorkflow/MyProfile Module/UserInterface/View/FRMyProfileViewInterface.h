//
//  FRMyProfileInteractor.h
//  Friendly
//
//  Created by Matthew James on 17.03.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

@class FRMyProfileDataSource;

@protocol FRMyProfileViewInterface <NSObject>

- (void)updateDataSource:(FRMyProfileDataSource*)dataSource;
- (void)updateWallImage:(NSString*)imageUrl;


@end
