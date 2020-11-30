//
//  FRFriendRequestsInteractor.h
//  Friendly
//
//  Created by Matthew James on 07.04.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

#import "FRFriendRequestsInteractorIO.h"
#import "FRFriendRequestsWireframe.h"
#import "FRFriendRequestsViewInterface.h"
#import "FRFriendRequestsModuleDelegate.h"
#import "FRFriendRequestsModuleInterface.h"

@interface FRFriendRequestsPresenter : NSObject <FRFriendRequestsInteractorOutput, FRFriendRequestsModuleInterface>

@property (nonatomic, strong) id<FRFriendRequestsInteractorInput> interactor;
@property (nonatomic, strong) FRFriendRequestsWireframe* wireframe;

@property (nonatomic, weak) UIViewController<FRFriendRequestsViewInterface>* userInterface;
@property (nonatomic, weak) id<FRFriendRequestsModuleDelegate> friendRequestsModuleDelegate;

- (void)configurePresenterWithUserInterface:(UIViewController<FRFriendRequestsViewInterface>*)userInterface;

@end
