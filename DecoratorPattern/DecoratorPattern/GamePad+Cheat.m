//
//  GamePad+Cheat.m
//  DecoratorPattern
//
//  Created by wupeng on 2017/2/28.
//  Copyright © 2017年 wupeng. All rights reserved.
//

#import "GamePad+Cheat.h"

@implementation GamePad (Cheat)

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

//- (void)up {
//    NSLog(@"1234536478965432");
//}

@end
