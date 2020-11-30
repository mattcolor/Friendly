//
//  FRSearchEventByCategoryInteractor.h
//  Friendly
//
//  Created by Matthew James on 24.04.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

@class FRSearchEventByCategoryDataSource;

@protocol FRSearchEventByCategoryViewInterface <NSObject>

- (void)updateSaerchBarText:(NSString*)text;
- (void)updateDataSource:(FRSearchEventByCategoryDataSource*)dataSource;
- (UITableView*)tableView;
@end
