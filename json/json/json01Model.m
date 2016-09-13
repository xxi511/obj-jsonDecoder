//
//  json01Model.m
//  json
//
//  Created by xxi on 2016/8/27.
//  Copyright © 2016年 xxi. All rights reserved.
//

#import "json01Model.h"


@implementation json01Model
- (instancetype)init{
    
    if (self = [super init])
        _glossary = [[glossary alloc]init];
    return self;
}
@end

@implementation glossary
- (instancetype)init{
    if (self = [super init])
        _GlossDiv = [[glossDiv alloc]init];
    return self;
}
@end

@implementation glossDiv
- (instancetype)init{
    if (self = [super init])
        _GlossList = [[glossList alloc]init];
    return self;
}
@end

@implementation glossList
- (instancetype)init{
    
    if (self = [super init])
        _GlossEntry = [[glossEntry alloc]init];
    return self;
}
@end

@implementation glossEntry
- (instancetype)init{
    
    if (self = [super init])
        _GlossDef = [[glossDef alloc]init];
    return self;
}
@end

@implementation glossDef

@end
