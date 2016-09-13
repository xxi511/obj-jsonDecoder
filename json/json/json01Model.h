//
//  json01.h
//  json
//
//  Created by xxi on 2016/8/27.
//  Copyright © 2016年 xxi. All rights reserved.
//

#import <Foundation/Foundation.h>
@class glossary,glossDiv,glossList,glossEntry,glossDef;
@interface json01Model : NSObject
@property (strong, nonatomic) glossary *glossary;
@end

@interface glossary : NSObject
@property (strong, nonatomic) NSString *title;
@property (strong, nonatomic) glossDiv *GlossDiv;
@end

@interface glossDiv : NSObject
@property (strong, nonatomic) NSString *title;
@property (strong, nonatomic) glossList *GlossList;
@end

@interface glossList : NSObject
@property (strong, nonatomic) glossEntry *GlossEntry;
@end

@interface glossEntry : NSObject
@property (strong, nonatomic) NSString *ID;
@property (strong, nonatomic) NSString *SortAs;
@property (strong, nonatomic) NSString *GlossTerm;
@property (strong, nonatomic) NSString *Acronym;
@property (strong, nonatomic) NSString *Abbrev;
@property (strong, nonatomic) glossDef *GlossDef;
@property (strong, nonatomic) NSString *GlossSee;
@end

@interface glossDef : NSObject
@property (strong, nonatomic) NSString *para;
@property (strong, nonatomic) NSArray *GlossSeeAlso;
@end
