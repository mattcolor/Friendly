//
//  FRMyProfileStatusInputView.h
//  Friendly
//
//  Created by Matthew James on 25.03.16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//

#import "FRCreateEventBaseInpute.h"

@protocol FRUserProfileStatusInputViewDelegate <NSObject>

- (void)selectedStatus:(NSString*)status;
//- (void)close;


@end

@interface FRUserProfileStatusInputView : UIView

@property (nonatomic, weak) id<FRUserProfileStatusInputViewDelegate> delegate;
@property (nonatomic, strong) UIButton* removeUserButton;
-(void)updateButtons;

@end
