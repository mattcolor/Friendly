//
//  Created by Matthew James on 30.11.15.
//  Copyright © 2015 Accucode Inc. All rights reserved.
//

#import "NSObject+BSSafeValues.h"

@implementation NSObject (BSSafeValues)

+ (NSString*)bs_safeString:(NSString*)value
{
    value = value ? : @"";
    return [NSString stringWithFormat:@"%@", value];
}

+ (NSDictionary*)bs_safeDictionary:(NSDictionary*)dict
{
    dict = dict ? : @{};
    return dict; 
}

@end
