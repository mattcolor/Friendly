//
//  FRHomeScreenInteractor.h
//  Friendly
//
//  Created by Matthew James on 29.02.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

#import "FRHomeScreenController.h"
#import "FRHomeScreenDataSource.h"

@implementation FRHomeScreenController

- (instancetype)initWithTableView:(UITableView *)tableView
{
    self = [super initWithTableView:tableView];
    if (self)
    {
      //  [self registerCellClass:[FRCell class] forModelClass:[FRCellViewModel class]];
    }
    return self;
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    [tableView deselectRowAtIndexPath:indexPath animated:YES];
}

- (void)updateDataSource:(FRHomeScreenDataSource *)dataSource
{
    self.storage = dataSource.storage;
}

@end
