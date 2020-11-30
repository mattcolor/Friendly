//
//  FRProfilePolishHeaderCellViewModel.m
//  Friendly
//
//  Created by Matthew James on 06.04.16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//

#import "FRProfilePolishHeaderCellViewModel.h"
#import "UIImageView+WebCache.h"
#import "FRUserManager.h"


@implementation FRProfilePolishHeaderCellViewModel

- (void)updateUserPhoto:(UIImageView*)imageView
{
    NSURL* userPhotoURL = [[NSURL alloc]initWithString:[NSObject bs_safeString:self.photoUrl]];
    
    [imageView sd_setImageWithURL:userPhotoURL completed:^(UIImage *image, NSError *error, SDImageCacheType cacheType, NSURL *imageURL) {
        imageView.image = image;
    }];
}

- (void)selectedChangePhoto
{
    [self.delegate selectedChangePhoto];
}

- (void)selectedBack
{
    [self.delegate selectedBack];
}


@end
