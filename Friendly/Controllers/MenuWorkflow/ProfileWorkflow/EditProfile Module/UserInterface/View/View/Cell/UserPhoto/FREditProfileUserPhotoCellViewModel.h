//
//  FREditProfileUserPhotoCellViewModel.h
//  Friendly
//
//  Created by Matthew James on 21.03.16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//

#import "FRMyProfileUserPhotoCellViewModel.h"

@protocol FREditProfileUserPhotoCellViewModelDelegate <NSObject>

- (void)changeUserPhoto;
- (void)changeWallPhoto;
- (void)saveSelected;
- (void)settingSelected;

@end

@interface FREditProfileUserPhotoCellViewModel : FRMyProfileUserPhotoCellViewModel

+ (instancetype)initWithModel:(UserEntity *)model;

@property (nonatomic, weak) id <FREditProfileUserPhotoCellViewModelDelegate>editDelegate;

- (void)changeUserPhoto;
- (void)changeWallPhoto;
- (void)saveSelected;
- (void)settingSelected;

@end
