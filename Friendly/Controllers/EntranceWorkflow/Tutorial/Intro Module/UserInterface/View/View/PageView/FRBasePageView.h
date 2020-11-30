//
//  FRBasePageView.h
//  Friendly
//
//  Created by Matthew James on 28.03.16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FRBasePageView : UIView

@property (nonatomic, strong) UIView* contentView;

@property (nonatomic, strong) UILabel* titleLabel;
@property (nonatomic, strong) UILabel* subtitleLabel;


- (instancetype)initWithTitle:(NSString*)title subTitle:(NSString*)subTitle;

@end
