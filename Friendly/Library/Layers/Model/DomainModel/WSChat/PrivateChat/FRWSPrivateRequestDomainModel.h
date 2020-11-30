//
//  FRWSPrivateRequestDomainModel.h
//  Friendly
//
//  Created by Matthew James on 17.05.16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//

@class FRPrivateMessage;

#import "FRWebSocketConstants.h"
#import "FRBaseDomainModel.h"

@interface FRWSPrivateRequestDomainModel : FRBaseDomainModel

@property (nonatomic, assign) FRWSMessageType messageType;
@property (nonatomic, strong) NSString* tempId;
@property (nonatomic, strong) NSString* userId;
@property (nonatomic, strong) NSString* messageText;
@property (nonatomic, assign) FRMessageStatus messageStatus;
@property (nonatomic, strong) NSString* room_id;

+ (instancetype)initWithModel:(FRPrivateMessage*)model;

@end



