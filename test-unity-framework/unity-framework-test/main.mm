//
//  main.m
//  unity-framework-test
//
//  Created by forest on 2017/5/8.
//  Copyright © 2017年 vxinyou. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <UnityOutFramework/UnityOutFramework.h>
#include <mach/mach_time.h>
#import "AppDelegate.h"

//void UnityInitTrampoline();
const char* AppControllerClassName = "AppDelegate";

int main(int argc, char * argv[]) {
    
    signed long long startTime = mach_absolute_time();
    
    @autoreleasepool {
        UnitySetStartupTime(startTime);
        //UnityInitTrampoline();
        UnityInitRuntime(argc, argv);
        
        return UIApplicationMain(argc, argv, nil, [NSString stringWithUTF8String: AppControllerClassName]);
    }
}
