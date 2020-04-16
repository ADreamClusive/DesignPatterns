//
//  Door.h
//  BuilderPattern
//
//  Created by wupeng on 2017/3/4.
//  Copyright © 2017年 wupeng. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BuilderPotocol.h"
#import "AbstractDoorProtocol.h"

@interface Door : NSObject <BuilderPotocol, AbstractDoorProtocol>

@end
