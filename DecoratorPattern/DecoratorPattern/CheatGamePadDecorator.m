//
//  CheatGamePadDecorator.m
//  DecoratorPattern
//
//  Created by wupeng on 2017/2/28.
//  Copyright © 2017年 wupeng. All rights reserved.
//

#import "CheatGamePadDecorator.h"

@implementation CheatGamePadDecorator

- (void)cheat {
    
    [self up];
    [self down];
    [self up];
    [self down];
    [self left];
    [self right];
    [self left];
    [self right];
    [self commandA];
    [self commandB];
    [self commandA];
    [self commandB];
}


@end
