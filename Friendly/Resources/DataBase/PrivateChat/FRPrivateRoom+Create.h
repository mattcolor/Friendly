//
//  FRPrivateRoom+Create.h
//  Friendly
//
//  Created by Dmitry on 25.07.16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//

#import "FRPrivateRoom.h"

@interface FRPrivateRoom (Create)

+ (instancetype)createPrivateRoomForId:(NSString*)roomId inContext:(NSManagedObjectContext*)context;

@end
