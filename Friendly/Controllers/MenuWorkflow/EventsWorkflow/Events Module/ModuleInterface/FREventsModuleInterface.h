//
//  FREventsInteractor.h
//  Friendly
//
//  Created by Matthew James on 29.02.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

@class FREventModel;

@protocol FREventsModuleInterface <NSObject>

- (void)backSelected;
- (void)showProfileVC;
- (void)showFilter;
- (void)selectedEvent:(FREventModel*)event image:(UIImage*)eventImage;
- (void)updateEvents;
- (void)selectedSegment:(NSInteger)segment;


@end
