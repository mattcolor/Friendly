//
//  FRMessagesSegment.h
//  Friendly
//
//  Created by Matthew James on 19.05.16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//


typedef NS_ENUM(NSInteger, FRMessagesSegmentType) {
    FRMessagesSegmentTypeMessages = 0,
    FRMessagesSegmentTypeFriends,
};


@protocol FRMessagesSegmentDelegate <NSObject>

- (void)selectedSegmentIndex:(FRMessagesSegmentType)index;

@end

@interface FRMessagesSegment : UIView

@property (nonatomic, weak) id<FRMessagesSegmentDelegate> delegate;

@end
