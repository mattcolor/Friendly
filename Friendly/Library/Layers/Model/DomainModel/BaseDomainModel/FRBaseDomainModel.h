//
//  FRBaseDomainModel.h
//  Friendly
//
//  Created by Matthew James on 26.02.2016.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//

@protocol FRBaseDomainModelTransfer <NSObject>

- (NSDictionary*)domainModelDictionary;
- (NSString*)getJSONString;

@end

@interface FRBaseDomainModel : NSObject <FRBaseDomainModelTransfer>

@end
