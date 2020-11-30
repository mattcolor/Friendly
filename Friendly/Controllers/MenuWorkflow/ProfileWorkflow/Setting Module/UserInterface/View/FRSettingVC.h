//
//  FRSettingInteractor.h
//  Friendly
//
//  Created by Matthew James on 25.03.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

#import "FRSettingViewInterface.h"
#import "FRSettingModuleInterface.h"
#import "FRBaseVC.h"

@interface FRSettingVC : FRBaseVC <FRSettingViewInterface>

@property (nonatomic, strong) id<FRSettingModuleInterface> eventHandler;

@end
