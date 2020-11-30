//
//  UIColor+BSAdditions.h
//
//  Created by Matthew James on 30.11.15.
//  Copyright © 2015 Accucode Inc. All rights reserved.
//
@interface UIColor (BSAdditions)

+ (UIColor*)bs_colorWithHexString:(NSString *)stringToConvert;
+ (UIColor*)bs_randomColor;

- (NSString*)bs_hexString;

@end
