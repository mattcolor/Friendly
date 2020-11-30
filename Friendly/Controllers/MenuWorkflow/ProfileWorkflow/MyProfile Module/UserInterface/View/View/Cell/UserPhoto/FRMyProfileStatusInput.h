//
//  FRMyProfileStatusInput.h
//  Friendly
//
//  Created by Matthew James on 13.04.16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//

#import "FRVCWithOpacity.h"

@protocol FRMyProfileStatusInputDelegate <NSObject>

- (void)selectedStatus:(NSString*)status;

@end

@interface FRMyProfileStatusInput : FRVCWithOpacity

@property (nonatomic, weak) id<FRMyProfileStatusInputDelegate> delegate;

@end
