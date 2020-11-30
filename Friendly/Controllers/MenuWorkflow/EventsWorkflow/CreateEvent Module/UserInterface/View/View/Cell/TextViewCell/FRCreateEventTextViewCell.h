//
//  FRCreateEventTextViewCell.h
//  Friendly
//
//  Created by Matthew James on 09.03.16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//

#import "BSBaseTableViewCell.h"
#import "FRCreateEventTextViewCellViewModel.h"

@class FRCreateEventTextViewCell;

@protocol FRCreateEventTextViewCellDelegate <NSObject>

- (void)textEditing:(UITableViewCell*)cell;

@end

@interface FRCreateEventTextViewCell : BSBaseTableViewCell

@property (nonatomic, weak) id<FRCreateEventTextViewCellDelegate> delegate;

@end
