//
//  BluetoothLearnViewController.h
//  heddoko
//
//  Created by Miguel Garcia Hernandez on 12-12-14.
//  Copyright (c) 2014 Mobilogie. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RecordingData.h"
#import "UnityMovementData.h"
#import "UI/UnityView.h"
#import "UI/UnityViewControllerBase.h"

#include "UnityAppController+ViewHandling.h"


@class HexagonGridView;

@interface BluetoothLearnViewController : UIViewController
{
    HexagonGridView* hev;
    
    UIImageView* humanView;
    
    UIButton* trainBtn;
    
    UIView *learnView;
    
    UIView *trainView;
    
    UIView *analyzeView;
    
    UnityView* unityView;
    
}

+ (RecordingData *)baseRecording;

+ (RecordingData *)actualRecording;

@end
