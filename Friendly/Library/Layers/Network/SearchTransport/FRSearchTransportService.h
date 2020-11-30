//
//  FRSearchTransportService.h
//  Friendly
//
//  Created by Matthew James on 23.04.16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//

@class FRSearchUsers;

@interface FRSearchTransportService : NSObject

+ (void)searchUsersWithString:(NSString*)string
                      success:(void(^)(FRSearchUsers* respons))success
                      failure:(void(^)(NSError* error))failure;

@end
