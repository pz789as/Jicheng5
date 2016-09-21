//
//  RCTUnityViewManager.m
//  Jicheng5
//
//  Created by guojicheng on 16/9/20.
//  Copyright © 2016年 Facebook. All rights reserved.
//

#import "RCTUnityViewManager.h"
#import "RCTUIManager.h"
#import "RCTUnityView.h"

@implementation RCTUnityViewManager

RCT_EXPORT_MODULE();
@synthesize bridge = _bridge;

- (UIView *)view
{
  return [[RCTUnityView alloc] init];
}

- (dispatch_queue_t)methodQueue
{
  return dispatch_get_main_queue();
}

@end
