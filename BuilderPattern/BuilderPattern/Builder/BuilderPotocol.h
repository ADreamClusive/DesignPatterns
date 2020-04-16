//
//  BuilderPotocol.h
//  BuilderPattern
//
//  Created by wupeng on 2017/3/4.
//  Copyright © 2017年 wupeng. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol BuilderPotocol <NSObject>

@required

/**
 构建对象

 @return 返回构建的对象
 */
- (id)build;

@end
