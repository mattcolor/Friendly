//
//  FREventsInteractor.h
//  Friendly
//
//  Created by Matthew James on 29.02.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

#import "FREventsViewInterface.h"
#import "FREventsModuleInterface.h"
#import "FRBaseVC.h"

@interface FREventsVC : FRBaseVC <FREventsViewInterface>

@property (nonatomic, strong) id<FREventsModuleInterface> eventHandler;

@end
