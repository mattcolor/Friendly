//
//  FREventFilterInteractor.h
//  Friendly
//
//  Created by Matthew James on 21.04.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

#import "FREventFilterInteractorIO.h"

@interface FREventFilterInteractor : NSObject <FREventFilterInteractorInput>

@property (nonatomic, weak) id<FREventFilterInteractorOutput> output;

@end

