//
//  AWSS3Manager.h
//  Friendly
//
//  Created by Matthew James on 16.04.2016.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//

@interface AWSS3Manager : NSObject

+ (instancetype) shared;

- (NSUInteger) getTaskCount;

- (void) uploadImageWithPath: (NSURL*) url
               thumbnailPath: (NSURL*) thumbURL
                successBlock: (void (^)(NSString *fileLink, NSString* thumbLink)) successBlock
                failureBlock: (void (^)(NSError* error)) failureBlock;


@end
