//
//  PTAuthTransportService.h
//  Friendly
//
//  Created by Matthew James on 26.02.16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//

@class FRUserModel;

@interface FRAuthTransportService : NSObject

+ (void)authWithFacebookToken:(NSString*)facebookToken
                    apnsToken:(NSString*)apnsToken
                      success:(void(^)(FRUserModel* userModel))success
                      failure:(void(^)(NSError* error))failure;

+ (void)logoutSuccess:(void(^)())success
              failure:(void(^)(NSError* error))failure;

@end
