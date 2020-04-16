//
//  Engine.h
//  BuilderPattern
//
//  Created by wupeng on 2017/3/4.
//  Copyright © 2017年 wupeng. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BuilderPotocol.h"
#import "AbstractEngineProtocol.h"

@interface Engine : NSObject <BuilderPotocol, AbstractEngineProtocol>

@end
