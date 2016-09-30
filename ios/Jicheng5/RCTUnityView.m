//
//  RCTUnityView.m
//  Jicheng5
//
//  Created by guojicheng on 16/9/20.
//  Copyright © 2016年 Facebook. All rights reserved.
//

#import "RCTUnityView.h"
#import "RCTConvert.h"

@implementation RCTUnityView

-(instancetype)init
{
  self = [super init];
  if (self){
    self.uView = (UIView*)GetAppController().unityView;
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

-(void)setMoveData:(NSDictionary*)moveData
{
  BOOL blnLeft = NO;
  BOOL blnRight = NO;
  BOOL blnUp = NO;
  BOOL blnDown = NO;
  NSLog(@"moveData:%@, keys: %@", moveData, moveData.allKeys);
  for(NSString* key in moveData.allKeys){
    BOOL blnDirect = [RCTConvert BOOL:moveData[key]];
    NSLog(@"%@", key);
    if ([key isEqualToString:@"left"]){
      blnLeft = blnDirect;
    }else if ([key isEqualToString:@"right"]){
      if (blnLeft == YES){
        NSLog(@"不能同时往左右移动");
      }else{
        blnRight = blnDirect;
      }
    }else if ([key isEqualToString:@"up"]){
      blnUp = blnDirect;
    }else if ([key isEqualToString:@"down"]){
      if (blnUp == YES){
        NSLog(@"不能同时往上下移动");
      }else{
        blnDown = blnDirect;
      }
    }
  }
  if (blnLeft == YES){
    UnitySendMessage("RunInRN", "MoveLeft", "");
  }else if (blnRight == YES){
    UnitySendMessage("RunInRN", "MoveRight", "");
  }
  if (blnUp == YES){
    UnitySendMessage("RunInRN", "MoveUp", "");
  }else if (blnDown == YES){
    UnitySendMessage("RunInRN", "MoveDonw", "");
  }
}

@end
