//
//  FRLocalizationSystem.h
//  Friendly
//
//  Created by Matthew James on 26.02.2016.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//


@interface FRLocalizationSystem : NSObject

+ (FRLocalizationSystem *)sharedLocalizationSystem;
- (NSString *) localizedStringForKey:(NSString *)key value:(NSString *)comment;
- (void) setLanguage:(NSString *) language;
- (NSString *) getLanguage;

@end
