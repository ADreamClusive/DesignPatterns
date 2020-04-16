//
//  FileCell.h
//  CompositePattern
//
//  Created by wupeng on 2017/3/6.
//  Copyright © 2017年 wupeng. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FileCell : UITableViewCell

@property (nonatomic, weak) id                data;
@property (nonatomic, weak) NSIndexPath      *indexPath;
@property (nonatomic, weak) UITableView      *tableView;
@property (nonatomic, weak) UIViewController *controller;

- (void)loadContent;


@end
