//
//  FRMessagesPrivateRoomCellViewModel.h
//  Friendly
//
//  Created by Matthew James on 19.05.16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//

@class FRPrivateRoom;

@protocol FRMessagesPrivateRoomCellViewModelDelegate <NSObject>

- (void)selectedRoom:(FRPrivateRoom*)room;

@end

@interface FRMessagesPrivateRoomCellViewModel : NSObject

+ (instancetype)initWithModel:(FRPrivateRoom*)model;

@property (nonatomic, weak) id<FRMessagesPrivateRoomCellViewModelDelegate> delegate;

@property (nonatomic, strong) NSString* name;
@property (nonatomic, strong) NSString* lastMessage;
@property (nonatomic, strong) NSString* date;
@property (nonatomic, assign) BOOL isNewMessage;

- (void)updatePhoto:(UIImageView*)imageView;
- (void)selectedRoom;

@end
