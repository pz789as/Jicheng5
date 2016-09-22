//
//  RCTUnityView.m
//  Jicheng5
//
//  Created by guojicheng on 16/9/20.
//  Copyright © 2016年 Facebook. All rights reserved.
//

#import "RCTUnityView.h"

@implementation RCTUnityView

-(id)initWithFrame:(CGRect)frame
{
  self = [super initWithFrame:frame];
  if (self){
    self.uView = GetAppController().unityView;
  }
  return self;
}

-(void)layoutSubviews
{
  [super layoutSubviews];
  [self.uView removeFromSuperview];
  self.uView.frame = self.bounds;
  [self insertSubview:self.uView atIndex:0];
  [self.uView setNeedsLayout];
}

@end
