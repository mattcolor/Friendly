//
//  FRJoinUserCollectionCell.h
//  Friendly
//
//  Created by Matthew James on 16.03.16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//

#import "FREventModel.h"

@interface FRJoinUserCollectionCell : UICollectionViewCell

- (void)updateWithModel:(FRJoinUser*)model;

@end


@interface FRJoinUserEmptyCollectionCell : UICollectionViewCell

- (void)updateWithCount:(NSInteger)count;

@end
