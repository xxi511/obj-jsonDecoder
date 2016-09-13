//
//  json03Model.m
//  json
//
//  Created by xxi on 2016/8/28.
//  Copyright © 2016年 xxi. All rights reserved.
//

#import "json03Model.h"

@implementation json03Model
- (instancetype)init{
    
    if (self = [super init])
        _widget = [[widget_json03 alloc]init];
    return self;
}
@end

@implementation widget_json03
- (instancetype)init{
    
    if (self = [super init])
    {
        _window = [[window_json03 alloc]init];
        _image = [[image_json03 alloc]init];
        _text = [[text_json03 alloc]init];
    }
    return self;
}
@end

@implementation window_json03

@end

@implementation image_json03

@end


@implementation text_json03

@end