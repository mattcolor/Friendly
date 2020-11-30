//
//  FRFooterQuestionairView.h
//  Friendly
//
//  Created by Matthew James on 07.03.16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//

@interface FRFooterQuestionairView : UIView

- (instancetype)initWithCurrentPage:(NSInteger)page allPage:(NSInteger)allPage nextButtonTitle:(NSString*)title hideSkip:(BOOL)hideSkip;
@property (nonatomic, strong) UIButton* continueButton;
@property (nonatomic, strong) UIButton* skipButton;

@end
