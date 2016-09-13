//
//  ViewController.m
//  json
//
//  Created by xxi on 2016/8/24.
//  Copyright © 2016年 xxi. All rights reserved.
//

#import "ViewController.h"
#import "NSObject+obj.h"


#import "json01Model.h"
#import "json02Model.h"
#import "json03Model.h"
@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    //[self parseJson01];
    //[self parseJson02];
    [self parseJson03];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void)parseJson01{
    
    NSString *json01Path = [[NSBundle mainBundle] pathForResource:@"json01" ofType:@"exp"];
    NSString *json01 = [NSString stringWithContentsOfFile:json01Path encoding:NSUTF8StringEncoding error:NULL];
    
    NSData *data = [json01 dataUsingEncoding:NSUTF8StringEncoding];
    NSDictionary *dic = [NSJSONSerialization JSONObjectWithData:data options:0 error:nil];
    
    json01Model *_json01Model = [[json01Model alloc]init];
    [_json01Model setValueByDic:dic];
    NSLog(@"stop to see result");
}

- (void)parseJson02{
    
    NSString *json02Path = [[NSBundle mainBundle] pathForResource:@"json02" ofType:@"exp"];
    NSString *json02 = [NSString stringWithContentsOfFile:json02Path encoding:NSUTF8StringEncoding error:NULL];
    
    NSData *data = [json02 dataUsingEncoding:NSUTF8StringEncoding];
    NSDictionary *dic = [NSJSONSerialization JSONObjectWithData:data options:0 error:nil];
    
    json02Model *_json02Model = [[json02Model alloc]init];
    [_json02Model setValueByDic:dic];
    NSLog(@"stop to see result");
}

- (void)parseJson03{
    
    NSString *json03Path = [[NSBundle mainBundle] pathForResource:@"json03" ofType:@"exp"];
    NSString *json03 = [NSString stringWithContentsOfFile:json03Path encoding:NSUTF8StringEncoding error:NULL];
    
    NSData *data = [json03 dataUsingEncoding:NSUTF8StringEncoding];
    NSDictionary *dic = [NSJSONSerialization JSONObjectWithData:data options:0 error:nil];
    
    json03Model *_json03Model = [[json03Model alloc]init];
    [_json03Model setValueByDic:dic];
    NSLog(@"stop to see result");
}
@end
