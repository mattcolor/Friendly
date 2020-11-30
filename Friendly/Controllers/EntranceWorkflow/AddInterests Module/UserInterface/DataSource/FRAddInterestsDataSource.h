//
//  FRAddInterestsInteractor.h
//  Friendly
//
//  Created by Matthew James on 3.03.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

@class BSMemoryStorage;
@class FRInterestsModels, FRInterestsModel;

@protocol FRAddInterestsDataSourceDelegate <NSObject>

- (void)selectedInterest:(FRInterestsModel*)interest;

@end

@interface FRAddInterestsDataSource : NSObject

@property (nonatomic, strong) BSMemoryStorage* storage;
@property (nonatomic, weak) id<FRAddInterestsDataSourceDelegate> delegate;

- (void)setupStorageWithModel:(FRInterestsModels*)model;
- (void)addInterests:(FRInterestsModel*)interest;

@end
