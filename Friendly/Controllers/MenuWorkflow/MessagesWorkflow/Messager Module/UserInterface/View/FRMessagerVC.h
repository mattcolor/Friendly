//
//  FRMessagerInteractor.h
//  Friendly
//
//  Created by Matthew James on 16.07.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

#import "FRMessagerViewInterface.h"
#import "FRMessagerModuleInterface.h"
#import "FRBaseVC.h"

@interface FRMessagerVC : FRBaseVC <FRMessagerViewInterface>

@property (nonatomic, strong) id<FRMessagerModuleInterface> eventHandler;

@end
