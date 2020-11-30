//
//  FRPrivateRoomChatInteractor.h
//  Friendly
//
//  Created by Matthew James on 17.07.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

#import "FRPrivateRoomChatInteractorIO.h"

@interface FRPrivateRoomChatInteractor : NSObject <FRPrivateRoomChatInteractorInput>

@property (nonatomic, weak) id<FRPrivateRoomChatInteractorOutput> output;
@property (nonatomic, strong) UserEntity* user;

@end

