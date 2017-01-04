//
//  YRFocusModel.h
//  YYShake
//
//  Created by caiyanying on 17/1/4.
//  Copyright © 2017年 youruogege. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface YYFocusDataMode : NSObject

@property (nonatomic,copy) NSString *focusImage;
@property (nonatomic,copy) NSString *title;
@property (nonatomic,copy) NSString *tplName;

@end

@interface YYFocusModel : NSObject

@property (nonatomic,strong) NSArray *data;
@property (nonatomic,strong) NSNumber *isLogin;
@property (nonatomic,copy) NSString *msg;
@property (nonatomic,strong) NSNumber *status;

@end
