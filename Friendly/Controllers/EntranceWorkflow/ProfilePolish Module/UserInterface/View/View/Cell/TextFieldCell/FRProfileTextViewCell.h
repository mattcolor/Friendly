//
//  FRProfileTextFieldCell.h
//  Friendly
//
//  Created by Matthew James on 07.03.16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//

#import "BSBaseTableViewCell.h"
#import "FRProfileTextViewCellViewModel.h"

@protocol FRProfileTextViewCellDelegate <NSObject>

- (void)textChangeWithCell:(UITableViewCell*)cell;
- (void)textEditing:(UITableViewCell*)cell :(UITextView *)textView;

@end

@interface FRProfileTextViewCell : BSBaseTableViewCell

@property (nonatomic, weak) id<FRProfileTextViewCellDelegate> delegate;

@end
