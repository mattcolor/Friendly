//
//  FRProfilePolishInteractor.h
//  Friendly
//
//  Created by Matthew James on 3.03.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

@interface FRProfilePolishWireframe : NSObject

- (void)presentProfilePolishControllerFromNavigationController:(UINavigationController*)nc interests:(NSArray*)interests;
- (void)dismissProfilePolishController;
- (void)presentHomeScreen;
- (void)presentPhotoPickerController;
- (void)presentInstagramAuthController;

@end
