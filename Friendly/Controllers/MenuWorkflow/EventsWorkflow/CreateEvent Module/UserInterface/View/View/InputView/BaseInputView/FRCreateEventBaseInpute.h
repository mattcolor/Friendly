//
//  FRCreateEventBaseInpute.h
//  Friendly
//
//  Created by Matthew James on 10.03.16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//



@interface FRCreateEventBaseInpute : UIView

@property (nonatomic, strong) UIButton* closeButton;
@property (nonatomic, strong) UIView* headerView;
@property (nonatomic, strong) UIButton* cancelButton;

- (void)closeSelected;

@end
