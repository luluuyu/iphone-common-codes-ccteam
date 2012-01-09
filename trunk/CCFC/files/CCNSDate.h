//
//  CCNSDate.h
//  CCFC
//
//  Created by xichen on 11-12-17.
//  Copyright 2011年 ccteam. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface NSDate(cc)
    
// 获取系统时间(yyyy-MM-dd HH:mm:ss.SSS格式)
+ (NSString *)getSystemTimeStr;

// print current time using printf func
+ (void)printCurrentTime;

// print the system date by chinese format
+ (void)printSystemDateByChineseFormat;

// get the number of days from self to the current date 
- (NSUInteger)daysAgo;

// get the date of the midnight
- (NSDate *)midnight;

// get the weekday of the date
- (NSUInteger)weekday;

// the standard format of date, time, timestamp format string
+ (NSString *)dateFormatStr;
+ (NSString *)timeFormatStr;
+ (NSString *)timestampFormatStr;

@end
