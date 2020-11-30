//
//  FRMyProfileAddMobileAddNumberCell.h
//  Friendly
//
//  Created by User on 23.09.16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol FRMyProfileAddMobileAddNumberCellDelegate <NSObject>

- (void)addNumber:(NSString*)number;

@end

@interface FRMyProfileAddMobileAddNumberCell : UITableViewCell
@property (weak, nonatomic) id<FRMyProfileAddMobileAddNumberCellDelegate> delegate;
@property (nonatomic, strong) UITextField* textField;

@end
