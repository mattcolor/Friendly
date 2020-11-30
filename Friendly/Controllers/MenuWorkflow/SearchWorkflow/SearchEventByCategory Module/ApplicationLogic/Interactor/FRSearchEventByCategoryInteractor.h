//
//  FRSearchEventByCategoryInteractor.h
//  Friendly
//
//  Created by Matthew James on 24.04.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

#import "FRSearchEventByCategoryInteractorIO.h"

@interface FRSearchEventByCategoryInteractor : NSObject <FRSearchEventByCategoryInteractorInput>

@property (nonatomic, weak) id<FRSearchEventByCategoryInteractorOutput> output;

@end

