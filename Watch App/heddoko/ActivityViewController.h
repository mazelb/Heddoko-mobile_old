//
//  ActivityViewController.h
//  heddoko
//
//  Created by Antoine Azar on 2014-12-04.
//  Copyright (c) 2014 Mobilogie. All rights reserved.
//

#import <UIKit/UIKit.h>

@class HexagonGridView;

@interface ActivityViewController : UIViewController
{
    HexagonGridView* hev;
    
    HexagonGridView* learnGrid;
    
    HexagonGridView* workoutGrid;
    
    HexagonGridView* challengeGrid;
    
    UIButton* learnBtn;
    
    UIButton* workoutBtn;
    
    UIButton* challengeBtn;
    
    UIImageView* lineView;
    
    
}
@end
