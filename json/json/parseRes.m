//
//  parseRes.m
//  json
//
//  Created by xxi on 2016/8/24.
//  Copyright © 2016年 xxi. All rights reserved.
//

#import "parseRes.h"

@implementation parseRes
- (instancetype)init{
    
    if (self = [super init])
        _dic = [[dic_par alloc]init];
    
    return self;
}

- (NSObject *)customClassInArray:(NSString *)arrayName{
    
    if ([arrayName isEqualToString:@"thrArr"])
        return [[thrDic alloc]init];
    else
        return nil;
}
@end

@implementation dic_par
- (instancetype)init{
    
    if (self = [super init])
        _thrDic = [[thrDic alloc]init];
    
    return self;
}
@end

@implementation thrDic

@end