//
//  FRCreateEventInteractor.h
//  Friendly
//
//  Created by Matthew James on 8.03.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

#import "FRCreateEventViewInterface.h"
#import "FRCreateEventModuleInterface.h"
#import "FRBaseVC.h"

@interface FRCreateEventVC : FRBaseVC <FRCreateEventViewInterface>

@property (nonatomic, copy) NSString *eventId;
@property (nonatomic, strong) id<FRCreateEventModuleInterface> eventHandler;

@end
