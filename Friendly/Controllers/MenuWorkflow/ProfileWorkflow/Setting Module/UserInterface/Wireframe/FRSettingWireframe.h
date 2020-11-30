//
//  FRSettingInteractor.h
//  Friendly
//
//  Created by Matthew James on 25.03.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

@interface FRSettingWireframe : NSObject

- (void)presentSettingControllerFromController:(UIViewController*)nc;
- (void)dismissSettingController;

- (void)globalDissmiss;

+ (void)Logout;

@end
