//
//  FRRecomendedUserModel.h
//  Friendly
//
//  Created by Matthew James on 07.03.16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//

#import "FRUserModel.h"

@interface FRRecomendedUserModels : JSONModel

@property (nonatomic, strong) NSArray<Optional, FRUserModel> *recommended_users;

@end
