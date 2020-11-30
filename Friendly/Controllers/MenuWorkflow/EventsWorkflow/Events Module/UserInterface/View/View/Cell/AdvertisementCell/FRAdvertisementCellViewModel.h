//
//  FRAdvertisementCellViewModel.h
//  Friendly
//
//  Created by Matthew James on 29.04.16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//

@class FRAdvertisementCellViewModel;

@protocol FRAdvertisementCellViewModelDelegate <NSObject>

- (void)advertisementReloadData:(FRAdvertisementCellViewModel*)item;

@end

@interface FRAdvertisementCellViewModel : NSObject

@property (nonatomic, weak) id<FRAdvertisementCellViewModelDelegate> delegate;
@property (nonatomic, assign) CGFloat height;
@property (nonatomic, assign) BOOL isShowAdvertisement;


@end
