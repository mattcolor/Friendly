//
//  FRWebSocketTransport.m
//  Friendly
//
//  Created by Matthew James on 17.05.16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//

#import "FRWebSocketTransport.h"
#import "FRWSPrivateRequestDomainModel.h"
#import "FRWebSoketManager.h"

@implementation FRWebSocketTransport


+ (void)sendMessage:(NSString*)message
{
    [[FRWebSoketManager shared] sendMessage:message];
}

@end
