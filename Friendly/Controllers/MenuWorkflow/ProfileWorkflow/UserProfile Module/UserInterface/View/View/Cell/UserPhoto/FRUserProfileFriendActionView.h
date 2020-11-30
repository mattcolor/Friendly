//
//  FRUserProfileFriendActionView.h
//  Friendly
//
//  Created by Matthew James on 31.03.16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//


typedef NS_ENUM(NSInteger, FRFriendActionMode) {
    FRFriendActionModeAddFriend,
    FRFriendActionModePending,
    FRFriendActionModeFriend,
};

@protocol FRUserProfileFriendActionViewDelegate <NSObject>

- (void)pendingSelected;
- (void)addFriendSelected;
- (void)inviteToEventSelected;
- (void)friendsSelected;


@end


@interface FRUserProfileFriendActionView : UIView

@property (nonatomic, weak) id<FRUserProfileFriendActionViewDelegate>delegate;

- (void)setMode:(FRFriendActionMode)mode;



@end
