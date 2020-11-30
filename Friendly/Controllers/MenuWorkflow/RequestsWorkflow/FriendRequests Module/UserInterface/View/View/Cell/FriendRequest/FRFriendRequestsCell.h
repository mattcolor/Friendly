//
//  FRFriendRequestsCell.h
//  Friendly
//
//  Created by Matthew James on 08.04.16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//

#import "BSBaseTableViewCell.h"
#import "FRFriendRequestsCellViewModel.h"

@interface FRFriendRequestsCell : BSBaseTableViewCell

@property (nonatomic, strong) UIImageView* photoImage;
@property (nonatomic, strong) UIImageView* statusImage;

@property (nonatomic, strong) UILabel* titleLabel;
@property (nonatomic, strong) UILabel* subtitleLabel;

@property (nonatomic, strong) UIButton* acceptButton;
@property (nonatomic, strong) UIButton* declineButton;
@property (nonatomic, strong) UIView* statusBackView;

@end
