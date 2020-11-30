//
//  FRSearchEventByCategoryInteractor.h
//  Friendly
//
//  Created by Matthew James on 24.04.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

#import "FRSearchEventByCategoryViewInterface.h"
#import "FRSearchEventByCategoryModuleInterface.h"
#import "FRBaseVC.h"

@interface FRSearchEventByCategoryVC : FRBaseVC <FRSearchEventByCategoryViewInterface>

@property (nonatomic, strong) id<FRSearchEventByCategoryModuleInterface> eventHandler;
- (UITableView*)tableView;

@end
