//
//  FRAddInterestsHeaderView.h
//  Friendly
//
//  Created by Matthew James on 03.05.16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//


@protocol FRAddInterestsHeaderViewDelegate <NSObject>

- (void)addTag:(NSString*)tagString;
- (void)selectedContinue;

@end

@interface FRAddInterestsHeaderView : UITableViewHeaderFooterView

@property (nonatomic, weak) id<FRAddInterestsHeaderViewDelegate> delegate;

@end
