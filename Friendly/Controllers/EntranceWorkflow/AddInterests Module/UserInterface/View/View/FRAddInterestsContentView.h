//
//  FRAddInterestsContentView.h
//  Friendly
//
//  Created by Matthew James on 02.03.16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//

@class FRFooterQuestionairView, FRHeaderQuestionairView;

@protocol FRAddInterestsContentViewDelegate <NSObject>

- (void)addTag:(NSString*)tag;

@end

@interface FRAddInterestsContentView : UIView

@property (nonatomic, strong) UITableView* tableView;
@property (nonatomic, strong) FRFooterQuestionairView* footerView;
@property (nonatomic, weak) id<FRAddInterestsContentViewDelegate> delegate;

@end
