//
//  FREventCollevtionCell.h
//  Friendly
//
//  Created by Matthew James on 15.03.16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//

@class FREventModel;

@protocol FREventListCollevtionCellDelegate <NSObject>

- (void)selectEvent:(FREventModel*)event :(CGRect)attributes :(UIImage*)image;

@end

@interface FREventListCollevtionCell : UICollectionViewCell

@property (nonatomic, weak) id<FREventListCollevtionCellDelegate> delegate;

- (void)updateWithModel:(NSArray*)array;


@end
