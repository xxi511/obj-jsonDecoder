//
//  NSObject+obj.h
//  json
//
//  Created by xxi on 2016/8/24.
//  Copyright © 2016年 xxi. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (obj)
- (void)setValueByDic:(NSDictionary *)dic;

/*
 please read wiki
 https://github.com/xxi511/obj-jsonDecoder/wiki
 */
- (NSObject *)customClassInArray:(NSString *)arrayName;
@end
