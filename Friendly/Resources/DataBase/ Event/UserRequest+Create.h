//
//  UserRequest+Create.h
//  Friendly
//
//  Created by Dmitry on 01.07.16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//

#import "UserRequest.h"
#import "FREventModel.h"

@interface UserRequest (Create)

+ (instancetype)initWithModel:(FRRequestsUser*)model inContext:(NSManagedObjectContext *)context;

@end
