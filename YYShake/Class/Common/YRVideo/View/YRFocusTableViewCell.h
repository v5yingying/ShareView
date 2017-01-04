//
//  YRFocusTableViewCell.h
//  YYShake
//
//  Created by caiyanying on 17/1/4.
//  Copyright © 2017年 youruogege. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <SDCycleScrollView.h>
#import "YRFocusModel.h"

@interface YRFocusTableViewCell : UITableViewCell<SDCycleScrollViewDelegate>
@property (nonatomic,strong) YYFocusModel *model;

@end
