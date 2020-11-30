//
//  FRPrivateChatInteractor.h
//  Friendly
//
//  Created by Matthew James on 19.05.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

@protocol FRPrivateChatModuleInterface <NSObject>

- (void)backSelected;
- (void)sendMessage:(NSString*)text;
- (void)showUserProfile;
- (void)shareLocation;
- (void)showEventWithID:(NSString*)eventId;
- (void)showEvent;
- (void)showUserProfileWithId:(NSString*)userId;
- (JSQMessage*)createJSQMessage:(FRBaseMessage*)message;
- (void)loadOldMessageWithCount:(NSInteger)count;
- (void)leaveEvent;
- (void)deleteEvent;

@end
