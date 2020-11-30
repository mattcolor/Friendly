//
//  FRCreateEventInteractor.h
//  Friendly
//
//  Created by Matthew James on 8.03.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

#import "FRCreateEventInteractorIO.h"

@interface FRCreateEventInteractor : NSObject <FRCreateEventInteractorInput>

@property (nonatomic, weak) id<FRCreateEventInteractorOutput> output;

@end

