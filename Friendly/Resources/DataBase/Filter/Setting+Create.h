//
//  Setting+Create.h
//  Friendly
//
//  Created by Sergey on 07.08.16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//

#import "Setting.h"
#import "FRSettingModel.h"

@interface Setting (Create)

+ (instancetype)initWithSetting:(FRSettingModel*)setting inContext:(NSManagedObjectContext*) context;

@end
