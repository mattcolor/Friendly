//
//  FREventsHeaderViewModel.h
//  Friendly
//
//  Created by Matthew James on 12.04.16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//


@protocol FREventsHeaderViewModelDelegate <NSObject>

- (void)showShowUserProfileSelected;
- (void)showFilterSelected;

@end

@interface FREventsHeaderViewModel : NSObject

@property (nonatomic, strong) NSString* photoUrl;
@property (nonatomic, strong) NSString* searchContent;
@property (nonatomic, weak) id<FREventsHeaderViewModelDelegate> delegate;
- (void)showUserProfileSelected;
- (void)showFilter;

@end
