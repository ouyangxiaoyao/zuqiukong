//
//  ZHSettingTopView.h
//  足球控(DIY)
//
//  Created by qianfeng on 16/1/4.
//  Copyright (c) 2016年 叶无道. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ZHSettingTopView : UIView
@property (weak, nonatomic) IBOutlet UIButton *iconBtn;
@property (nonatomic,copy)void(^settingBtnBlock) ();

@property (nonatomic,copy)void(^iconBtnBlock) (void);

- (IBAction)settingClick;
+(instancetype)settingTopView;
@end
