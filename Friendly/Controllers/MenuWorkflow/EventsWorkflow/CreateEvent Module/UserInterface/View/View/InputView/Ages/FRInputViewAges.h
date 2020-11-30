//
//  FRInputViewAges.h
//  Friendly
//
//  Created by Matthew James on 10.03.16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//

#import "FRCreateEventBaseInpute.h"

@protocol FRInputViewAgesDelegate <NSObject>

- (void)updateAgesMin:(NSInteger)min max:(NSInteger)max;
- (void)selectedWrongRange;
- (void)closeSelected;

@end

@interface FRInputViewAges : FRCreateEventBaseInpute

@property (nonatomic, weak) id<FRInputViewAgesDelegate>delegate;

- (void)setAgeMin:(CGFloat)min max:(CGFloat)max;

@end
