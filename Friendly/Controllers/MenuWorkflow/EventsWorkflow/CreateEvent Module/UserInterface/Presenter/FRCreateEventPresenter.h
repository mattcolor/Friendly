//
//  FRCreateEventInteractor.h
//  Friendly
//
//  Created by Matthew James on 8.03.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

#import "FRCreateEventInteractorIO.h"
#import "FRCreateEventWireframe.h"
#import "FRCreateEventViewInterface.h"
#import "FRCreateEventModuleDelegate.h"
#import "FRCreateEventModuleInterface.h"

@interface FRCreateEventPresenter : NSObject <FRCreateEventInteractorOutput, FRCreateEventModuleInterface>


@property (nonatomic, strong) id<FRCreateEventInteractorInput> interactor;
@property (nonatomic, strong) FRCreateEventWireframe* wireframe;

@property (nonatomic, weak) UIViewController<FRCreateEventViewInterface>* userInterface;
@property (nonatomic, weak) id<FRCreateEventModuleDelegate> createEventModuleDelegate;

- (void)configurePresenterWithUserInterface:(UIViewController<FRCreateEventViewInterface>*)userInterface event:(FREventModel*)event;

@end
