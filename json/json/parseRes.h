//
//  parseRes.h
//  json
//
//  Created by xxi on 2016/8/24.
//  Copyright © 2016年 xxi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NSObject+obj.h"

@class dic_par,thrDic;
@interface parseRes : NSObject
@property (assign, nonatomic) int num;
@property (strong, nonatomic) NSString *str;
@property (strong, nonatomic) dic_par *dic;
@property (strong, nonatomic) NSArray *arr;
@property (strong, nonatomic) NSArray *thrArr;

- (NSObject *)customClassInArray:(NSString *)arrayName;
@end

@interface dic_par : NSObject
@property (strong, nonatomic) NSString *first;
@property (strong, nonatomic) NSString *second;
@property (strong, nonatomic) thrDic *thrDic;
@end

@interface thrDic : NSObject
@property (strong, nonatomic) NSString *hi;
@end
