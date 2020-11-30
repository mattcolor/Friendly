//
//  FRSearchDiscoverPeopleInteractor.h
//  Friendly
//
//  Created by Matthew James on 19.04.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

#import "FRSearchDiscoverPeopleViewInterface.h"
#import "FRSearchDiscoverPeopleModuleInterface.h"
#import "FRBaseVC.h"

@interface FRSearchDiscoverPeopleVC : FRBaseVC <FRSearchDiscoverPeopleViewInterface>

@property (nonatomic, strong) id<FRSearchDiscoverPeopleModuleInterface> eventHandler;

@end
