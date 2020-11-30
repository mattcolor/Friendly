//
//  FReventPreviewCategoryCellViewModel.m
//  Friendly
//
//  Created by Jane Doe on 3/11/16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//

#import "FREventPreviewCategoryCellViewModel.h"
#import "FREvent.h"

@implementation FREventPreviewCategoryCellViewModel

+ (instancetype) initWithModel:(FREvent*)model
{
    FREventPreviewCategoryCellViewModel* viewModel = [FREventPreviewCategoryCellViewModel new];
    viewModel.category = model.category;
    return viewModel;
}

@end
