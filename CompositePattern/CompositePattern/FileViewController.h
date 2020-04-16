//
//  FileViewController.h
//  CompositePattern
//
//  Created by wupeng on 2017/3/6.
//  Copyright © 2017年 wupeng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "File.h"

@interface FileViewController : UIViewController

/**
 *  根节点
 */
@property (nonatomic, strong) File  *rootFile;

@end
