//
//  FRPhotosCollectionVeiwCell.h
//  Friendly
//
//  Created by Matthew James on 31.03.16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//

@class InstagramImage;

@interface FRPhotosCollectionVeiwCell : UICollectionViewCell

- (void)updateWIthPhotosUrl:(InstagramImage*)photosUrl;
- (void)updateLastItem;
@property (nonatomic, strong) UIImageView* image;

@end
