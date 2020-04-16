//
//  ViewController.m
//  BridgePattern
//
//  Created by wupeng on 2017/3/2.
//  Copyright © 2017年 wupeng. All rights reserved.
//

#import "ViewController.h"
#import "GBAImplementor.h"
#import "GBASystem.h"

#import "PSPImplementor.h"
#import "PSPSystem.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // GBA系统 + GBA执行器
    AbstractSystem *gbaSystem = [[GBASystem alloc] init];
    gbaSystem.implementor     = [[GBAImplementor alloc] init];
    
    [gbaSystem loadSystem];
    [gbaSystem command_up];
    
    // PSP系统 + PSP执行器
    PSPSystem *pspSystem  = [[PSPSystem alloc] init];
    pspSystem.implementor = [[PSPImplementor alloc] init];
    
    [pspSystem loadSystem];
    [pspSystem command_X];

}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
