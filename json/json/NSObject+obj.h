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
 array 裡面的class還是array的時候
 custom要放在那個class裡面
 不然就放在最根源處就好了
 */
- (NSObject *)customClassInArray:(NSString *)arrayName;
@end
