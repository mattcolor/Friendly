//
//  FRPageView.h
//  Friendly
//
//  Created by Matthew James on 28.03.16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//

#import "EAIntroPage.h"
#import "FRBasePageView.h"

@interface FRPageView : EAIntroPage

@property (nonatomic, strong) FRBasePageView* customPageView;

- (instancetype)initWithTitle:(NSString*)title subTitle:(NSString*)subTitle;

@end
