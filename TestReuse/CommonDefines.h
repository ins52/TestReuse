//
//  CommonDefines.h
//  Common
//
//  Created by aignatiev on 04.04.13.
//  Copyright (c) 2013 aignatiev. All rights reserved.
//

#ifndef Common_CommonDefines_h
#define Common_CommonDefines_h

//----------------------------------------------------------------------------------------------
// logs
// debug log
#ifdef DEBUG
#define DLog(fmt, ...) NSLog((@"[%p:%d] %s " fmt), self, [NSThread isMainThread], __PRETTY_FUNCTION__,  ##__VA_ARGS__);
#else
#define DLog(fmt, ...)
#endif

// release log
#define RLog(fmt, ...) NSLog((@"[%p:%d] %s " fmt), self, [NSThread isMainThread], __PRETTY_FUNCTION__,  ##__VA_ARGS__);

#define _PRINT_ID_(whatID)      DLog(@"objClass : %@ (rc=%d)", [[whatID class] description], whatID.retainCount);


//----------------------------------------------------------------------------------------------
// orientations
#define IS_IPHONE               ([[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPhone)
#define IS_IPAD                 ([[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPad)
#define IS_RETINA_DISPLAY       ([[UIScreen mainScreen] scale] > 1.0)

//----------------------------------------------------------------------------------------------
// ios versions
#define SYSTEM_VERSION                              ([[UIDevice currentDevice] systemVersion])
#define SYSTEM_VERSION_EQUAL_TO(v)                  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedSame)
#define SYSTEM_VERSION_GREATER_THAN(v)              ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedDescending)
#define SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(v)  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedAscending)
#define SYSTEM_VERSION_LESS_THAN(v)                 ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedAscending)
#define SYSTEM_VERSION_LESS_THAN_OR_EQUAL_TO(v)     ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedDescending)

#define IS_OS_5_OR_LATER    ([[[UIDevice currentDevice] systemVersion] floatValue] >= 5.0)
#define IS_OS_6_OR_LATER    ([[[UIDevice currentDevice] systemVersion] floatValue] >= 6.0)
#define IS_OS_7_OR_LATER    ([[[UIDevice currentDevice] systemVersion] floatValue] >= 7.0)
#define IS_OS_8_OR_LATER    ([[[UIDevice currentDevice] systemVersion] floatValue] >= 8.0)


//----------------------------------------------------------------------------------------------
// dict keys
#define KEY_KEY                         @"key"
#define KEY_VALUE                       @"value"

//----------------------------------------------------------------------------------------------
#define SECONDS_PER_DAY                 (86400)
#define SECONDS_PER_HOUR                (3600)
#define SECONDS_PER_MINUTE              (60)


#endif
