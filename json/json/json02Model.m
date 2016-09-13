//
//  json02Model.m
//  json
//
//  Created by xxi on 2016/8/27.
//  Copyright © 2016年 xxi. All rights reserved.
//

#import "json02Model.h"

@implementation json02Model
- (instancetype)init{
    
    if (self = [super init])
        _menu = [[menu_json2 alloc]init];
    
    return self;
}

- (NSObject *)customClassInArray:(NSString *)arrayName{
    
    if ([arrayName isEqualToString:@"menuitem"])
        return [[menuItem alloc]init];
    else
        return [[NSObject alloc]init];
}
@end

@implementation menu_json2
- (instancetype)init{
    
    if (self = [super init])
        _popup = [[popup_json2 alloc]init];
    
    return self;
}
@end

@implementation popup_json2

@end

@implementation menuItem

@end
