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

#import <UIKit/UIKit.h>
#import "DistPopAction.h"

// 弹窗箭头的样式
typedef NS_ENUM(NSUInteger, DistPopViewArrowStyle) {
    DistPopViewArrowStyleTriangle = 0,  // 菱角
    DistPopViewArrowStyleRound  // 圆角
};

typedef void(^DistPopActionBlock)(DistPopAction *action);

@interface DistPopView : UIView

/**
 是否开启点击外部隐藏弹窗, 默认为YES.
 */
@property (nonatomic, assign) BOOL hideAfterTouchOutside;

/**
 是否显示阴影, 如果为YES则弹窗背景为半透明的阴影层, 否则为透明, 默认为YES.
 */
@property (nonatomic, assign) BOOL showShade;

/**
 弹出窗风格, 默认为 DistPopViewStyleDefault(白色).
 */
@property (nonatomic, assign) DistPopViewStyle style;

/**
 箭头样式, 默认为 DistPopViewArrowStyleRound.
 如果要修改箭头的样式, 需要在显示先设置.
 */
@property (nonatomic, assign) DistPopViewArrowStyle arrowStyle;

+ (instancetype)popView;

/**
 指向指定的View来显示弹窗
 
 @param pointView 箭头指向的View
 @param actions   动作对象集合<DistPopAction>
 */
- (void)showToView:(UIView *)pointView actions:(NSArray<DistPopAction *> *)actions handler:(DistPopActionBlock)popActionBlock;

/**
 指向指定的点来显示弹窗
 
 @param toPoint 箭头指向的点(这个点的坐标需按照keyWindow的坐标为参照)
 @param actions 动作对象集合<DistPopAction>
 */
- (void)showToPoint:(CGPoint)toPoint actions:(NSArray<DistPopAction *> *)actions handler:(DistPopActionBlock)popActionBlock;

@end
