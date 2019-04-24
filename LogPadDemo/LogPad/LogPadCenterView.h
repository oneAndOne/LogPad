//
//  LogPadCenterView.h
//  XJKHealth
//
//  Created by wangwei on 2019/4/22.
//  Copyright © 2019 xiaweidong. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface LogPadCenterView : UIView

@property (nonatomic, assign) BOOL colorSwitch;

-(void)startMonitorSystemLog;
-(void)removeMonitor;

@end

NS_ASSUME_NONNULL_END