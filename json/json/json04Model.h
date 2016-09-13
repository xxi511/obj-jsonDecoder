//
//  json04Model.h
//  json
//
//  Created by xxi on 2016/8/28.
//  Copyright © 2016年 xxi. All rights reserved.
//

#import <Foundation/Foundation.h>
@class web_app_json04,servlet_mapping_json04,taglib_json04,servlet_json04,init_param_json04;
@interface json04Model : NSObject
@property (strong, nonatomic) web_app_json04 *web_app;
@end

@interface web_app_json04 : NSObject
@property (strong, nonatomic) NSArray *servlet;
@property (strong, nonatomic) servlet_mapping_json04 *servlet_mapping;
@property (strong, nonatomic) taglib_json04 *taglib;
@end

@interface servlet_mapping_json04 : NSObject
@property (strong, nonatomic) NSString *cofaxCDS;
@property (strong, nonatomic) NSString *cofaxEmail;
@property (strong, nonatomic) NSString *cofaxAdmin;
@property (strong, nonatomic) NSString *fileServlet;
@property (strong, nonatomic) NSString *cofaxTools;
@end

@interface taglib_json04 : NSObject
@property (strong, nonatomic) NSString *taglib_uri;
@property (strong, nonatomic) NSString *taglib_location;
@end

@interface servlet_json04 : NSObject
@property (strong, nonatomic) NSString *servlet_name;
@property (strong, nonatomic) NSString *servlet_class;
@property (strong, nonatomic) init_param_json04 *init_param;
@end

@interface init_param_json04 : NSObject
@property (strong, nonatomic) NSString *configGlossary_installationAt;
@property (strong, nonatomic) NSString *configGlossary_adminEmail;
@property (strong, nonatomic) NSString *configGlossary_poweredBy;
@property (strong, nonatomic) NSString *configGlossary_poweredByIcon;
@property (strong, nonatomic) NSString *configGlossary_staticPath;
@property (strong, nonatomic) NSString *templateProcessorClass;
@property (strong, nonatomic) NSString *templateLoaderClass;
@property (strong, nonatomic) NSString *templatePath;
@property (strong, nonatomic) NSString *templateOverridePath;
@property (strong, nonatomic) NSString *defaultListTemplate;
@property (strong, nonatomic) NSString *defaultFileTemplate;
@property (assign, nonatomic) bool useJSP;
@property (strong, nonatomic) NSString *jspListTemplate;
@property (strong, nonatomic) NSString *jspFileTemplate;
@property (assign, nonatomic) int cachePackageTagsTrack;
@property (assign, nonatomic) int cachePackageTagsStore;
@property (assign, nonatomic) int cachePackageTagsRefresh;
@property (assign, nonatomic) int cacheTemplatesTrack;
@property (assign, nonatomic) int cacheTemplatesStore;
@property (assign, nonatomic) int cacheTemplatesRefresh;
@property (assign, nonatomic) int cachePagesTrack;
@property (assign, nonatomic) int cachePagesStore;
@property (assign, nonatomic) int cachePagesRefresh;
@property (assign, nonatomic) int cachePagesDirtyRead;
@property (strong, nonatomic) NSString *searchEngineListTemplate;
@property (strong, nonatomic) NSString *searchEngineFileTemplate;
@property (strong, nonatomic) NSString *searchEngineRobotsDb;
@property (assign, nonatomic) bool useDataStore;
@property (strong, nonatomic) NSString *dataStoreClass;
@property (strong, nonatomic) NSString *redirectionClass;
@property (strong, nonatomic) NSString *dataStoreName;
@property (strong, nonatomic) NSString *dataStoreDriver;
@property (strong, nonatomic) NSString *dataStoreUrl;
@property (strong, nonatomic) NSString *dataStoreUser;
@property (strong, nonatomic) NSString *dataStorePassword;
@property (strong, nonatomic) NSString *dataStoreTestQuery;
@property (strong, nonatomic) NSString *dataStoreLogFile;
@property (assign, nonatomic) int dataStoreInitConns;
@property (assign, nonatomic) int dataStoreMaxConns;
@property (assign, nonatomic) int dataStoreConnUsageLimit;
@property (strong, nonatomic) NSString *dataStoreLogLevel;
@property (assign, nonatomic) int maxUrlLength;
@end
