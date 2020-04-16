//
//  AbstractEngineProtocol.h
//  BuilderPattern
//
//  Created by wupeng on 2017/3/4.
//  Copyright © 2017年 wupeng. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol AbstractEngineProtocol <NSObject>

@required

/**
 引擎的尺寸

 @param scale 尺寸
 */
- (void)engineScale:(CGFloat)scale;

/**
 引擎的重量

 @param kg 重量
 */
- (void)engineWeight:(CGFloat)kg;

/**
 信息

 @return 引擎信息
 */
- (NSString *)infomation;

@end
