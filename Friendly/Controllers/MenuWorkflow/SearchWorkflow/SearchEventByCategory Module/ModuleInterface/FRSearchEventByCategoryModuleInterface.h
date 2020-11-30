//
//  FRSearchEventByCategoryInteractor.h
//  Friendly
//
//  Created by Matthew James on 24.04.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

@class FREventModel;

@protocol FRSearchEventByCategoryModuleInterface <NSObject>

- (void)backSelected;

- (void)selectedDiscoverPeople;
- (void)selectedEvent:(FREvent*)event fromFrame:(CGRect)fram;
- (void)selectedDiscoverPeopleWithTag:(NSString*)tag;
- (void)selectedEvent:(FREvent*)event;
- (void)searchBar:(NSString*)string;

@end
