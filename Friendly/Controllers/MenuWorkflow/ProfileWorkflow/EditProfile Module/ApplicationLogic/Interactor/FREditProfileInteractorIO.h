//
//  FREditProfileInteractor.h
//  Friendly
//
//  Created by Matthew James on 17.03.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

@class FRProfileDomainModel;

typedef NS_ENUM(NSInteger, FREditProfileHudType) {
    FREditProfileHudTypeError,
    FREditProfileHudTypeShowHud,
    FREditProfileHudTypeHideHud,
};

@protocol FREditProfileInteractorInput <NSObject>

- (void)loadData;
- (void)updateUserProfile:(FRProfileDomainModel*)model;

@end


@protocol FREditProfileInteractorOutput <NSObject>

- (void)dataLoaded;
- (void)showHudWithType:(FREditProfileHudType)type title:(NSString*)title message:(NSString*)message;
- (void)profileUpdated;

@end
