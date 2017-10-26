# DistPopView
Like WeChat Or QQ Click Add Button Pop Triangle View
Usage:
    DistPopAction *action1 = [DistPopAction actionWithImage:[UIImage imageNamed:@"contacts_add_newmessage"] title:@"发起群聊" ];
    DistPopAction *action2 = [DistPopAction actionWithImage:[UIImage imageNamed:@"contacts_add_friend"] title:@"添加朋友" ];
    DistPopAction *action3 = [DistPopAction actionWithImage:[UIImage imageNamed:@"contacts_add_scan"] title:@"扫一扫" ];
    DistPopAction *action4 = [DistPopAction actionWithImage:[UIImage imageNamed:@"contacts_add_money"] title:@"收付款" ];
    DistPopView *popView = [DistPopView popView];
    popView.style = DistPopViewStyleDark;
    popView.arrowStyle = DistPopViewArrowStyleRound;
    popView.showShade = NO;
    // 点击外部时不允许隐藏
    popView.hideAfterTouchOutside = NO; 
    // 在没有系统控件的情况下调用可以使用显示在指定的点坐标的方法弹出菜单控件.
    [popView showToView:sender actions:@[action1, action2, action3, action4] handler:^(DistPopAction *action) { }];
