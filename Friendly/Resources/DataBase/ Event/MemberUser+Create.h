//
//  MemberUser+Create.h
//  Friendly
//
//  Created by Dmitry on 01.07.16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//

#import "MemberUser.h"
#import "FREventModel.h"

@interface MemberUser (Create)

+ (instancetype)initWithModel:(FRJoinUser*)model inContext:(NSManagedObjectContext*)context;

@end
