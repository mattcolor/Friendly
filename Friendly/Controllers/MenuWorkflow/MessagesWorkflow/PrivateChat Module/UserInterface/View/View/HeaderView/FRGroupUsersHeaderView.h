//
//  FRGroupUsersHeaderView.h
//  Friendly
//
//  Created by Dmitry on 04.06.16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//

#import "FRGroupUsersHeaderViewModel.h"

@protocol FRGroupUsersHeaderViewDelegate <NSObject>

- (void)selectedUserId:(NSString*)userId;

@end

@interface FRGroupUsersHeaderView : UICollectionReusableView
@property (nonatomic, weak) id<FRGroupUsersHeaderViewDelegate> delegate;
- (void)updateWithModel:(FRGroupUsersHeaderViewModel*)model;

@end
