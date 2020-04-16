//
//  Builder.m
//  BuilderPattern
//
//  Created by wupeng on 2017/3/4.
//  Copyright © 2017年 wupeng. All rights reserved.
//

#import "Builder.h"

@implementation Builder

- (void)buildAllParts {
    
    // 创建所有部件
    [self.engine build];
    [self.wheels build];
    [self.door build];
    
    NSMutableDictionary *dataDic = [NSMutableDictionary dictionary];
    
    // 组装产品
    dataDic[@"engine"] = [self.engine infomation];
    dataDic[@"wheels"] = [self.wheels infomation];
    dataDic[@"door"]   = [self.door infomation];
    
    self.productsInfo = dataDic;
}

@end
