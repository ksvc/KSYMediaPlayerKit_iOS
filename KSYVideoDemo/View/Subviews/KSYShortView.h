//
//  KSYShortView.h
//  KSYVideoDemo
//
//  Created by 孙健 on 16/1/7.
//  Copyright © 2016年 kingsoft. All rights reserved.
//

#import "KSYBasePlayView.h"
@class KSYBottomView;

@interface KSYShortView : KSYBasePlayView
//初始化方法
- (instancetype)initWithFrame:(CGRect)frame urlShortString:(NSString *)urlString;
@property (nonatomic, retain) KSYBottomView *bottomView;
@end
