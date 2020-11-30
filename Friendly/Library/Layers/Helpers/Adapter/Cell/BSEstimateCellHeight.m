//
//  BSEstimateCellHeight.m
//  Friendly
//
//  Created by Matthew James on 21.03.16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//

#import "BSEstimateCellHeight.h"

@implementation BSEstimateCellHeight

+ (CGFloat)estimateHeightWithText:(NSString*)text font:(UIFont*)font sideOffset:(CGFloat)sideOffset
{
    CGFloat width = [UIScreen mainScreen].bounds.size.width - sideOffset;
    
    UILabel* label = [[UILabel alloc]initWithFrame:CGRectMake(0, 0, width, CGFLOAT_MAX)];
    label.text = text;
    label.numberOfLines = 0;
//    label.font = font;
    
    [label sizeToFit];
    
    return label.bounds.size.height;
}

+ (CGFloat)estimateHeightWithAttributedText:(NSAttributedString*)attributedText sideOffset:(CGFloat)sideOffset
{
    CGFloat width = [UIScreen mainScreen].bounds.size.width - sideOffset;
    UILabel* label = [[UILabel alloc]initWithFrame:CGRectMake(0, 0, width, CGFLOAT_MAX)];
    label.numberOfLines = 0;
    label.attributedText = attributedText;
    [label sizeToFit];
    
    return label.bounds.size.height;
}

@end
