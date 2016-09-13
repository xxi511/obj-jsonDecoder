//
//  json02Model.h
//  json
//
//  Created by xxi on 2016/8/27.
//  Copyright © 2016年 xxi. All rights reserved.
//

#import <Foundation/Foundation.h>

@class menu_json2,menuItem,popup_json2;
@interface json02Model : NSObject
@property (strong, nonatomic) menu_json2 *menu;

- (NSObject *)customClassInArray:(NSString *)arrayName;
@end

@interface menu_json2 : NSObject
@property (strong, nonatomic) NSString *ID;
@property (strong, nonatomic) NSString *value;
@property (strong, nonatomic) popup_json2 *popup;
@end

@interface popup_json2 : NSObject
@property (strong, nonatomic) NSArray<menuItem *> *menuitem;
@end

@interface menuItem : NSObject
@property (strong, nonatomic) NSString *value;
@property (strong, nonatomic) NSString *onclick;
@end

@class customA, customB;
@interface rootObj : NSObject
@property (strong, nonatomic) NSArray<customA *> *customAArray;

//override for customA
- (NSObject *)customClassInArray:(NSString *)arrayName;
@end

@interface customA : NSObject
@property (strong, nonatomic) NSArray<customB *> *customBArray;

//override for customB
- (NSObject *)customClassInArray:(NSString *)arrayName;
@end

@interface customB : NSObject

@end