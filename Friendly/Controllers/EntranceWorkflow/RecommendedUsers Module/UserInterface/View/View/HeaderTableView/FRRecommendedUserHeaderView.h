//
//  FRRecommendedUserHeaderView.h
//  Friendly
//
//  Created by Matthew James on 03.05.16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//

@protocol FRRecommendedUserHeaderViewDelegate <NSObject>

- (void)backSelected;

@end

@interface FRRecommendedUserHeaderView : UITableViewHeaderFooterView

@property (nonatomic, weak) id<FRRecommendedUserHeaderViewDelegate> delegate;

@property (nonatomic, strong) UIButton* backButton;

- (void)updateTitleFrameWithOffset:(CGPoint)point;

@end
