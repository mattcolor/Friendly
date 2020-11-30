//
//  FRPrivateChatInteractor.h
//  Friendly
//
//  Created by Matthew James on 19.05.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

@class FRUserModel, FRPrivateRoom, FRGroupRoom;

@interface FRPrivateChatWireframe : NSObject

- (void)presentPrivateChatControllerFromNavigation:(UINavigationController*)nc forEvent:(FREvent*)event;

- (void)presentEventControllerWithEventId:(NSString*)eventId;

- (void)dismissPrivateChatController;
- (void)presentUserProfile:(UserEntity*)user;
- (void)showEvent:(FREvent*)event;

@end
