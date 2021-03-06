//
//  HeartRateMonitorDeviceDelegate.h
//  HeartRateMonitor
//
//  Created by Simon Bogutzky on 07.01.14.
//  Copyright (c) 2014 out there! communication. All rights reserved.
//

#import <Foundation/Foundation.h>

@class HeartRateMonitorDevice;
@class HeartRateMonitorData;
@class BioharnessData;

@protocol HeartRateMonitorDeviceDelegate<NSObject>

@optional

- (void)heartRateMonitorDevice:(HeartRateMonitorDevice *)device didreceiveHeartrateMonitorData:(HeartRateMonitorData *)data;
- (void)heartRateMonitorDevice:(HeartRateMonitorDevice *)device didReceiveBioharnessData:(BioharnessData *)data;

@end
