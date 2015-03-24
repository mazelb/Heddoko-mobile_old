//
//  BluetoothViewController.m
//  heddoko
//
//  Created by Antoine Azar on 2014-12-04.
//  Copyright (c) 2014 Mobilogie. All rights reserved.
//

#import "BluetoothViewController.h"
#import "HexagonGridView.h"
#import "HexagonElementView.h"

const NSInteger TAG_BACK_BUTTON = 1;

@interface BluetoothViewController ()

@end

@implementation BluetoothViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    [self setupView];
    paired = NO;
}

- (void) setupView
{
    [self setNeedsStatusBarAppearanceUpdate];

    CGRect f = self.view.frame;
    UIImageView* imgView = [[UIImageView alloc] initWithFrame:f];
    UIImage* backgroundImg = [UIImage imageNamed:@"Background"];
    imgView.image = backgroundImg;
    [self.view addSubview:imgView];

    UIImage* logoImg = [UIImage imageNamed:@"Login - Top"];
    UIImageView* logoView = [[UIImageView alloc] initWithFrame:CGRectMake((f.size.width-logoImg.size.width)/2.f, 45, logoImg.size.width, logoImg.size.height)];
    logoView.image = logoImg;
    [self.view addSubview:logoView];

    UIImage* hexagonMenuImg = [UIImage imageNamed:@"Menu - Hexagon"];
    UIImageView* hexagonMenuView = [[UIImageView alloc] initWithFrame:CGRectMake(9, 40, hexagonMenuImg.size.width, hexagonMenuImg.size.height)];
    hexagonMenuView.image = hexagonMenuImg;
    [self.view addSubview:hexagonMenuView];

    hev = [[HexagonGridView alloc] initWithFrame:CGRectMake(0, 99, f.size.width, f.size.height-99)];
    [self.view addSubview:hev];

    layout screenLayout;
    
    int l[8][2] =
    {
        {1,1},
        {1,1},
        {0,1},
        {1,0},
        {1,0},
        {0,0},
        {0,0},
        {0,0}
    };

    for(int j=0; j<8; j++) {
        for(int i=0; i<2; i++) {
            screenLayout.map[j][i] = l[j][i];
        }
    }

    hev.layoutArray = screenLayout;
    [hev setupWithDelegate:self oddOrder:YES];

    HexagonElementView* accountHex = [hev getElementAtKey:@"0,0"];
    [accountHex setTag:TAG_BACK_BUTTON];
    [accountHex setButtonIcon:[UIImage imageNamed:@"Back Button"]];

    UIImage* humanImg = [UIImage imageNamed:@"Bluetooth - Human Off"];
    humanView = [[UIImageView alloc] initWithFrame:CGRectMake((self.view.frame.size.width-humanImg.size.width)/2.f,120,humanImg.size.width,humanImg.size.height)];
    humanView.image = humanImg;
    humanView.alpha = 0.f;
    [self.view addSubview:humanView];

    UIImage* helpImg = [UIImage imageNamed:@"Bluetooth - Help"];
    helpView = [[UIImageView alloc] initWithFrame:CGRectMake((self.view.frame.size.width-helpImg.size.width)/2.f,129,helpImg.size.width,helpImg.size.height)];
    helpView.image = helpImg;
    helpView.alpha = 0.f;
    //[self.view addSubview:helpView];

    UIImage* pairImg = [UIImage imageNamed:@"Bluetooth - Pair Button"];
    pairBtn = [[UIButton alloc] initWithFrame:CGRectMake((self.view.frame.size.width-pairImg.size.width)/2.f,455,pairImg.size.width,pairImg.size.height)];
    [pairBtn setImage:pairImg forState:UIControlStateNormal];
    [pairBtn addTarget:self action:@selector(pair:) forControlEvents:UIControlEventTouchUpInside];
    pairBtn.alpha = 0.f;
    [self.view addSubview:pairBtn];

    [UIView animateWithDuration:0.4f animations:^{
        humanView.alpha = 1.f;
        helpView.alpha = 1.f;
        pairBtn.alpha = 1.f;
    }];

}

-(void) viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
    [hev prepare];
    [hev appear];
}

-(void)viewWillDisappear:(BOOL)animated
{
    [super viewWillDisappear:animated];
}

-(UIStatusBarStyle)preferredStatusBarStyle{
    return UIStatusBarStyleLightContent;
}

-(void) hexagonHit:(id)sender
{
    HexagonElementView* obj = (HexagonElementView*)sender;
    if(obj.tag == TAG_BACK_BUTTON)
    {
        [hev disappear];
        [UIView animateWithDuration:0.4 animations:^{
            humanView.alpha = 0.f;
            helpView.alpha = 0.f;
            pairBtn.alpha = 0.f;
            unpairBtn.alpha = 0.f;
            humanGlowView.alpha = 0.f;
            humanOnView.alpha = 0.f;
            sensorsView.alpha = 0.f;
        }];
        [self performSelector:@selector(goBack:) withObject:nil afterDelay:0.4f];
    }
}

-(void) pair:(id)sender
{
    [self animatePairingGlow];
    [pairBtn setEnabled:NO];

    [self performSelector:@selector(pairedSuccessfully:) withObject:nil afterDelay:3.f];
}

-(void) unpair:(id)sender
{
    //[unpairBtn removeFromSuperview];
    
    UIImage* pairImg = [UIImage imageNamed:@"Bluetooth - Pair Button"];
    pairBtn = [[UIButton alloc] initWithFrame:CGRectMake((self.view.frame.size.width-pairImg.size.width)/2.f,455,pairImg.size.width,pairImg.size.height)];
    [pairBtn setImage:pairImg forState:UIControlStateNormal];
    [pairBtn addTarget:self action:@selector(pair:) forControlEvents:UIControlEventTouchUpInside];
    pairBtn.alpha = 0.f;
    [self.view addSubview:pairBtn];

}

-(void)pairedSuccessfully:(id)sender
{
    UIImage* humanOnImg = [UIImage imageNamed:@"Bluetooth - Human On"];
    humanOnView = [[UIImageView alloc] initWithFrame:CGRectMake((self.view.frame.size.width-humanOnImg.size.width)/2.f,110,humanOnImg.size.width,humanOnImg.size.height)];
    humanOnView.image = humanOnImg;
    humanOnView.alpha = 0.f;
    [self.view addSubview:humanOnView];

    //UIImage* sensorsImg = [UIImage imageNamed:@"Bluetooth - Sensors"];
    //sensorsView = [[UIImageView alloc] initWithFrame:CGRectMake((self.view.frame.size.width-sensorsImg.size.width)/2.f,150,sensorsImg.size.width,sensorsImg.size.height)];
    //sensorsView.image = sensorsImg;
    
    //sensorsView = humanOnView;
    //sensorsView.image = humanOnImg;
    
    /*
    UIImage* sensorsImg = [UIImage imageNamed:@"Bluetooth - Human On"];
    sensorsView = [[UIImageView alloc] initWithFrame:CGRectMake((self.view.frame.size.width-sensorsImg.size.width)/2.f,110,sensorsImg.size.width,sensorsImg.size.height)];
    sensorsView.image = sensorsImg;
    sensorsView.alpha = 0.f;
     */
    //[self.view addSubview:sensorsView];


    [humanGlowView.layer removeAllAnimations];
    [UIView animateWithDuration:0.4f delay:0.f options:UIViewAnimationOptionCurveEaseInOut animations:^{
        humanOnView.alpha = 1.f;
        sensorsView.alpha = 1.f;
        humanGlowView.alpha = 0.f;
    } completion:^(BOOL finished) {
        [humanGlowView removeFromSuperview];
        humanGlowView = nil;
        [self animateSensorGlow];
    }];

    [pairBtn removeFromSuperview];

    UIImage* unpairImg = [UIImage imageNamed:@"Bluetooth - Unpair Button"];
    unpairBtn = [[UIButton alloc] initWithFrame:CGRectMake((self.view.frame.size.width-unpairImg.size.width)/2.f,455,unpairImg.size.width,unpairImg.size.height)];
    [unpairBtn setImage:unpairImg forState:UIControlStateNormal];
    [unpairBtn addTarget:self action:@selector(unpair:) forControlEvents:UIControlEventTouchUpInside];
    unpairBtn.alpha = 1.f;
    [self.view addSubview:unpairBtn];

}

-(void)animateSensorGlow
{
    [UIView animateWithDuration:1.5f delay:0.f options:UIViewAnimationOptionAutoreverse|UIViewAnimationOptionCurveEaseInOut|UIViewAnimationOptionRepeat animations:^{
        sensorsView.alpha = 0.5f;
    } completion:^(BOOL finished) {
    }];

}

-(void)animatePairingGlow
{
    if(!humanGlowView)
    {
        UIImage* humanGlowImg = [UIImage imageNamed:@"Bluetooth - Human Glow"];
        humanGlowView = [[UIImageView alloc] initWithFrame:CGRectMake((self.view.frame.size.width-humanGlowImg.size.width)/2.f,99,humanGlowImg.size.width,humanGlowImg.size.height)];
        humanGlowView.image = humanGlowImg;
        [self.view addSubview:humanGlowView];
    }
    humanGlowView.alpha = 0.f;
    [UIView animateWithDuration:0.6f delay:0.f options:UIViewAnimationOptionAutoreverse|UIViewAnimationOptionCurveEaseInOut|UIViewAnimationOptionRepeat animations:^{
        humanGlowView.alpha = 1.f;
    } completion:^(BOOL finished) {
//        if(!paired && finished)
//            [self animatePairingGlow];
    }];
}

-(void)goBack:(id)sender
{
    [self.navigationController popViewControllerAnimated:NO];
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
