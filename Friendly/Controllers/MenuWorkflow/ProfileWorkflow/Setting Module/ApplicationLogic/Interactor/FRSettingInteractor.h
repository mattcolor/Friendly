//
//  FRSettingInteractor.h
//  Friendly
//
//  Created by Matthew James on 25.03.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

#import "FRSettingInteractorIO.h"

@interface FRSettingInteractor : NSObject <FRSettingInteractorInput>

@property (nonatomic, weak) id<FRSettingInteractorOutput> output;

+ (void)logOut:(BSCodeBlock)logout;

@end

