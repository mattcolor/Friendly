//
//  FRChatMessageModelData.h
//  Friendly
//
//  Created by Matthew James on 20.05.16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//


#import "JSQMessages.h"

@interface FRChatMessageModelData : NSObject

@property (strong, nonatomic) NSMutableArray *messages;

@property (strong, nonatomic) JSQMessagesBubbleImage *outgoingBubbleImageData;
@property (strong, nonatomic) JSQMessagesBubbleImage *incomingBubbleImageData;
@property (nonatomic, strong) NSDictionary* avatars;
//- (void)addLocationMediaMessageCompletion:(JSQLocationMediaItemCompletionBlock)completion;


@end
