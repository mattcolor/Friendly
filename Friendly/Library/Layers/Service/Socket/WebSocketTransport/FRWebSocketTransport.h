//
//  FRWebSocketTransport.h
//  Friendly
//
//  Created by Matthew James on 17.05.16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//

#import "FRBaseDomainModel.h"

@interface FRWebSocketTransport : FRBaseDomainModel

+ (void)sendMessage:(NSString*)message;

@end
