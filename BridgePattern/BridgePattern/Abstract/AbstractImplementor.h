//
//  AbstractImplementor.h
//  BridgePattern
//
//  Created by wupeng on 2017/3/2.
//  Copyright © 2017年 wupeng. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, EcommandType) {
    kUp,
    kDown,
    kLeft,
    kRight,
    kA,
    kB,
    
    KO,
    KX,

};

@interface AbstractImplementor : NSObject

/**
 执行命令

 @param command 命令枚举值
 */
- (void)loadCommand:(EcommandType)command;


@end
