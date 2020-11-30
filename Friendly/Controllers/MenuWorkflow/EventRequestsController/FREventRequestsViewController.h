//
//  EventRequestsViewController.h
//  Friendly
//
//  Created by Jane Doe on 4/4/16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//

#import "WhiteHeaderVC.h"

@protocol FREventRequestsViewControllerDelegate <NSObject>

-(void)updateData;

@end

@interface FREventRequestsViewController : WhiteHeaderVC

//-(NSInteger)getRequestsCount;
@property (weak, nonatomic) id<FREventRequestsViewControllerDelegate> delegate;

@end
