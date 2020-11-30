//
//  FRCreateEventTextViewCellViewModel.m
//  Friendly
//
//  Created by Matthew James on 09.03.16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//

#import "FRCreateEventTextViewCellViewModel.h"

@implementation FRCreateEventTextViewCellViewModel

- (void)changeText:(NSString*)text
{
    [self.delegate changeTextContent:text type:self.type];
}

@end
