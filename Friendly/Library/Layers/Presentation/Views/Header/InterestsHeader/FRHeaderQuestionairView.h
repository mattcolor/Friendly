//
//  FRHeaderQuestionairView.h
//  Friendly
//
//  Created by Matthew James on 07.03.16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//


@interface FRHeaderQuestionairView : UIView

@property (nonatomic, strong) UILabel* titleLabel;
@property (nonatomic, strong) UILabel* subtitleLabel;

- (instancetype)initWithTitle:(NSString*)title subtitle:(NSString*)subtitle;
- (void)updateTitle:(NSString*)title subtitle:(NSString*)subtitle;

@end
