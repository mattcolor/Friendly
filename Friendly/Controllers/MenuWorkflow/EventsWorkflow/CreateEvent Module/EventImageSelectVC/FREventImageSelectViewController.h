//
//  FREventImageSelectViewController.h
//  Friendly
//
//  Created by Zaslavskaya Yevheniya on 17.05.16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//

#import "WhiteHeaderVC.h"

@interface FREventImageSelectViewController : WhiteHeaderVC

@property (strong, nonatomic) UILabel* selectLabel;
@property (strong, nonatomic) UICollectionView* collectionView;
@property (strong, nonatomic) UIButton* selectCameraRollButton;

@property (weak, nonatomic) id createPresenter;

@end
