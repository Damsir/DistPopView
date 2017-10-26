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

UIKIT_EXTERN float const PopViewCellHorizontalMargin; ///< 水平间距边距
UIKIT_EXTERN float const PopViewCellVerticalMargin; ///< 垂直边距
UIKIT_EXTERN float const PopViewCellTitleLeftEdge; ///< 标题左边边距

@interface DistPopViewCell : UITableViewCell

@property (nonatomic, assign) DistPopViewStyle style;

/*! @brief 标题字体
 */
+ (UIFont *)titleFont;

/*! @brief 底部线条颜色
 */
+ (UIColor *)bottomLineColorForStyle:(DistPopViewStyle)style;

- (void)setAction:(DistPopAction *)action;

- (void)showBottomLine:(BOOL)show;

@end
