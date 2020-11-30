//
//  FRHomeScreenInteractor.h
//  Friendly
//
//  Created by Matthew James on 29.02.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

typedef NS_ENUM(NSInteger, FRHomeScreenHudType) {
    FRHomeScreenHudTypeError,
    FRHomeScreenHudTypeShowHud,
    FRHomeScreenHudTypeHideHud,
};

@protocol FRHomeScreenInteractorInput <NSObject>

- (void)loadData;

@end


@protocol FRHomeScreenInteractorOutput <NSObject>

- (void)dataLoaded;
- (void)showHudWithType:(FRHomeScreenHudType)type title:(NSString*)title message:(NSString*)message;

@end
