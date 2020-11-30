//
//  FRFriendsCell.h
//  Friendly
//
//  Created by Jane Doe on 4/28/16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//

#import "BSBaseTableViewCell.h"
#import "FRFriendsTransport.h"
#import "FRFriendsCellViewModel.h"

@interface FRFriendsCell : BSBaseTableViewCell

- (void)updateWithModel:(FRFriendsCellViewModel*)model;

@end
