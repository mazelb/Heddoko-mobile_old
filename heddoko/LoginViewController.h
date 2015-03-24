//
//  ViewController.h
//  heddoko
//
//  Created by Antoine Azar on 2014-12-03.
//  Copyright (c) 2014 Mobilogie. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LoginViewController : UIViewController <UITextFieldDelegate>
{
    UITextField* usernameFld;
    UITextField* passwordFld;
    UIButton* loginBtn;
    UIButton* newProfileBtn;
}

@property (strong, nonatomic) UIControl* activeField;

@end

