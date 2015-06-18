//
//  ActivityViewController.m
//  heddoko
//
//  Created by Antoine Azar on 2014-12-04.
//  Copyright (c) 2014 Mobilogie. All rights reserved.
//

#import "ActivityViewController.h"
#import "HexagonGridView.h"
#import "HexagonElementView.h"
#import "XTrainingMenuViewController.h"

const NSInteger TAG_AC_GOLF = 1;
const NSInteger TAG_AC_YOGA = 2;
const NSInteger TAG_AC_XTRAINING = 3;
const NSInteger TAG_AC_BBALL = 4;
static const NSInteger TAG_BACK_BUTTON = 5;

@interface ActivityViewController ()

@end

@implementation ActivityViewController

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

    
    hev = [[HexagonGridView alloc] initWithFrame:CGRectMake(0, 150, f.size.width, f.size.height-99)];
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
    [backHex setTag:TAG_BACK_BUTTON];
    [backHex setButtonIcon:[UIImage imageNamed:@"Back Button"]];

    HexagonElementView* golfHex = [hev getElementAtKey:@"0,3"];
    [golfHex setTag:TAG_AC_GOLF];
    [golfHex setButtonIcon:[UIImage imageNamed:@"Activity - Golf Button"]];

    HexagonElementView* yogaHex = [hev getElementAtKey:@"1,2"];
    [yogaHex setTag:TAG_AC_YOGA];
    [yogaHex setButtonIcon:[UIImage imageNamed:@"Activity - Yoga Button"]];

    HexagonElementView* xtrainingHex = [hev getElementAtKey:@"0,1"];
    [xtrainingHex setTag:TAG_AC_XTRAINING];
    [xtrainingHex setButtonIcon:[UIImage imageNamed:@"Activity - XTraining Button"]];

    HexagonElementView* bballHex = [hev getElementAtKey:@"1,4"];
    [bballHex setTag:TAG_AC_BBALL];
    [bballHex setButtonIcon:[UIImage imageNamed:@"Activity - BBall Button"]];

    UIImage* learnImg = [UIImage imageNamed:@"Activity - Title Learn On"];
    learnBtn = [[UIButton alloc] initWithFrame:CGRectMake(10, 90, learnImg.size.width, learnImg.size.height)];
    [learnBtn setImage:learnImg forState:UIControlStateNormal];
    [learnBtn addTarget:self action:@selector(goLearn) forControlEvents:UIControlEventTouchUpInside];
    learnBtn.alpha = 0.f;
    [self.view addSubview:learnBtn];

    UIImage* workoutImg = [UIImage imageNamed:@"Activity - Title Workout Off"];
    workoutBtn = [[UIButton alloc] initWithFrame:CGRectMake(90, 90, workoutImg.size.width, workoutImg.size.height)];
    [workoutBtn setImage:workoutImg forState:UIControlStateNormal];
    [workoutBtn addTarget:self action:@selector(goWorkout) forControlEvents:UIControlEventTouchUpInside];
    workoutBtn.alpha = 0.f;
    [self.view addSubview:workoutBtn];

    UIImage* challengeImg = [UIImage imageNamed:@"Activity - Title Challenge"];
    challengeBtn = [[UIButton alloc] initWithFrame:CGRectMake(200, 90, challengeImg.size.width, challengeImg.size.height)];
    [challengeBtn setImage:challengeImg forState:UIControlStateNormal];
    [challengeBtn addTarget:self action:@selector(goChallenge) forControlEvents:UIControlEventTouchUpInside];
    challengeBtn.alpha = 0.f;
    [self.view addSubview:challengeBtn];

    UIImage* lineImg = [UIImage imageNamed:@"Activity - Line"];
    lineView = [[UIImageView alloc] initWithFrame:CGRectMake(learnBtn.frame.origin.x, 112, learnBtn.frame.size.width, lineImg.size.height)];
    lineView.image = lineImg;
    lineView.alpha = 0.f;
    [self.view addSubview:lineView];
    
    [learnBtn setUserInteractionEnabled:NO];
    [workoutBtn setUserInteractionEnabled:NO];
    [challengeBtn setUserInteractionEnabled:NO];
    
}

- (HexagonGridView*)setupLearnGrid
{
    CGRect f = self.view.frame;
    learnGrid = [[HexagonGridView alloc] initWithFrame:CGRectMake(0, 150, f.size.width, f.size.height-99)];
    layout learnLayout;
    
    int l[8][2] =
    {
        {1,0},
        {1,0},
        {1,1},
        {1,1},
        {1,1},
        {1,1},
        {1,1},
        {0,1}
    };
    
    for(int j=0; j<8; j++) {
        for(int i=0; i<2; i++) {
            learnLayout.map[j][i] = l[j][i];
        }
    }
    learnGrid.layoutArray = learnLayout;
    return learnGrid;
}

- (HexagonGridView*)setupWorkoutGrid
{
    CGRect f = self.view.frame;
    workoutGrid = [[HexagonGridView alloc] initWithFrame:CGRectMake(0, 150, f.size.width, f.size.height-99)];
    layout workoutLayout;
    
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
            workoutLayout.map[j][i] = l[j][i];
        }
    }
    workoutGrid.layoutArray = workoutLayout;
    return workoutGrid;
}

- (void)viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
    [hev prepare];
    [hev appear];
}

- (void)viewDidAppear:(BOOL)animated{
    
    [UIView animateWithDuration:0.4f animations:^{
        learnBtn.alpha = 1.f;
        workoutBtn.alpha = 1.f;
        challengeBtn.alpha = 1.f;
        lineView.alpha = 1.f;
    } completion:^(BOOL finished) {
    }];
}


- (UIStatusBarStyle)preferredStatusBarStyle{
    return UIStatusBarStyleLightContent;
}

- (void)hexagonHit:(id)sender
{
    HexagonElementView* obj = (HexagonElementView*)sender;
    if(obj.tag == TAG_BACK_BUTTON)
    {
        [hev disappear];
        [UIView animateWithDuration:0.4 animations:^{
            learnBtn.alpha = 0.f;
            workoutBtn.alpha = 0.f;
            challengeBtn.alpha = 0.f;
            lineView.alpha = 0.f;
        }];
        [self performSelector:@selector(goBack:) withObject:nil afterDelay:0.4f];
    }
    if (obj.tag == TAG_AC_XTRAINING) {
        [hev disappear];
        [UIView animateWithDuration:0.4 animations:^{
            learnBtn.alpha = 0.f;
            workoutBtn.alpha = 0.f;
            challengeBtn.alpha = 0.f;
            lineView.alpha = 0.f;
        }];
        [self performSelector:@selector(goXTraining) withObject:nil afterDelay:0.4f];
    }
}

-(void)goBack:(id)sender
{
    [self.navigationController popViewControllerAnimated:NO];
}

- (void)goXTraining
{
    [self.navigationController pushViewController:[[XTrainingMenuViewController alloc] init] animated:NO];
}

- (void)goLearn
{
    [learnBtn setUserInteractionEnabled:NO];
    [workoutBtn setUserInteractionEnabled:YES];
    [challengeBtn setUserInteractionEnabled:YES];
    
    [UIView animateWithDuration:0.4 animations:^{
        
        CGRect f = lineView.frame;
        f.origin.x = learnBtn.frame.origin.x;
        f.size.width = learnBtn.frame.size.width;
        lineView.frame = f;
    }];
    [hev rearrange];
}

- (void)goWorkout
{
    [learnBtn setUserInteractionEnabled:YES];
    [workoutBtn setUserInteractionEnabled:NO];
    [challengeBtn setUserInteractionEnabled:YES];
    
    [UIView animateWithDuration:0.4 animations:^{
        CGRect f = lineView.frame;
        f.origin.x = workoutBtn.frame.origin.x;
        f.size.width = workoutBtn.frame.size.width;
        lineView.frame = f;
    }];
    [hev rearrange];
}

- (void)goChallenge
{
    [learnBtn setUserInteractionEnabled:YES];
    [workoutBtn setUserInteractionEnabled:YES];
    [challengeBtn setUserInteractionEnabled:NO];
    
    [UIView animateWithDuration:0.4 animations:^{
        CGRect f = lineView.frame;
        f.origin.x = challengeBtn.frame.origin.x;
        f.size.width = challengeBtn.frame.size.width;
        lineView.frame = f;
    }];
    [hev rearrange];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
