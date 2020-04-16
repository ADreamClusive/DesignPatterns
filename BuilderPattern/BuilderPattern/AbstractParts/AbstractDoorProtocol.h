//
//  AbstractDoor.h
//  BuilderPattern
//
//  Created by wupeng on 2017/3/4.
//  Copyright © 2017年 wupeng. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol AbstractDoorProtocol <NSObject>

@required

/**
 门的颜色

 @param color 颜色
 */

- (void)doorColor:(UIColor *)color;

/**
 信息

 @return 引擎信息
 */
- (NSString *)infomation;

@end
