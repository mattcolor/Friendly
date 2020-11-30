//
//  FRPrivateRoomChatInteractor.h
//  Friendly
//
//  Created by Matthew James on 17.07.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

#import "FRPrivateRoomChatController.h"
#import "FRPrivateRoomChatDataSource.h"

@implementation FRPrivateRoomChatController

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

- (void)updateDataSource:(FRPrivateRoomChatDataSource *)dataSource
{
    self.storage = dataSource.storage;
}

@end
