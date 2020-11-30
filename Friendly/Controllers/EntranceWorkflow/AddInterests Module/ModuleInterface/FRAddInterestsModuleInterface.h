//
//  FRAddInterestsInteractor.h
//  Friendly
//
//  Created by Matthew James on 3.03.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

@protocol FRAddInterestsModuleInterface <NSObject>

- (void)backSelected;
- (void)continueSelected;
- (void)addTagSelected:(NSString*)tag;

@end
