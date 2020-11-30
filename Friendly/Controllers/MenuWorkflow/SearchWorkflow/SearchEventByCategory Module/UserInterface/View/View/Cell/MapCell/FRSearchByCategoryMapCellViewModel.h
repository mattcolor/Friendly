//
//  FRSearchByCategoryMapCellViewModel.h
//  Friendly
//
//  Created by Matthew James on 26.04.16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//

#import "FREventModel.h"

@protocol FRSearchByCategoryMapCellViewModelDelegate <NSObject>

- (void)selectedShowFullScreen;
- (void)showEventPreviewWithEvent:(FREvent *)event;
- (void)showUserProfile:(UserEntity*)user;

@end

@interface FRSearchByCategoryMapCellViewModel : NSObject

@property (nonatomic, weak) id<FRSearchByCategoryMapCellViewModelDelegate> delegate;
@property (nonatomic, assign) BOOL isSelected;
@property (nonatomic, strong) NSArray* markersArray;
@property (nonatomic, strong) NSArray* events;

- (CGFloat)heightCell;
- (void)pressShowFullScreen:(BOOL)isSelected;
- (void)showEventPreviewWithEvent:(FREvent*)event;
- (void)showUserProfile:(UserEntity*)user;

@end
