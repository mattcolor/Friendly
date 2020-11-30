//
//  FRUserProfileInteractor.h
//  Friendly
//
//  Created by Matthew James on 28.03.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

@class FRUserProfileDataSource;

@protocol FRUserProfileViewInterface <NSObject>

- (void)updateDataSource:(FRUserProfileDataSource*)dataSource;
- (void)updateWallImage:(NSString *)imageUrl;
- (void)updateWithPrivateAccount:(BOOL)isPrivateAccount;
@end
