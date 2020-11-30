//
//  FRPrivateChatInteractor.h
//  Friendly
//
//  Created by Matthew James on 19.05.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

#import "BSTableController.h"

@class FRPrivateChatDataSource;


@interface FRPrivateChatController : BSTableController

- (void)updateDataSource:(FRPrivateChatDataSource*)dataSource;

@end
