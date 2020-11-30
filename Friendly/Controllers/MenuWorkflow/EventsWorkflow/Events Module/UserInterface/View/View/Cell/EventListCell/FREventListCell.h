//
//  FREventListCell.h
//  Friendly
//
//  Created by Matthew James on 11.04.16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//

#import "BSBaseTableViewCell.h"
#import "FREventListCellViewModel.h"

@class FREventModel;

@protocol FREventListCollevtionCellDelegate <NSObject>

- (void)selectEvent:(FREventModel*)event frame:(CGRect)attributes image:(UIImage*)image;

@end


@interface FREventListCell : BSBaseTableViewCell

@property (nonatomic, weak) id<FREventListCollevtionCellDelegate> delegate;

- (void)updateWithModel:(FREventListCellViewModel*)model;

@end
