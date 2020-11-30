//
//  BSEstimateCellHeight.h
//  Friendly
//
//  Created by Matthew James on 21.03.16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//


@interface BSEstimateCellHeight : NSObject

+ (CGFloat)estimateHeightWithText:(NSString*)text font:(UIFont*)font sideOffset:(CGFloat)sideOffset;
+ (CGFloat)estimateHeightWithAttributedText:(NSAttributedString*)attributedText sideOffset:(CGFloat)sideOffset;

@end
