
//
//  Created by Matthew James on 30.11.15.
//  Copyright © 2015 Accucode Inc. All rights reserved.

//

@interface NSObject (SMSafeValues)

+ (NSString*)bs_safeString:(NSString*)value;
+ (NSDictionary*)bs_safeDictionary:(NSDictionary*)dict;

@end
