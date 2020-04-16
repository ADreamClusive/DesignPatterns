//
//  PSPSystem.m
//  BridgePattern
//
//  Created by wupeng on 2017/3/2.
//  Copyright © 2017年 wupeng. All rights reserved.
//

#import "PSPSystem.h"

@implementation PSPSystem

- (void)loadSystem {
    
    NSLog(@"PSPSystem");
}

- (void)command_X {
    
    [self.implementor loadCommand:KX];
}

- (void)command_O {
    
    [self.implementor loadCommand:KO];
}


@end
