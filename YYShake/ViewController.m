//
//  ViewController.m
//  YYShake
//
//  Created by caiyanying on 16/12/20.
//  Copyright © 2016年 youruogege. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    [self setupUI];
}

-(void)setupUI{
    self.view.backgroundColor = [UIColor whiteColor];
    YRShareView *shareView = [[YRShareView alloc]initWithFrame:CGRectMake(0, 0, kScreenW, kScreenH)];
    [self.view addSubview:shareView];
    shareView.backgroundColor = [UIColor whiteColor];
    
}
- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
