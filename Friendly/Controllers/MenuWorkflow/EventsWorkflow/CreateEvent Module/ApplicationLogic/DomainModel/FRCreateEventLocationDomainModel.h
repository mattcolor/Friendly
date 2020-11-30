//
//  FRCreateEventLocationDomainModel.h
//  Friendly
//
//  Created by Matthew James on 17.04.16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//


@interface FRCreateEventLocationDomainModel : NSObject

@property (nonatomic, strong) UIImage* locationPhoto;
@property (nonatomic, assign) CLLocationCoordinate2D coordinate;
@property (nonatomic, strong) NSString* placeName;


@end
