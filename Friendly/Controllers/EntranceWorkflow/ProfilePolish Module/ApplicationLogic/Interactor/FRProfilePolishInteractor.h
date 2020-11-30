//
//  FRProfilePolishInteractor.h
//  Friendly
//
//  Created by Matthew James on 3.03.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

#import "FRProfilePolishInteractorIO.h"

@interface FRProfilePolishInteractor : NSObject <FRProfilePolishInteractorInput>

@property (nonatomic, weak) id<FRProfilePolishInteractorOutput> output;

@end

