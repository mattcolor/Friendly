//
//  NSString+SizeFit.h
//  Friendly
//
//  Created by Matthew James on 03.03.16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (SizeFit)

- (CGFloat)fontSizeWithFont:(UIFont *)font constrainedToSize:(CGSize)size;

@end
