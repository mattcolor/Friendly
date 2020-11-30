//
//  FRMessagerInteractor.h
//  Friendly
//
//  Created by Matthew James on 16.07.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

@class BSMemoryStorage;


@protocol FRMessagerDataSourceDelegate <NSObject>

- (void)selectedChatForRoom:(FRPrivateRoom*)room;
- (void)selectedGroupRoom:(FRGroupRoom*)room;

@end

@interface FRMessagerDataSource : NSObject

@property (nonatomic, strong) BSMemoryStorage* storage;
@property (nonatomic, weak) id<FRMessagerDataSourceDelegate> delegate;

- (void)setupStorage;
- (NSArray*)chatsViewModelFromModels:(NSArray*)models;

@end
