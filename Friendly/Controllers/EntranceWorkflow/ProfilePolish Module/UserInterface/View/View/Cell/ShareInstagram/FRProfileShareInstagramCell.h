//
//  FRProfileShareInstagramCell.h
//  Friendly
//
//  Created by Matthew James on 07.03.16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//

#import "BSBaseTableViewCell.h"
#import "FRProfileShareInstagramCellViewModel.h"

@interface FRProfileShareInstagramCell : BSBaseTableViewCell

@property (nonatomic, strong) UILabel* titleLabel;
@property (nonatomic, strong) UILabel* subtitleLabel;
@property (nonatomic, strong) UIButton* connectButton;

@end
