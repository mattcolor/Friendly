//
//  FRProfileUserPhotoCell.h
//  Friendly
//
//  Created by Matthew James on 18.03.16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//

#import "BSBaseTableViewCell.h"

@interface FRProfileUserPhotoCell : BSBaseTableViewCell

@property (nonatomic, strong) UIImageView* userWallPhoto;
@property (nonatomic, strong) UIButton* saveEditButton;
@property (nonatomic, strong) UIImageView* userPhoto;
@property (nonatomic, strong) UIView* workFieldView;
@property (nonatomic, strong) UILabel* usernameLabel;
@property (nonatomic, strong) UIButton* settingButton;

@end
