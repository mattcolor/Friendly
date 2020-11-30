//
//  FRUserProfileInteractor.h
//  Friendly
//
//  Created by Matthew James on 28.03.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

#import "FRUserProfileInteractorIO.h"

@interface FRUserProfileInteractor : NSObject <FRUserProfileInteractorInput>

@property (nonatomic, weak) id<FRUserProfileInteractorOutput> output;
@property (nonatomic, strong) FRUserModel* userProfile;
@property (nonatomic, strong) UserEntity* user;


@end

