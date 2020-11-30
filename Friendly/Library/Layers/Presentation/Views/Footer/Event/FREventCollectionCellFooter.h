//
//  FREventCollectionCellFooter.h
//  Friendly
//
//  Created by Matthew James on 14.03.16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//

@class FREventCollectionCellFooterViewModel;

@interface FREventCollectionCellFooter : UIView

@property (nonatomic, strong) UIButton* joinButton;

- (void)updateWithModel:(FREventCollectionCellFooterViewModel*)model;

@end
