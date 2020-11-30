//
//  FRMyProfileStatusInput.h
//  Friendly
//
//  Created by Matthew James on 13.04.16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//

#import "FRVCWithOpacity.h"

@protocol FRUserProfileStatusInputDelegate <NSObject>

- (void)selectedStatus:(NSString*)status userId:(NSString*)userId;

@end

@interface FRUserProfileStatusInput : FRVCWithOpacity

@property (nonatomic, weak) id<FRUserProfileStatusInputDelegate> delegate;
@property (nonatomic, strong) NSString* userId;

@end
