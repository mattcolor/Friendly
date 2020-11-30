//
//  FRMyProfileUserBioCellViewModel.h
//  Friendly
//
//  Created by Matthew James on 21.03.16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//


@interface FRMyProfileUserBioCellViewModel : NSObject

@property (nonatomic, strong) NSString* content;
@property (nonatomic, assign, readonly) CGFloat heightCell;

- (NSAttributedString*)attributedString;

@end
