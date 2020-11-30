//
//  FRSearchDiscoverPeopleInteractor.h
//  Friendly
//
//  Created by Matthew James on 19.04.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

#import "FRSearchDiscoverPeopleInteractorIO.h"

@interface FRSearchDiscoverPeopleInteractor : NSObject <FRSearchDiscoverPeopleInteractorInput>

@property (nonatomic, weak) id<FRSearchDiscoverPeopleInteractorOutput> output;

@end

