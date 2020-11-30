//
//  FRPushNotificationManager.h
//  Friendly
//
//  Created by Matthew James on 12.05.16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//


@interface FRPushNotificationManager : NSObject

+ (instancetype)sharedInstance;
- (void)handleNotification:(NSDictionary *)userInfo;
- (void)handleNotificationActiveState:(NSDictionary *)userInfo;
- (void)handleOpenUrl:(NSURL*)url;
@end
