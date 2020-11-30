//
//  FRIntroInteractor.h
//  Friendly
//
//  Created by Matthew James on 28.03.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

typedef NS_ENUM(NSInteger, FRIntroHudType) {
    FRIntroHudTypeError,
    FRIntroHudTypeShowHud,
    FRIntroHudTypeHideHud,
};

@protocol FRIntroInteractorInput <NSObject>

- (void)loadData;
- (void)login:(UIViewController*)viewController;

@end


@protocol FRIntroInteractorOutput <NSObject>

- (void)dataLoaded;
- (void)showHudWithType:(FRIntroHudType)type title:(NSString*)title message:(NSString*)message;
- (void)loginSuccess:(NSString*)first_login;
- (void)fbLoginSuccess;
- (void)loginFailure;

@end
