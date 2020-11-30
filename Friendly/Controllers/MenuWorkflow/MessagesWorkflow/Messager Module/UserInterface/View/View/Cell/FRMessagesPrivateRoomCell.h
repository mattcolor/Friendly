//
//  FRMessagesPrivateRoomCell.h
//  Friendly
//
//  Created by Matthew James on 19.05.16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//

#import "BSBaseTableViewCell.h"
#import "FRMessagesPrivateRoomCellViewModel.h"

@interface FRMessagesPrivateRoomCell : BSBaseTableViewCell

@property (nonatomic, strong) UIImageView* photoImage;
@property (nonatomic, strong) UIImageView* statusImage;

@property (nonatomic, strong) UILabel* titleLabel;
@property (nonatomic, strong) UILabel* subtitleLabel;
@property (nonatomic, strong) UILabel* dateLabel;

@end
