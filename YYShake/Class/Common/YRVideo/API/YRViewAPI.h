//
//  YRViewAPI.h
//  YYShake
//
//  Created by caiyanying on 17/1/4.
//  Copyright © 2017年 youruogege. All rights reserved.
//

#import <YTKNetwork/YTKNetwork.h>

@interface YRViewAPI : YTKRequest

-(id)initwithImage:(UIImage *)image;

-(NSString *)responseImageId;

@end
