//
//  FREditProfileInteractor.h
//  Friendly
//
//  Created by Matthew James on 17.03.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

#import "FREditProfileInteractorIO.h"

@interface FREditProfileInteractor : NSObject <FREditProfileInteractorInput>

@property (nonatomic, weak) id<FREditProfileInteractorOutput> output;

@end

