/*
 作者：  吴定如 <wudr@dist.com.cn>
 文件：  DistPopView.h
 版本：  1.0.0
 地址：  https://github.com/Damsir/DistPopView
 描述：  类似微信,QQ点击加号,从点击控件位置方向性弹出选择视图.
 1)样式:1.图片文字颜色 2.文字样式
 2)弹出位置:1.系统控件位置 2.自己定义位置
 3)是否有蒙版背景
 4)点击回调DistPopAction对象
 */

#import "DistPopAction.h"

@interface DistPopAction ()

@property (nonatomic, strong, readwrite) UIImage *image; ///< 图标
@property (nonatomic, copy, readwrite) NSString *title; ///< 标题

@end

@implementation DistPopAction

+ (instancetype)actionWithTitle:(NSString *)title  {
    return [self actionWithImage:nil title:title ];
}

+ (instancetype)actionWithImage:(UIImage *)image title:(NSString *)title  {
    DistPopAction *action = [[self alloc] init];
    action.image = image;
    action.title = title ? : @"";
    
    return action;
}

@end
