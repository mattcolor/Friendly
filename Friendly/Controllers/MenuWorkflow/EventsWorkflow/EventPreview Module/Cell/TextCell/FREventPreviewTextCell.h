//
//  FRTextTableViewCell.h
//  Friendly
//
//  Created by Zaslavskaya Yevheniya on 10.03.16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FREventModel.h"
#import "FREventPreviewTextCellViewModel.h"

@interface FREventPreviewTextCell : UITableViewCell

- (void) updateWithModel:(FREventPreviewTextCellViewModel*)model;


@end
