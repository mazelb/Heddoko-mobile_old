//
//  XTrainingMenuViewController.m
//  heddoko
//
//  Created by Miguel Garcia Hernandez on 15-12-14.
//  Copyright (c) 2014 Mobilogie. All rights reserved.
//

#import "XTrainingMenuViewController.h"
#import "HexagonElementView.h"
#import "BluetoothLearnViewController.h"

static NSInteger TAG_XT_TRAIN_BUTTON = 1;
static NSInteger TAG_XT_BACK_BUTTON = 5;

@interface XTrainingMenuViewController ()

@end

@implementation XTrainingMenuViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    [self setupView];
}

- (void)viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
    [hev prepare];
    [hev appear];
}

- (UIStatusBarStyle)preferredStatusBarStyle{
    return UIStatusBarStyleLightContent;
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
        {1,0},
        {1,0},
        {0,1},
        {1,1},
        {0,1},
        {1,0},
        {1,1},
        {0,1}
    };
    
    for(int j=0; j<8; j++) {
        for(int i=0; i<2; i++) {
            screenLayout.map[j][i] = l[j][i];
        }
    }
    
    hev.layoutArray = screenLayout;
    [hev setupWithDelegate:self oddOrder:YES];
    
    HexagonElementView* backHex = [hev getElementAtKey:@"0,0"];
    [backHex setTag:TAG_XT_BACK_BUTTON];
    [backHex setButtonIcon:[UIImage imageNamed:@"Back Button"]];
    
    HexagonElementView* trainingHex = [hev getElementAtKey:@"0,1"];
    [trainingHex setTag:TAG_XT_TRAIN_BUTTON];
    [trainingHex setButtonIcon:[UIImage imageNamed:@"XTraining - Squat Button"]];
    
    HexagonElementView* squatHex = [hev getElementAtKey:@"1,2"];
    [squatHex setButtonIcon:[UIImage imageNamed:@"XTraining - Squat 2 Button"]];
    
    HexagonElementView* pushupHex = [hev getElementAtKey:@"0,3"];
    [pushupHex setButtonIcon:[UIImage imageNamed:@"XTraining - Pushup Button"]];
    
    HexagonElementView* stretchHex = [hev getElementAtKey:@"1,4"];
    [stretchHex setButtonIcon:[UIImage imageNamed:@"XTraining - Stretch Button"]];
    
}

- (void)hexagonHit:(id)sender
{
    HexagonElementView* obj = (HexagonElementView*)sender;
    
    if (obj.tag == TAG_XT_BACK_BUTTON) {
        [hev disappear];
        [self performSelector:@selector(goBack:) withObject:nil afterDelay:0.4f];
    }
    if (obj.tag == TAG_XT_TRAIN_BUTTON) {
        [hev disappear];
        [self performSelector:@selector(goBluetoothLearning:) withObject:nil afterDelay:0.4f];
    }
}

- (void)goBack:(id)sender
{
    [self.navigationController popViewControllerAnimated:NO];
}

- (void)goBluetoothLearning:(id)sender
{
    [self.navigationController pushViewController:[[BluetoothLearnViewController alloc] init] animated:NO];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
