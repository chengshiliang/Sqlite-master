//
//  User.h
//  JKBaseModel
//
//  Created by zx_04 on 15/6/24.
//  Copyright (c) 2015年 joker. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JKDBModel.h"
#import "Depart.h"
@interface User : JKDBModel

/** 账号 */
@property (nonatomic, copy)     NSString                    *account;
/** 名字 */
@property (nonatomic, copy)     NSString                    *name;
/** 性别 */
@property (nonatomic, copy)     NSMutableString             *sex;
/** 头像地址 */
@property (nonatomic, copy)     NSString                    *portraitPath;
/** 手机号码 */
@property (nonatomic, strong)   NSData                      *moblie;
/** 简介 */
@property (nonatomic, copy)     NSString                    *descn;
/** 年龄 */
@property (nonatomic, assign)   int                         age;

@property (nonatomic, assign)   float                       height;

@property (nonatomic, assign)   double                      field1;

@property (nonatomic, assign)   bool                        field2;

@property (nonatomic, copy)     NSArray <Depart *>          *departs;

@property (nonatomic, copy)     NSArray                     *array;

@property (nonatomic, strong)   Depart                      *depart;

@property (nonatomic, strong)   NSDate                      *date;
@end
