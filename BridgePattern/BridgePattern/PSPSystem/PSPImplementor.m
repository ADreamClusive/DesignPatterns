//
//  PSPImplementor.m
//  BridgePattern
//
//  Created by wupeng on 2017/3/2.
//  Copyright © 2017年 wupeng. All rights reserved.
//

#import "PSPImplementor.h"

@implementation PSPImplementor

- (void)loadCommand:(EcommandType)command {
    
    switch (command) {
            
        case kUp:
            
            NSLog(@"PSP up");
            break;
            
        case kDown:
            
            NSLog(@"PSP down");
            break;
            
        case kLeft:
            
            NSLog(@"PSP left");
            break;
            
        case kRight:
            
            NSLog(@"PSP right");
            break;
            
        case kA:
            
            NSLog(@"PSP A");
            break;
            
        case kB:
            
            NSLog(@"PSP B");
            break;
            
        case KO:
            
            NSLog(@"PSP O");
            break;
            
        case KX:
            
            NSLog(@"PSP X");
            break;
            
        default:
            NSLog(@"PSP None");
            break;
    }
}

@end
