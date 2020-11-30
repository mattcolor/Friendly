//
//  FREventCollectionCellFooterViewModel.h
//  Friendly
//
//  Created by Matthew James on 14.03.16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//

@class FREvent;

@interface FREventCollectionCellFooterViewModel : NSObject

+ (instancetype)initWithModel:(FREvent*)eventModel;

@property (nonatomic, strong) NSArray* users;
@property (nonatomic, assign) NSInteger openSlots;
@property (nonatomic, strong) NSString* dayOfWeak;
@property (nonatomic, strong) NSString* dayOfMonth;

@end
