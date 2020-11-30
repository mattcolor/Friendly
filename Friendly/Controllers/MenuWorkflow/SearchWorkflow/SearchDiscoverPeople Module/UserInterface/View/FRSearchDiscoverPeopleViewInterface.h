//
//  FRSearchDiscoverPeopleInteractor.h
//  Friendly
//
//  Created by Matthew James on 19.04.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

@class FRSearchDiscoverPeopleDataSource;

@protocol FRSearchDiscoverPeopleViewInterface <NSObject>

- (void)updateDataSource:(FRSearchDiscoverPeopleDataSource*)dataSource;
- (void)updateSaerchBarText:(NSString*)text;

@end
