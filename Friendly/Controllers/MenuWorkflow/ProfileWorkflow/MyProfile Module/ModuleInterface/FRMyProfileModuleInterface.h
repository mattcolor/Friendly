//
//  FRMyProfileInteractor.h
//  Friendly
//
//  Created by Matthew James on 17.03.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

@protocol FRMyProfileModuleInterface <NSObject>

- (void)backSelected;
- (void)updateData;
- (void)saveEditSelected;
- (void)loadData;
- (void) reloadInstagram;

@end
