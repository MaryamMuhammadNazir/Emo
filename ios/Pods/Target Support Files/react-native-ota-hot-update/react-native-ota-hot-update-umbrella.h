#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "OtaHotUpdate.h"

FOUNDATION_EXPORT double react_native_ota_hot_updateVersionNumber;
FOUNDATION_EXPORT const unsigned char react_native_ota_hot_updateVersionString[];

