//
//  FRPlaceDomainModel.h
//  Friendly
//
//  Created by Matthew James on 07.04.16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//

#import "FRBaseDomainModel.h"

@interface FRPlaceDomainModel : FRBaseDomainModel


@property (nonatomic, strong) NSString* name;
@property (nonatomic, strong) NSString* address;
@property (nonatomic, strong) NSString* google_place_id;


@end
