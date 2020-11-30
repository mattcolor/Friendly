//
//  FRUserProfileInteractor.h
//  Friendly
//
//  Created by Matthew James on 28.03.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

#import "FRUserProfileInteractorIO.h"
#import "FRUserProfileWireframe.h"
#import "FRUserProfileViewInterface.h"
#import "FRUserProfileModuleDelegate.h"
#import "FRUserProfileModuleInterface.h"

@interface FRUserProfilePresenter : NSObject <FRUserProfileInteractorOutput, FRUserProfileModuleInterface>

@property (nonatomic, strong) id<FRUserProfileInteractorInput> interactor;
@property (nonatomic, strong) FRUserProfileWireframe* wireframe;

@property (nonatomic, weak) UIViewController<FRUserProfileViewInterface>* userInterface;
@property (nonatomic, weak) id<FRUserProfileModuleDelegate> userProfileModuleDelegate;

- (void)configurePresenterWithUserInterface:(UIViewController<FRUserProfileViewInterface>*)userInterface user:(UserEntity*)user;
@end
