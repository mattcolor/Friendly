//
//  FRAppDependencies.h
//  Friendly
//
//  Created by Matthew James on 26.02.2016.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//


@interface FRAppDependencies : NSObject

@property (nonatomic, weak) UIWindow* window;


#pragma mark - Application Lifecycle


- (void)handleApplicationStart:(UIApplication*)application options:(NSDictionary*)options;
- (void)handleApplicationWillBecomeActive:(UIApplication*)application;
- (BOOL)handleApplication:(UIApplication*)application OpenURL:(NSURL *)url sourceApplication:(NSString *)sourceApplication annotation:(id)annotation;
- (void)handleApplicationDidBecomeActive:(UIApplication *)application;

#pragma mark - Notifications

- (void)handleApplicationRegisterForNotificationsWithToken:(NSData*)token;
- (void)handleApplication:(UIApplication*)application receiveNotification:(NSDictionary*)notification;
- (void)handleApplication:(UIApplication*)application didFailToRegisterForRemoteNotificationsWithError:(NSError*)error;
- (void)handleOpenUrl:(NSURL*)url;
#pragma mark - External Actions

- (BOOL)handleOpenURL:(NSURL *)url sourceApplication:(NSString *)sourceApplication;

#pragma mark - Apple Watch

- (void)handleApplication:(UIApplication *)application withWatchKitExtensionRequest:(NSDictionary *)userInfo;


@end
