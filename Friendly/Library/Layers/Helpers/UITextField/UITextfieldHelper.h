//
//  UITextfieldHelper.h
//  Friendly
//
//  Created by Matthew James on 30.03.16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//


@interface UITextfieldHelper : NSObject

+ (NSString*) formatPhoneNumber:(NSString*) simpleNumber deleteLastChar:(BOOL)deleteLastChar;

@end
