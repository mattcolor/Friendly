//
//  MutualUser+Create.h
//  Friendly
//
//  Created by Dmitry on 24.06.16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//

#import "MutualUser.h"
#import "FRUserModel.h"

@interface MutualUser (Create)

+ (instancetype)initWithModel:(FRMutualFriend*)mutual inContext:(NSManagedObjectContext*)context;
- (FRMutualFriend*)mutualFriends;

@end
