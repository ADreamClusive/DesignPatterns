//
//  ViewController.m
//  DelegatePattern
//
//  Created by wupeng on 2017/3/3.
//  Copyright © 2017年 wupeng. All rights reserved.
//

#import "ViewController.h"
#import "Customer.h"
//#import "TCPProtocol.h"
#import "Model.h"

// 经销商
@interface ViewController () <CustomerDelegate, TCPProtocol>

@property (nonatomic) NSInteger  sourcePort;

@property (nonatomic) NSInteger  destinationPort;

@end


@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    [self test1];
    [self test2];
}

- (void)test1 {
    Customer *customer  = [[Customer alloc] init];
    customer.delegate   = self;
    
    [customer buyItemCount:5];

}

- (void)test2 {
    [self accessTCPData:[[Model alloc] init]];
}

//CustomerDelegate
- (void)customer:(Customer *)customer buyItemCount:(NSInteger)count {
    //打印10
    NSLog(@"%ld", count);
}

//TCPProtocol
- (void)accessTCPData:(id <TCPProtocol>)data {
    
    self.sourcePort      = [data sourcePort];
    self.destinationPort = [data destinationPort];
    NSLog(@"model: %ld", self.sourcePort);
    NSLog(@"model: %ld", self.destinationPort);
}

@end
