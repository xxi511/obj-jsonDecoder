//
//  json03Model.h
//  json
//
//  Created by xxi on 2016/8/28.
//  Copyright © 2016年 xxi. All rights reserved.
//

#import <Foundation/Foundation.h>

@class widget_json03,window_json03,image_json03,text_json03;
@interface json03Model : NSObject
@property (strong, nonatomic) widget_json03 *widget;
@end

@interface widget_json03 : NSObject
@property (strong, nonatomic) NSString *debug;
@property (strong, nonatomic) window_json03 *window;
@property (strong, nonatomic) image_json03 *image;
@property (strong, nonatomic) text_json03 *text;
@end

@interface window_json03 : NSObject
@property (strong, nonatomic) NSString *title;
@property (strong, nonatomic) NSString *name;
@property (assign, nonatomic) int width;
@property (assign, nonatomic) int height;
@end

@interface image_json03 : NSObject
@property (strong, nonatomic) NSString *src;
@property (strong, nonatomic) NSString *name;
@property (assign, nonatomic) int hOffset;
@property (assign, nonatomic) int vOffset;
@property (strong, nonatomic) NSString *alignment;
@end

@interface text_json03 : NSObject
@property (strong, nonatomic) NSString *data;
@property (assign, nonatomic) int size;
@property (strong, nonatomic) NSString *style;
@property (strong, nonatomic) NSString *name;
@property (assign, nonatomic) int hOffset;
@property (assign, nonatomic) int vOffset;
@property (strong, nonatomic) NSString *alignment;
@property (strong, nonatomic) NSString *onMouseUp;
@end