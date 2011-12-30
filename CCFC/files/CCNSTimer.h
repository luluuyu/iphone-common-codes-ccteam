//
//  CCNSTimer.h
//  CCFC
//
//  Created by xichen on 11-12-28.
//  Copyright 2011 ccteam. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface NSTimer(cc)

// create a common timer
+ (NSTimer *)createCommonTimer:(id)target sel:(SEL)sel timeInterval:(NSTimeInterval)interval;

// create a common repeatable timer
+ (NSTimer *)createCommonRepeatTimer:(id)target sel:(SEL)sel timeInterval:(NSTimeInterval)interval;

// safe invalidate
- (void)safeInvalidate;

@end
