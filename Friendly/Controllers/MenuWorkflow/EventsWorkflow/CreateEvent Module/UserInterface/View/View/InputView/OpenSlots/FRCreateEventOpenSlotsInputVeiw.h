//
//  FRCreateEventOpenSlotsInputVeiw.h
//  Friendly
//
//  Created by Matthew James on 10.03.16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//

#import "FRCreateEventBaseInpute.h"

@protocol FRCreateEventOpenSlotsInputVeiwDelegate <NSObject>

- (void)slotsUpdate:(NSInteger)slots;
- (void)closeSelected;

@end

@interface FRCreateEventOpenSlotsInputVeiw : FRCreateEventBaseInpute


@property (nonatomic, weak) id<FRCreateEventOpenSlotsInputVeiwDelegate>delegate;
- (void)updateUpperValue:(NSInteger)upperValue;

@end
