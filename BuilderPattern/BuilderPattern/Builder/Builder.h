//
//  Builder.h
//  BuilderPattern
//
//  Created by wupeng on 2017/3/4.
//  Copyright © 2017年 wupeng. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AbstractEngineProtocol.h"
#import "AbstractWheelsProtocol.h"
#import "AbstractDoorProtocol.h"
#import "BuilderPotocol.h"

@interface Builder : NSObject

@property (nonatomic, strong) id <BuilderPotocol, AbstractEngineProtocol> engine;

@property (nonatomic, strong) id <BuilderPotocol, AbstractWheelsProtocol> wheels;

@property (nonatomic, strong) id <BuilderPotocol, AbstractDoorProtocol> door;

//产品信息
@property (nonatomic, strong) NSDictionary *productsInfo;

/**
 构建所有部件
 */
- (void)buildAllParts;

@end
