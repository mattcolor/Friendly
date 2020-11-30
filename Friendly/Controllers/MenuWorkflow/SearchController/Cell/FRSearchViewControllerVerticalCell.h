//
//  FRSearchViewControllerVerticalCell.h
//  Friendly
//
//  Created by Jane Doe on 4/21/16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//


@protocol FRSearchViewControllerVerticalCellDelegate <NSObject>

- (void)selectedCategory:(NSString*)category;

@end

@interface FRSearchViewControllerVerticalCell : UITableViewCell

@property (nonatomic, weak) id<FRSearchViewControllerVerticalCellDelegate> delegate;

@end
