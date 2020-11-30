//
//  FRMyProfileInteractor.h
//  Friendly
//
//  Created by Matthew James on 17.03.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

#import "FRMyProfileInteractorIO.h"
#import "FRMyProfileWireframe.h"
#import "FRMyProfileViewInterface.h"
#import "FRMyProfileModuleDelegate.h"
#import "FRMyProfileModuleInterface.h"

@interface FRMyProfilePresenter : NSObject <FRMyProfileInteractorOutput, FRMyProfileModuleInterface>

@property (nonatomic, strong) id<FRMyProfileInteractorInput> interactor;
@property (nonatomic, strong) FRMyProfileWireframe* wireframe;

@property (nonatomic, weak) UIViewController<FRMyProfileViewInterface>* userInterface;
@property (nonatomic, weak) id<FRMyProfileModuleDelegate> myProfileModuleDelegate;

- (void)configurePresenterWithUserInterface:(UIViewController<FRMyProfileViewInterface>*)userInterface;

@end
