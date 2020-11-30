//
//  FREventsInteractor.h
//  Friendly
//
//  Created by Matthew James on 29.02.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

#import "FREventsInteractorIO.h"

@interface FREventsInteractor : NSObject <FREventsInteractorInput>

@property (nonatomic, weak) id<FREventsInteractorOutput> output;

@end

