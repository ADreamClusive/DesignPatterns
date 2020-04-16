//
//  EmailValidator.h
//  patternOfStrategy
//
//  Created by wupeng on 2017/2/16.
//  Copyright © 2017年 wupeng. All rights reserved.
//

#import "InputValidator.h"

@interface EmailValidator : InputValidator

//重载了父类的验证方法
- (BOOL)validateInput:(UITextField *)input;

@end
