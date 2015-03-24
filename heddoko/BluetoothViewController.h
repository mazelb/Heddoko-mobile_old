//
//  BluetoothViewController.h
//  heddoko
//
//  Created by Antoine Azar on 2014-12-04.
//  Copyright (c) 2014 Mobilogie. All rights reserved.
//

#import <UIKit/UIKit.h>

@class HexagonGridView;

@interface BluetoothViewController : UIViewController
{
    HexagonGridView* hev;
    UIImageView* humanView;
    UIImageView* helpView;
    UIButton* pairBtn;
    UIButton* unpairBtn;

    UIImageView* humanGlowView;
    UIImageView* humanOnView;
    UIImageView* sensorsView;

    BOOL paired;
}
@end
