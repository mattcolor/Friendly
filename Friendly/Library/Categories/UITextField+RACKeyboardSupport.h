//
//  UITextField+RACKeyboardSupport.h
//  Friendly
//
//  Created by Matthew James on 26.02.2016.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//

@interface UITextField (RACKeyboardSupport)

- (RACSignal *)rac_keyboardReturnSignal;

@end
