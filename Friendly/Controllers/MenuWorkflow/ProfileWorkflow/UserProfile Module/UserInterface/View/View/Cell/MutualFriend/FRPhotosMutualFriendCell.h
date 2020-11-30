//
//  FRPhotosMutualFriendCell.h
//  Friendly
//
//  Created by Matthew James on 31.03.16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//

#import "BSBaseTableViewCell.h"
#import "FRPhotosMutualFriendCellViewModel.h"

@interface FRPhotosMutualFriendCell : BSBaseTableViewCell

- (void)updateWithModel:(FRPhotosMutualFriendCellViewModel*)model;

@end
