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

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, DistPopViewStyle) {
    DistPopViewStyleDefault = 0, // 默认风格, 白色
    DistPopViewStyleDark, // 黑色风格
};

@interface DistPopAction : NSObject

@property (nonatomic, strong, readonly) UIImage *image; ///< 图标 (建议使用 60pix*60pix 的图片)
@property (nonatomic, copy, readonly) NSString *title; ///< 标题

+ (instancetype)actionWithTitle:(NSString *)title ;

+ (instancetype)actionWithImage:(UIImage *)image title:(NSString *)title ;

@end
