//
//  FREventModel.m
//  Friendly
//
//  Created by Matthew James on 11.03.16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//

#import "FREventModel.h"

@implementation FREventModel

@end

@implementation FREventModels

@end

@implementation FRJoinUser

+ (instancetype)initWithPartner:(FRPartnerUser*)partner
{
    FRJoinUser* user = [FRJoinUser new];
    user.photo = partner.photo;
    user.user_id = partner.id;
    user.first_name = partner.first_name;
    
    return user;
}

@end

@implementation FRRequestsUser
@end

@implementation FRPartnerUser
@end

@implementation FRFriendEventsModel
@end

@implementation FREventSearchModels
@end

@implementation FREventRelatedCategoryModel
@end

@implementation FREventSearchEntityModels
@end

@implementation FREventAllDeleteModel
@end

@implementation FREventFeatureModel
@end
