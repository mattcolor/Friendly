//
//  FRPrivateAccountCellViewModel.h
//  Friendly
//
//  Created by Matthew James on 07.03.16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//

@interface FRPrivateAccountCellViewModel : NSObject

@property (nonatomic, strong) NSString* title;
@property (nonatomic, strong) NSString* subtitle;
@property (nonatomic, assign) BOOL isPrivateAccount;

@property (nonatomic, assign) BOOL isFullSeparator;
@end
