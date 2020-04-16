//
//  AbstractWheelsProtocol.h
//  BuilderPattern
//
//  Created by wupeng on 2017/3/4.
//  Copyright © 2017年 wupeng. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol AbstractWheelsProtocol <NSObject>

@required

/**
 轮子的数目

 @param number 数目
 */
- (void)wheelsNumber:(NSNumber *)number;

/**
 信息

 @return 引擎信息
 */
- (NSString *)infomation;

@end
