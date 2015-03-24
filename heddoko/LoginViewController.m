//
//  ViewController.m
//  heddoko
//
//  Created by Antoine Azar on 2014-12-03.
//  Copyright (c) 2014 Mobilogie. All rights reserved.
//

#import "LoginViewController.h"
#import "UIView+Glow.h"
#import "MainMenuViewController.h"

@interface LoginViewController ()

@end

@implementation LoginViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    // register for keyboard notifications
    [[NSNotificationCenter defaultCenter] addObserver:self
                                             selector:@selector(keyboardWillShow:)
                                                 name:UIKeyboardWillShowNotification object:nil];

    [[NSNotificationCenter defaultCenter] addObserver:self
                                             selector:@selector(keyboardWillHide:)
                                                 name:UIKeyboardWillHideNotification object:nil];

    [self setupView];
}

- (void)keyboardWillShow:(NSNotification *)notification {
    CGRect start, end;

    // position of keyboard before animation
    [[[notification userInfo] objectForKey:UIKeyboardFrameBeginUserInfoKey] getValue:&start];
    // and after..
    [[[notification userInfo] objectForKey:UIKeyboardFrameEndUserInfoKey] getValue:&end];

    double duration = [[[notification userInfo] objectForKey:UIKeyboardAnimationDurationUserInfoKey] doubleValue];
    int curve = [[[notification userInfo] objectForKey:UIKeyboardAnimationCurveUserInfoKey] intValue];

    // slide view up..
    [UIView beginAnimations:@"foo" context:nil];
    [UIView setAnimationDuration:duration];
    [UIView setAnimationCurve:curve];
    self.view.frame = CGRectMake(0, -(MIN(end.size.height,125)), self.view.frame.size.width, self.view.frame.size.height);
    [UIView commitAnimations];
}

- (void) keyboardWillHide:(NSNotification *)notification {
    double duration = [[[notification userInfo] objectForKey:UIKeyboardAnimationDurationUserInfoKey] doubleValue];
    int curve = [[[notification userInfo] objectForKey:UIKeyboardAnimationCurveUserInfoKey] intValue];

    // slide view down
    [UIView beginAnimations:@"foo" context:nil];
    [UIView setAnimationDuration:duration];
    [UIView setAnimationCurve:curve];
    self.view.frame = CGRectMake(0, 0, self.view.frame.size.width, self.view.frame.size.height);
    [UIView commitAnimations];
}

-(void)dismissKeyboard {
    [usernameFld resignFirstResponder];
    [passwordFld resignFirstResponder];
}


- (void) setupView
{
    [self setNeedsStatusBarAppearanceUpdate];
    self.navigationController.navigationBar.hidden = YES;

    UITapGestureRecognizer *tap = [[UITapGestureRecognizer alloc]
                                   initWithTarget:self
                                   action:@selector(dismissKeyboard)];

    [self.view addGestureRecognizer:tap];


    CGRect f = self.view.frame;
    UIImageView* imgView = [[UIImageView alloc] initWithFrame:f];
    UIImage* backgroundImg = [UIImage imageNamed:@"Background"];
    imgView.image = backgroundImg;
    [self.view addSubview:imgView];

    //logo
    UIImage* logoImg = [UIImage imageNamed:@"Login - Logo"];
    UIImageView* logoView = [[UIImageView alloc] initWithFrame:CGRectMake((f.size.width-logoImg.size.width)/2, 212/2, logoImg.size.width, logoImg.size.height)];
    logoView.image = logoImg;
    [self.view addSubview:logoView];

    //fields
    const NSUInteger topMargin = 253;
    const NSUInteger fieldHeight = 33;
    const NSUInteger leftMargin = 28;
    const NSUInteger intraMargin = 10;

    [[UITextField appearance] setTintColor:[UIColor colorWithWhite:1.f alpha:0.8f]];

    usernameFld = [[UITextField alloc] initWithFrame:CGRectMake(leftMargin+3, topMargin, f.size.width-(leftMargin+3)*2, fieldHeight)];
    NSAttributedString *str = [[NSAttributedString alloc] initWithString:@"Username" attributes:@{
                                                                                                  NSForegroundColorAttributeName : [UIColor colorWithWhite:1.f alpha:0.2f],
                                                                                    NSFontAttributeName : [UIFont fontWithName:@"HelveticaNeue-Medium" size:13.0]
                                                                                                  }];
    usernameFld.attributedPlaceholder = str;
    usernameFld.delegate = self;
    [self styleControl:usernameFld];
    [self.view addSubview:usernameFld];

    passwordFld = [[UITextField alloc] initWithFrame:CGRectMake((leftMargin+3), topMargin+fieldHeight+intraMargin, f.size.width-(leftMargin+3)*2, fieldHeight)];
    passwordFld.secureTextEntry = YES;
    str = [[NSAttributedString alloc] initWithString:@"Password" attributes:@{
                                                                                                  NSForegroundColorAttributeName : [UIColor colorWithWhite:1.f alpha:0.2f],
                                                                                                  NSFontAttributeName : [UIFont fontWithName:@"HelveticaNeue-Medium" size:13.0]
                                                                                                  }];    passwordFld.attributedPlaceholder = str;
    passwordFld.delegate = self;
    [self styleControl:passwordFld];
    [self.view addSubview:passwordFld];

    //login button
    loginBtn = [[UIButton alloc] initWithFrame:CGRectMake(leftMargin, topMargin+(fieldHeight+intraMargin)*2, f.size.width-leftMargin*2, 36)];
    [loginBtn setBackgroundImage:[UIImage imageNamed:@"Login - Login Button"] forState:UIControlStateNormal];
    [loginBtn setTitle:@"Sign in" forState:UIControlStateNormal];
    [loginBtn.titleLabel setFont:[UIFont fontWithName:@"HelveticaNeue-Bold" size:14.f]];
    [self.view addSubview:loginBtn];

    [loginBtn addTarget:self action:@selector(login:) forControlEvents:UIControlEventTouchUpInside];

    //bottom part
    UIView* separatorLine1 = [[UIView alloc] initWithFrame:CGRectMake(leftMargin, 412, 90, 1)];
    separatorLine1.backgroundColor = [UIColor colorWithRed:140/255.f green:145/255.f blue:149/255.f alpha:1.f];
    [self.view addSubview:separatorLine1];

    UIView* separatorLine2 = [[UIView alloc] initWithFrame:CGRectMake(f.size.width-leftMargin-90, 412, 90, 1)];
    separatorLine2.backgroundColor = [UIColor colorWithRed:140/255.f green:145/255.f blue:149/255.f alpha:1.f];
    [self.view addSubview:separatorLine2];

    UILabel* orLbl = [[UILabel alloc] initWithFrame:CGRectMake(0, 406, f.size.width, 10)];
    orLbl.text = @"OR";
    orLbl.textColor = [UIColor whiteColor];
    orLbl.textAlignment = NSTextAlignmentCenter;
    orLbl.font = [UIFont fontWithName:@"HelveticaNeue-Medium" size:10.f];
    [self.view addSubview:orLbl];

    newProfileBtn = [[UIButton alloc] initWithFrame:CGRectMake((f.size.width-175)/2.f, 442, 175, 22)];
    [newProfileBtn setTitle:@"Create new profile" forState:UIControlStateNormal];
    [newProfileBtn.titleLabel setFont:[UIFont fontWithName:@"HelveticaNeue-Medium" size:14.f]];
    [newProfileBtn setTitleColor:[UIColor colorWithWhite:1.f alpha:0.6f] forState:UIControlStateNormal];

    [self.view addSubview:newProfileBtn];

    UIView* bottomLine = [[UIView alloc] initWithFrame:CGRectMake((f.size.width-117)/2.f, 442+22, 117, 1)];
    bottomLine.backgroundColor = [UIColor colorWithRed:120/255.f green:192/255.f blue:138/255.f alpha:1.f];
    [self.view addSubview:bottomLine];

}

- (void)textFieldDidBeginEditing:(UITextField *)textField
{
    textField.layer.borderColor = [[UIColor colorWithRed:120/255.f green:192/255.f blue:138/255.f alpha:1.f] CGColor];
}

- (void)textFieldDidEndEditing:(UITextField *)textField
{
    textField.layer.borderColor=[[UIColor colorWithRed:145/255.f green:151/255.f blue:155/255.f alpha:1.f]CGColor];
}

-(UIStatusBarStyle)preferredStatusBarStyle{
    return UIStatusBarStyleLightContent;
}

-(void) styleControl:(UITextField*)txtField
{
    UIView *paddingView = [[UIView alloc] initWithFrame:CGRectMake(0, 0, 10, 20)];
    txtField.leftView = paddingView;
    txtField.leftViewMode = UITextFieldViewModeAlways;
    txtField.contentVerticalAlignment = UIControlContentVerticalAlignmentCenter;

//    txtField.font = [UIFont fontWithName:@" size:]

    txtField.backgroundColor = [UIColor clearColor];
    txtField.textColor = [UIColor whiteColor];
    txtField.layer.cornerRadius=0.0f;
    txtField.layer.masksToBounds=NO;
    txtField.layer.borderColor=[[UIColor colorWithRed:145/255.f green:151/255.f blue:155/255.f alpha:1.f]CGColor];
    txtField.layer.borderWidth= 1.0f;

}


- (void) login:(id)sender
{
    MainMenuViewController* mainMenu = [[MainMenuViewController alloc] init];
    [self.navigationController pushViewController:mainMenu animated:YES];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
