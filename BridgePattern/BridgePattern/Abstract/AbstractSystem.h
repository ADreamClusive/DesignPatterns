//
//  AbstractSystem.h
//  BridgePattern
//
//  Created by wupeng on 2017/3/2.
//  Copyright © 2017年 wupeng. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AbstractImplementor.h"

@interface AbstractSystem : NSObject

//执行者
@property (nonatomic, strong) AbstractImplementor  *implementor;

//加载系统
- (void)loadSystem;

//上下左右ab - 按钮
- (void)command_up;
- (void)command_down;
- (void)command_left;
- (void)command_right;
- (void)command_a;
- (void)command_b;

@end
