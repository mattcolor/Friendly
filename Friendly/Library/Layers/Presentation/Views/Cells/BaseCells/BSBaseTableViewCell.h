//
//  BSBaseTableViewCell.h
//  Friendly
//
//  Created by Matthew James on 26.02.2016.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//

@protocol BSModelTransfer <NSObject>

@required

- (void)updateWithModel:(id)model;

@optional

- (id)model;

@end

@interface BSBaseTableViewCell : UITableViewCell <BSModelTransfer>

@end
