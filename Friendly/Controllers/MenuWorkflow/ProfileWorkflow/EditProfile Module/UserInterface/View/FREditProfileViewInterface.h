//
//  FREditProfileInteractor.h
//  Friendly
//
//  Created by Matthew James on 17.03.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

@class FREditProfileDataSource;

@protocol FREditProfileViewInterface <NSObject>

- (void)updateDataSource:(FREditProfileDataSource*)dataSource;
- (void)updateWallImage:(UIImage*)image;
- (void)updateWallImageUrl:(NSString*)imageUrl;

@end
