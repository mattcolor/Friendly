//
//  FRRecommendedUsersInteractor.h
//  Friendly
//
//  Created by Matthew James on 3.03.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

#import "FRRecommendedUsersInteractorIO.h"

@interface FRRecommendedUsersInteractor : NSObject <FRRecommendedUsersInteractorInput>

@property (nonatomic, weak) id<FRRecommendedUsersInteractorOutput> output;

@end

