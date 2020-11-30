//
//  AppDelegate.h
//  Friendly
//
//  Created by Matthew James on 26.02.2016.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//

#import "GAI.h"

typedef NS_ENUM(NSUInteger, RegistrationState)
{
    RegistrationStateStart,
    RegistrationStateMiddleRegistration,
    RegistrationStateFoolRegistration
};

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic, readonly) id<GAITracker> tracker;
@property (nonatomic, assign) RegistrationState state;
- (void)sendToGAScreen:(NSString *)screenName;

@end

