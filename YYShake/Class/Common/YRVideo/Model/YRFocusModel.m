//
//  YRFocusModel.m
//  YYShake
//
//  Created by caiyanying on 17/1/4.
//  Copyright © 2017年 youruogege. All rights reserved.
//

#import "YRFocusModel.h"

@implementation YYFocusDataMode

@end

@implementation YYFocusModel

+ (NSDictionary *)modelContainerPropertyGenericClass {
    return @{@"data" : [YYFocusDataMode class]};
}
@end
