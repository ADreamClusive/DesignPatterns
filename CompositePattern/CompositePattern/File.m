//
//  File.m
//  CompositePattern
//
//  Created by wupeng on 2017/3/6.
//  Copyright © 2017年 wupeng. All rights reserved.
//

#import "File.h"

@interface File ()

@property (nonatomic, strong) NSMutableArray <File *> *childFiles;

@end

@implementation File

- (instancetype)init {
    self = [super init];
    if (self) {
        self.childFiles = [NSMutableArray array];
    }
    return self;
}

- (void)addFile:(File *)file {
    NSParameterAssert(file);
    [self.childFiles addObject:file];
}

+(instancetype)fileWithFileType:(EFile)fileType fileName:(NSString *)name {
    File *file = [[[self class] alloc] init];
    file.fileType = fileType;
    file.name = name;
    
    return file;
}

@end
