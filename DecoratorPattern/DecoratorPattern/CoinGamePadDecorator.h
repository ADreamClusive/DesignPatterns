//
//  CoinGamePadDecorator.h
//  DecoratorPattern
//
//  Created by wupeng on 2017/2/28.
//  Copyright © 2017年 wupeng. All rights reserved.
//

#import "GamePadDecorator.h"

@interface CoinGamePadDecorator : GamePadDecorator

/**
 *  游戏币
 */
@property (nonatomic) NSInteger  coin;

@end
