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

#endif
