//
//  PREventPreviewTextCellViewModel.h
//  Friendly
//
//  Created by Jane Doe on 3/11/16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FREvent.h"


@interface FREventPreviewTextCellViewModel : NSObject

+ (instancetype) initWithModel:(FREvent*)model;

@property (strong, nonatomic) NSString* infoText;

@end
