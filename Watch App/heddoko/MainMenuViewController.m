//
//  MainMenuViewController.m
//  heddoko
//
//  Created by Antoine Azar on 2014-12-03.
//  Copyright (c) 2014 Mobilogie. All rights reserved.
//

#import "MainMenuViewController.h"
#import "HexagonGridView.h"
#import "HexagonElementView.h"
#import "BluetoothViewController.h"
#import "ActivityViewController.h"

const NSInteger TAG_MM_ACCOUNT = 1;
const NSInteger TAG_MM_BLUETOOTH = 2;
const NSInteger TAG_MM_ACTIVITY = 3;

@interface MainMenuViewController ()

@end

@implementation MainMenuViewController

- (void)viewDidLoad {
    [super viewDidLoad];

    [self setupView];
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
        {0,1},
        {1,1},
        {1,1},
        {0,1},
        {1,0},
        {1,1},
        {1,0},
        {1,0}
    };

    for(int j=0; j<8; j++) {
        for(int i=0; i<2; i++) {
            screenLayout.map[j][i] = l[j][i];
        }
    }
    
    hev.layoutArray = screenLayout;
    [hev setupWithDelegate:self oddOrder:NO];

    HexagonElementView* accountHex = [hev getElementAtKey:@"0,2"];
    [accountHex setTag:TAG_MM_ACCOUNT];
    [accountHex setButtonIcon:[UIImage imageNamed:@"MainMenu - Account Button"]];

    HexagonElementView* bluetoothHex = [hev getElementAtKey:@"1,3"];
    [bluetoothHex setTag:TAG_MM_BLUETOOTH];
    [bluetoothHex setButtonIcon:[UIImage imageNamed:@"MainMenu - Bluetooth Button"]];

    HexagonElementView* activityHex = [hev getElementAtKey:@"0,4"];
    [activityHex setTag:TAG_MM_ACTIVITY];
    [activityHex setButtonIcon:[UIImage imageNamed:@"MainMenu - Running Button"]];
}

-(void) viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
    [hev prepare];
    [hev appear];
}

-(void) viewDidAppear:(BOOL)animated
{
    [super viewDidAppear:animated];

}

-(UIStatusBarStyle)preferredStatusBarStyle{
    return UIStatusBarStyleLightContent;
}

-(void) hexagonHit:(id)sender
{
    HexagonElementView* obj = (HexagonElementView*)sender;
    if(obj.tag == TAG_MM_BLUETOOTH)
    {
        [hev disappear];
        [self performSelector:@selector(goBluetooth:) withObject:nil afterDelay:0.4f];
    }
    else if(obj.tag == TAG_MM_ACTIVITY)
    {
        [hev disappear];
        [self performSelector:@selector(goActivity:) withObject:nil afterDelay:0.4f];
    }
}

-(void)goBluetooth:(id)sender
{
    [self.navigationController pushViewController:[[BluetoothViewController alloc] init] animated:NO];
}

-(void)goActivity:(id)sender
{
    [self.navigationController pushViewController:[[ActivityViewController alloc] init] animated:NO];
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
