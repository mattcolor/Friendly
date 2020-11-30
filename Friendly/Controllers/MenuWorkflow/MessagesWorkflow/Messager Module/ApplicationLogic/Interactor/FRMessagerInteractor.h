//
//  FRMessagerInteractor.h
//  Friendly
//
//  Created by Matthew James on 16.07.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

#import "FRMessagerInteractorIO.h"

@interface FRMessagerInteractor : NSObject <FRMessagerInteractorInput>

@property (nonatomic, weak) id<FRMessagerInteractorOutput> output;

@end

