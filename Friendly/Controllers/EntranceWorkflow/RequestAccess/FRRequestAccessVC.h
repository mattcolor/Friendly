//
//  FRRequestAccessVC.h
//  Friendly
//
//  Created by Matthew James on 10.04.16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//

#import "FRBaseVC.h"

typedef NS_ENUM(NSInteger, FRRequestAccessViewType) {
    FRRequestAccessViewPushNotification,
    FRRequestAccessViewLocation
};

@interface FRRequestAccessVC : FRBaseVC

@property (nonatomic, assign) FRRequestAccessViewType mode;

@end
