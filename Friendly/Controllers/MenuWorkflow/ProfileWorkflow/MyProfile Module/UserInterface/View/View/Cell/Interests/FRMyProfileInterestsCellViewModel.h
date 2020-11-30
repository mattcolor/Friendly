//
//  FRMyProfileInterestsCellViewModel.h
//  Friendly
//
//  Created by Matthew James on 26.03.16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//


@interface FRMyProfileInterestsCellViewModel : NSObject

@property (nonatomic, strong) NSString* title;
@property (nonatomic, assign, readonly) CGFloat height;
@property (nonatomic, strong) NSArray* tags;

@end
