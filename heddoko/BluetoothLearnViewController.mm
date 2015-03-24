//
//  BluetoothLearnViewController.m
//  heddoko
//
//  Created by Miguel Garcia Hernandez on 12-12-14.
//  Copyright (c) 2014 Mobilogie. All rights reserved.
//

#import "BluetoothLearnViewController.h"
#import "HexagonGridView.h"
#import "HexagonElementView.h"
#import "UICountingLabel.h"
#import "MRCircularProgressView.h"

#define GREEN_COLOR [UIColor colorWithRed:21/255.0f green:210/255.0f blue:128/255.0f alpha:1]
#define GRAY_COLOR [UIColor colorWithRed:142/255.0f green:143/255.0f blue:144/255.0f alpha:1]
#define DARKBLUE_COLOR [UIColor colorWithRed:(43/255.0) green:(57/255.0) blue:(70/255.0) alpha:1]
#define FONT_REGULAR @"MyriadPro-Regular"
#define FONT_SEMIBOLD @"MyriadPro-Semibold"

#define IS_IPHONE_5 ( fabs( ( double )[ [ UIScreen mainScreen ] bounds ].size.height - ( double )568 ) < DBL_EPSILON )

const NSInteger TAG_BACK_BUTTON_2 = 1;

@interface BluetoothLearnViewController ()

@end

@implementation BluetoothLearnViewController

static RecordingData* baseRecording;
static RecordingData* actualRecording;

- (void)viewDidLoad {
    [super viewDidLoad];
    [self setNeedsStatusBarAppearanceUpdate];
    
    unityView = GetAppController().unityView;
    
    [self setupBackgroundToView:self.view];
    [self.view addSubview:unityView];
    
    [self setupLearnView];
    [self.view addSubview:learnView];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

-(void) viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
    [hev prepare];
    [hev appear];
}

- (UIStatusBarStyle)preferredStatusBarStyle{
    return UIStatusBarStyleLightContent;
}

- (void)setupBackgroundToView:(UIView *) aView
{
    UIImageView* imgView = [[UIImageView alloc] initWithFrame:aView.frame];
    UIImage* backgroundImg = [UIImage imageNamed:@"Background"];
    imgView.image = backgroundImg;
    [aView addSubview:imgView];
    
    UIImage* logoImg = [UIImage imageNamed:@"Login - Top"];
    UIImageView* logoView = [[UIImageView alloc] initWithFrame:CGRectMake((aView.frame.size.width-logoImg.size.width)/2.f, 45, logoImg.size.width, logoImg.size.height)];
    logoView.image = logoImg;
    [aView addSubview:logoView];
    
    UIImage* hexagonMenuImg = [UIImage imageNamed:@"Menu - Hexagon"];
    UIImageView* hexagonMenuView = [[UIImageView alloc] initWithFrame:CGRectMake(9, 40, hexagonMenuImg.size.width, hexagonMenuImg.size.height)];
    hexagonMenuView.image = hexagonMenuImg;
    [aView addSubview:hexagonMenuView];
    
}


- (void)setupLearnView {
    
    learnView = [[UIView alloc] initWithFrame:self.view.frame];
    //[self setupBackgroundToView:learnView];
    
    // Unity
    [unityView setAlpha:0.f];
    [self loadUnityScene:"Learn"];
    //[learnView addSubview:unityView];
    
    
    // Setup View Layout
    
    float verticalOffset = 0.f;
    if (!IS_IPHONE_5) {
        verticalOffset = -55.f;
    }
    
    UIImage* stepsLearnImg = [UIImage imageNamed:@"Bluetooth Steps - Learn"];
    UIImageView* stepsLearnView = [[UIImageView alloc] initWithFrame:CGRectMake((self.view.frame.size.width-stepsLearnImg.size.width)/2.f,80,stepsLearnImg.size.width,stepsLearnImg.size.height)];
    stepsLearnView.image = stepsLearnImg;
    [stepsLearnView setAlpha:0.f];
    [learnView addSubview:stepsLearnView];
    
    UIImage* humanImg = [UIImage imageNamed:@"Bluetooth Learn - Human Training"];
    humanView = [[UIImageView alloc] initWithFrame:CGRectMake((self.view.frame.size.width-humanImg.size.width)/2.f,120,humanImg.size.width,humanImg.size.height)];
    humanView.image = humanImg;
    [humanView setAlpha:0.f];
    //[learnView addSubview:humanView];
    
    UIImage* trainImg = [UIImage imageNamed:@"Bluetooth Learn - Train Button"];
    trainBtn = [[UIButton alloc] initWithFrame:CGRectMake((self.view.frame.size.width-trainImg.size.width)/1.35f, 500 + verticalOffset, trainImg.size.width,trainImg.size.height)];
    [trainBtn setImage:trainImg forState:UIControlStateNormal];
    [trainBtn setAlpha:0.f];
    [trainBtn addTarget:self action:@selector(goTrain:) forControlEvents:UIControlEventTouchUpInside];
    [learnView addSubview:trainBtn];
    
    UIImage* cancelImg = [UIImage imageNamed:@"Bluetooth Learn - Cancel Button"];
    UIButton* cancelBtn = [[UIButton alloc] initWithFrame:CGRectMake((self.view.frame.size.width-cancelImg.size.width)/3.25f, 500 + verticalOffset, cancelImg.size.width,cancelImg.size.height)];
    [cancelBtn setImage:cancelImg forState:UIControlStateNormal];
    [cancelBtn addTarget:self action:@selector(backToTrainMenu:) forControlEvents:UIControlEventTouchUpInside];
    [cancelBtn setAlpha:0.f];
    [learnView addSubview:cancelBtn];
    
    // Difficulty Indicator.
    
    MRCircularProgressView *difficultyView = [[MRCircularProgressView alloc] initWithFrame:CGRectMake((self.view.frame.size.width / 25.f), 370 + verticalOffset, 90, 90)];
    difficultyView.backgroundColor = [UIColor colorWithWhite:0.0 alpha:0.0];
    difficultyView.opaque = NO;
    [difficultyView setProgress:0.5f duration:1.f];
    [difficultyView setWrapperArcWidth:14.f];
    [difficultyView setProgressArcWidth:14.f];
    [difficultyView setWrapperColor:DARKBLUE_COLOR];
    [difficultyView setProgressColor:GREEN_COLOR];
    [difficultyView setAlpha:0.f];
    [learnView addSubview:difficultyView];
    
    UIImage* difficultyImg = [UIImage imageNamed:@"Indicator Icon - Difficulty"];
    UIImageView* difficultyIconView = [[UIImageView alloc] initWithFrame:CGRectMake(45, 414 + verticalOffset ,difficultyImg.size.width,difficultyImg.size.height)];
    difficultyIconView.image = difficultyImg;
    [difficultyIconView setAlpha:0.f];
    [learnView addSubview:difficultyIconView];
    
    UILabel* difficultyNameLbl = [[UICountingLabel alloc] initWithFrame:CGRectMake(34, 445 + verticalOffset , 60, 15)];
    [difficultyNameLbl setText:@"DIFFICULTY"];
    [difficultyNameLbl setTextColor:GRAY_COLOR];
    [difficultyNameLbl setFont:[UIFont fontWithName:FONT_SEMIBOLD size:10.f]];
    [learnView addSubview:difficultyNameLbl];
    
    UICountingLabel* difficultyCountLbl = [[UICountingLabel alloc] initWithFrame:CGRectMake(35, 460 + verticalOffset, 35, 25)];
    [difficultyCountLbl setTextColor:GREEN_COLOR];
    [difficultyCountLbl setFont:[UIFont fontWithName:FONT_REGULAR size:28]];
    difficultyCountLbl.format = @"%.1f";
    [difficultyCountLbl countFrom:0 to:2.5f withDuration:1.f];
    [difficultyCountLbl setAlpha:0.f];
    [learnView addSubview:difficultyCountLbl];
    
    UILabel* difficultyMaxLbl = [[UILabel alloc] initWithFrame:CGRectMake(difficultyCountLbl.frame.size.width + difficultyCountLbl.frame.origin.x, difficultyCountLbl.frame.origin.y + 8, 60, 15)];
    [difficultyMaxLbl setText:@"/5"];
    [difficultyMaxLbl setTextColor:GRAY_COLOR];
    [difficultyMaxLbl setFont:[UIFont fontWithName:FONT_SEMIBOLD size:14.f]];
    [learnView addSubview:difficultyMaxLbl];
    
    // End Difficulty Indicator.
    
    // Intensity Indicator.
    
    MRCircularProgressView *intensityView = [[MRCircularProgressView alloc] initWithFrame:CGRectMake(220, 370 + verticalOffset, 90, 90)];
    intensityView.backgroundColor = [UIColor colorWithWhite:0.0 alpha:0.0];
    intensityView.opaque = NO;
    [intensityView setProgress:1.0f duration:1.f];
    [intensityView setWrapperArcWidth:14.f];
    [intensityView setProgressArcWidth:14.f];
    [intensityView setWrapperColor:DARKBLUE_COLOR];
    [intensityView setProgressColor:GREEN_COLOR];
    [intensityView setAlpha:0.f];
    [learnView addSubview:intensityView];
    
    UIImage* intensityImg = [UIImage imageNamed:@"Indicator Icon - Intensity"];
    UIImageView* intensityIconView = [[UIImageView alloc] initWithFrame:CGRectMake(257,408 + verticalOffset,intensityImg.size.width,intensityImg.size.height)];
    intensityIconView.image = intensityImg;
    [intensityIconView setAlpha:0.f];
    [learnView addSubview:intensityIconView];
    
    UILabel* intensityNameLbl = [[UICountingLabel alloc] initWithFrame:CGRectMake(243, 445 + verticalOffset, 60, 15)];
    [intensityNameLbl setText:@"INTENSITY"];
    [intensityNameLbl setTextColor:GRAY_COLOR];
    [intensityNameLbl setFont:[UIFont fontWithName:FONT_SEMIBOLD size:10.f]];
    [learnView addSubview:intensityNameLbl];
    
    UICountingLabel* intensityCountLbl = [[UICountingLabel alloc] initWithFrame:CGRectMake(253, 460 + verticalOffset, 16, 25)];
    [intensityCountLbl setTextColor:GREEN_COLOR];
    [intensityCountLbl setFont:[UIFont fontWithName:FONT_REGULAR size:28]];
    intensityCountLbl.format = @"%d";
    [intensityCountLbl countFrom:0 to:5 withDuration:1.f];
    [intensityCountLbl setAlpha:0.f];
    [learnView addSubview:intensityCountLbl];
    
    UILabel* intensityMaxLbl = [[UILabel alloc] initWithFrame:CGRectMake(intensityCountLbl.frame.size.width + intensityCountLbl.frame.origin.x, intensityCountLbl.frame.origin.y + 8, 60, 15)];
    [intensityMaxLbl setText:@"/5"];
    [intensityMaxLbl setTextColor:GRAY_COLOR];
    [intensityMaxLbl setFont:[UIFont fontWithName:FONT_SEMIBOLD size:14.f]];
    [learnView addSubview:intensityMaxLbl];
    
    // End Intensity Indicator.
    
    UIImage* miniBodyImg = [UIImage imageNamed:@"Bluetooth Learn - Mini Body"];
    UIImageView* miniBodyView = [[UIImageView alloc] initWithFrame:CGRectMake((learnView.frame.size.width-miniBodyImg.size.width)/2.f, 380 + verticalOffset, miniBodyImg.size.width,miniBodyImg.size.height)];
    miniBodyView.image = miniBodyImg;
    [miniBodyView setAlpha:0.f];
    [learnView addSubview:miniBodyView];
    
    [UIView animateWithDuration:0.4f animations:^{
        trainBtn.alpha = 1.f;
        humanView.alpha = 1.f;
        cancelBtn.alpha = 1.f;
        difficultyView.alpha = 1.f;
        intensityView.alpha = 1.f;
        stepsLearnView.alpha = 1.f;
        difficultyCountLbl.alpha = 1.f;
        intensityCountLbl.alpha = 1.f;
        
        difficultyIconView.alpha = 1.f;
        intensityIconView.alpha = 1.f;
        miniBodyView.alpha = 1.f;
        
    } completion:^(BOOL finished) {
        [UIView animateWithDuration:0.4f animations:^{
            unityView.alpha = 1.f;
        }];
    }];
}

- (void)setupTrainView
{
    float verticalOffset = 0.f;
    if (!IS_IPHONE_5) {
        verticalOffset = -55.f;
    }
    
    trainView = [[UIView alloc] initWithFrame:self.view.frame];
    //[self setupBackgroundToView:trainView];
    
    // UNITY VIEW
    [unityView setAlpha:0.f];
    [self loadUnityScene:"MainScene"];
    
    //[trainView addSubview:unityView];
    
    
    // END UNITY VIEW
    
    UIImage* stepsTrainImg = [UIImage imageNamed:@"Bluetooth Steps - Train"];
    UIImageView* stepsTrainView = [[UIImageView alloc] initWithFrame:CGRectMake((self.view.frame.size.width-stepsTrainImg.size.width)/2.f,80,stepsTrainImg.size.width,stepsTrainImg.size.height)];
    stepsTrainView.image = stepsTrainImg;
    [stepsTrainView setAlpha:0.f];
    [trainView addSubview:stepsTrainView];
    
    UIButton* invisibleButton = [[UIButton alloc] initWithFrame:self.view.frame];
    invisibleButton.opaque = NO;
    invisibleButton.backgroundColor = [UIColor clearColor];
    [invisibleButton addTarget:self action:@selector(resetOrientations) forControlEvents:UIControlEventTouchUpInside];
    [trainView addSubview:invisibleButton];
    
    UIImage* miniBodyImg = [UIImage imageNamed:@"Bluetooth Train - Mini Body"];
    UIButton* miniBodyBtn = [[UIButton alloc] initWithFrame:CGRectMake((learnView.frame.size.width-miniBodyImg.size.width)/2.f, 415 + verticalOffset, miniBodyImg.size.width,miniBodyImg.size.height)];
    [miniBodyBtn setImage:miniBodyImg forState:UIControlStateNormal];
    [miniBodyBtn addTarget:self action:@selector(goAnalyze:) forControlEvents:UIControlEventTouchUpInside];
    [miniBodyBtn setAlpha:0.f];
    [trainView addSubview:miniBodyBtn];
    
    [UIView animateWithDuration:0.4f animations:^{
        
        [miniBodyBtn setAlpha:1.f];
        [stepsTrainView setAlpha:1.f];
        
    } completion:^(BOOL finished) {
        [UIView animateWithDuration:0.5f animations:^{
            unityView.alpha = 1.f;
        } completion:^(BOOL finished) {
            [self readyUnityModel];
        }];
    }];
}

- (void)setupAnalyzeView
{
    
    float verticalOffset = 0.f;
    if (!IS_IPHONE_5) {
        verticalOffset = -55.f;
    }
    
    analyzeView = [[UIView alloc] initWithFrame:self.view.frame];
    //[self setupBackgroundToView:analyzeView];
    
    // UNITY VIEW
    [unityView setAlpha:0.f];
    //[self analyzeUnityModel];
    [self loadUnityScene:"Analyze"];
    //[self loadUnityScene:"MainScene"];
    //[analyzeView addSubview:unityView];
    
    UIImage* stepsAnalyzeImg = [UIImage imageNamed:@"Bluetooth Steps - Analyze"];
    UIImageView* stepsAnalyzeView = [[UIImageView alloc] initWithFrame:CGRectMake((self.view.frame.size.width-stepsAnalyzeImg.size.width)/2.f,80,stepsAnalyzeImg.size.width,stepsAnalyzeImg.size.height)];
    stepsAnalyzeView.image = stepsAnalyzeImg;
    [stepsAnalyzeView setAlpha:0.f];
    [analyzeView addSubview:stepsAnalyzeView];
    
    UIImage* humanBackImg = [UIImage imageNamed:@"Bluetooth Learn - Human Training"];
    UIImageView* humanBackView = [[UIImageView alloc] initWithFrame:CGRectMake((self.view.frame.size.width-humanBackImg.size.width)/1.3f,120, humanBackImg.size.width, humanBackImg.size.height)];
    humanBackView.image = humanBackImg;
    [humanBackView setAlpha:0.f];
    //[analyzeView addSubview:humanBackView];
    
    UIImage* humanGreenImg = [UIImage imageNamed:@"Bluetooth Train - Human Training"];
    UIImageView* humanGreenView = [[UIImageView alloc] initWithFrame:CGRectMake((self.view.frame.size.width-humanGreenImg.size.width)/2.f,120,humanGreenImg.size.width,humanGreenImg.size.height)];
    humanGreenView.image = humanGreenImg;
    [humanGreenView setAlpha:0.f];
    //[analyzeView addSubview:humanGreenView];
    
    
    UIImage *retryImg = [UIImage imageNamed:@"Bluetooth Analyze - Retry Button"];
    UIButton *retryBtn = [[UIButton alloc] initWithFrame:CGRectMake((analyzeView.frame.size.width-retryImg.size.width)/1.35f,500 + verticalOffset,retryImg.size.width,retryImg.size.height)];
    [retryBtn setImage:retryImg forState:UIControlStateNormal];
    [retryBtn addTarget:self action:@selector(goLearn:) forControlEvents:UIControlEventTouchUpInside];
    [retryBtn setAlpha:0.f];
    [analyzeView addSubview:retryBtn];
    
    UIImage *doneImg = [UIImage imageNamed:@"Bluetooth Analyze - Done Button"];
    UIButton *doneBtn = [[UIButton alloc] initWithFrame:CGRectMake((analyzeView.frame.size.width-doneImg.size.width)/3.25f,500 + verticalOffset,doneImg.size.width,doneImg.size.height)];
    [doneBtn setImage:doneImg forState:UIControlStateNormal];
    [doneBtn addTarget:self action:@selector(backToTrainMenu:) forControlEvents:UIControlEventTouchUpInside];
    [doneBtn setAlpha:0.f];
    [analyzeView addSubview:doneBtn];
    
    // Accuracy Indicator.
    
    //CGFloat accuracy = [UnityMovementData compareRecordingAccuracy];
    
    MRCircularProgressView *accuracyView = [[MRCircularProgressView alloc] initWithFrame:CGRectMake((analyzeView.frame.size.width - 90)/ 2.f, 370 + verticalOffset, 90, 90)];
    accuracyView.backgroundColor = [UIColor colorWithWhite:0.0 alpha:0.0];
    accuracyView.opaque = NO;
    //[accuracyView setProgress:accuracy duration:1.f];
    [accuracyView setWrapperArcWidth:14.f];
    [accuracyView setProgressArcWidth:14.f];
    [accuracyView setWrapperColor:DARKBLUE_COLOR];
    [accuracyView setProgressColor:GREEN_COLOR];
    [accuracyView setAlpha:0.f];
    [analyzeView addSubview:accuracyView];
    
    UIImage* accuracyImg = [UIImage imageNamed:@"Indicator Icon - Precision"];
    UIImageView* accuracyIconView = [[UIImageView alloc] initWithFrame:CGRectMake((analyzeView.frame.size.width - accuracyImg.size.width)/2,410 + verticalOffset,accuracyImg.size.width,accuracyImg.size.height)];
    accuracyIconView.image = accuracyImg;
    [accuracyIconView setAlpha:0.f];
    [analyzeView addSubview:accuracyIconView];
    
    UILabel* accuracyNameLbl = [[UICountingLabel alloc] initWithFrame:CGRectMake((analyzeView.frame.size.width-50)/2, 445 + verticalOffset, 50, 10)];
    [accuracyNameLbl setText:@"ACCURACY"];
    [accuracyNameLbl setTextColor:GRAY_COLOR];
    [accuracyNameLbl setFont:[UIFont fontWithName:FONT_SEMIBOLD size:10.f]];
    [analyzeView addSubview:accuracyNameLbl];
    
    UICountingLabel* accuracyCountLbl = [[UICountingLabel alloc] initWithFrame:CGRectMake((analyzeView.frame.size.width-40)/2, 460 + verticalOffset, 40, 25)];
    [accuracyCountLbl setTextColor:GREEN_COLOR];
    [accuracyCountLbl setTextAlignment:NSTextAlignmentRight];
    [accuracyCountLbl setMinimumScaleFactor:0.5f];
    [accuracyCountLbl setAdjustsFontSizeToFitWidth:YES];
    [accuracyCountLbl setFont:[UIFont fontWithName:FONT_REGULAR size:28]];
    accuracyCountLbl.format = @"%d";
    //[accuracyCountLbl countFrom:0 to:accuracy*100.f withDuration:2.f];
    [accuracyCountLbl setAlpha:0.f];
    [analyzeView addSubview:accuracyCountLbl];
    
    UILabel* accuracyPercentLbl = [[UILabel alloc] initWithFrame:CGRectMake(accuracyCountLbl.frame.size.width + accuracyCountLbl.frame.origin.x, accuracyCountLbl.frame.origin.y + 8, 60, 15)];
    [accuracyPercentLbl setText:@"%"];
    [accuracyPercentLbl setTextColor:GREEN_COLOR];
    [accuracyPercentLbl setFont:[UIFont fontWithName:FONT_REGULAR size:14.f]];
    [analyzeView addSubview:accuracyPercentLbl];
    
    // End Accuracy Indicator.
    
    // Calories Indicator.
    
    UIImage* fireIcon = [UIImage imageNamed:@"Indicator Icon - Calories"];
    UIImageView* caloriesView = [[UIImageView alloc] initWithFrame:CGRectMake(((analyzeView.frame.size.width * 0.33) - (fireIcon.size.width/2))/2, 385 + verticalOffset, fireIcon.size.width/2, fireIcon.size.height/2)];
    caloriesView.image = fireIcon;
    [analyzeView addSubview:caloriesView];
    
    UILabel* caloriesNameLbl = [[UICountingLabel alloc] initWithFrame:CGRectMake(((analyzeView.frame.size.width * 0.33)-50)/2, 445 + verticalOffset, 50, 10)];
    [caloriesNameLbl setText:@"CALORIES"];
    [caloriesNameLbl setTextColor:GRAY_COLOR];
    [caloriesNameLbl setFont:[UIFont fontWithName:FONT_SEMIBOLD size:10.f]];
    [analyzeView addSubview:caloriesNameLbl];
    
    UICountingLabel* caloriesCountLbl = [[UICountingLabel alloc] initWithFrame:CGRectMake(((analyzeView.frame.size.width * 0.33)-50)/2, 460 + verticalOffset, 50, 25)];
    [caloriesCountLbl setTextColor:GREEN_COLOR];
    [caloriesCountLbl setFont:[UIFont fontWithName:FONT_REGULAR size:28]];
    caloriesCountLbl.format = @"%d";
    [caloriesCountLbl countFrom:0 to:422.f withDuration:1.f];
    [caloriesCountLbl setAlpha:0.f];
    [analyzeView addSubview:caloriesCountLbl];
    
    // End Calories Indicator.
    
    // Evolution Indicator.
    
    UILabel* evolutionNameLbl = [[UICountingLabel alloc] initWithFrame:CGRectMake(235, 445 + verticalOffset, 55, 10)];
    [evolutionNameLbl setText:@"EVOLUTION"];
    [evolutionNameLbl setTextColor:GRAY_COLOR];
    [evolutionNameLbl setFont:[UIFont fontWithName:FONT_SEMIBOLD size:10.f]];
    [analyzeView addSubview:evolutionNameLbl];
    
    UICountingLabel* evolutionCountLbl = [[UICountingLabel alloc] initWithFrame:CGRectMake(235, 460 + verticalOffset, 50, 25)];
    [evolutionCountLbl setTextColor:GREEN_COLOR];
    [evolutionCountLbl setFont:[UIFont fontWithName:FONT_REGULAR size:28]];
    evolutionCountLbl.format = @"+ %d";
    [evolutionCountLbl countFrom:0 to:8.f withDuration:0.8f];
    [evolutionCountLbl setAlpha:0.f];
    [analyzeView addSubview:evolutionCountLbl];
    
    UILabel* evolutionPercentLbl = [[UILabel alloc] initWithFrame:CGRectMake((evolutionCountLbl.frame.size.width + evolutionCountLbl.frame.origin.x) - 10, evolutionCountLbl.frame.origin.y + 8, 60, 15)];
    [evolutionPercentLbl setText:@"%"];
    [evolutionPercentLbl setTextColor:GREEN_COLOR];
    [evolutionPercentLbl setFont:[UIFont fontWithName:FONT_REGULAR size:14.f]];
    [analyzeView addSubview:evolutionPercentLbl];

    // Green Bars
    
    UIView* barEvo1 = [[UIView alloc] initWithFrame:CGRectMake(238, 433 - 5 + verticalOffset, 9, 2)];
    barEvo1.backgroundColor = GREEN_COLOR;
    
    UIView* barEvo2 = [[UIView alloc] initWithFrame:CGRectMake(238 + 12, 433 - 5 + verticalOffset, 9, 2)];
    barEvo2.backgroundColor = GREEN_COLOR;
    
    UIView* barEvo3 = [[UIView alloc] initWithFrame:CGRectMake(238 + (12 * 2), 433 - 5 + verticalOffset, 9, 2)];
    barEvo3.backgroundColor = GREEN_COLOR;
    
    UIView* barEvo4 = [[UIView alloc] initWithFrame:CGRectMake(238 + (12 * 3), 433 - 5 + verticalOffset, 9, 2)];
    barEvo4.backgroundColor = GREEN_COLOR;
    
    float vPositionEv1 = barEvo1.frame.origin.y + barEvo1.frame.size.height;
    float vPositionEv2 = barEvo2.frame.origin.y + barEvo2.frame.size.height;
    float vPositionEv3 = barEvo3.frame.origin.y + barEvo3.frame.size.height;
    float vPositionEv4 = barEvo4.frame.origin.y + barEvo4.frame.size.height;
    
    [UIView animateWithDuration:1.f animations:^{
        barEvo1.transform = CGAffineTransformScale(barEvo1.transform, 1.f, 11.f);
        barEvo2.transform = CGAffineTransformScale(barEvo2.transform, 1.f, 14.f);
        barEvo3.transform = CGAffineTransformScale(barEvo3.transform, 1.f, 16.f);
        barEvo4.transform = CGAffineTransformScale(barEvo4.transform, 1.f, 14.f);
        
        CGRect f = barEvo1.frame;
        f.origin.y = vPositionEv1 - barEvo1.frame.size.height;
        barEvo1.frame = f;
        
        CGRect f2 = barEvo2.frame;
        f2.origin.y = vPositionEv2 - barEvo2.frame.size.height;
        barEvo2.frame = f2;
        
        CGRect f3 = barEvo3.frame;
        f3.origin.y = vPositionEv3 - barEvo3.frame.size.height;
        barEvo3.frame = f3;
        
        CGRect f4 = barEvo4.frame;
        f4.origin.y = vPositionEv4 - barEvo4.frame.size.height;
        barEvo4.frame = f4;
    }];
    
    [analyzeView addSubview:barEvo1];
    [analyzeView addSubview:barEvo2];
    [analyzeView addSubview:barEvo3];
    [analyzeView addSubview:barEvo4];

    // Gray bars
    
    UIView* bar1 = [[UIView alloc] initWithFrame:CGRectMake(238, 433 + verticalOffset, 9, 5)];
    bar1.backgroundColor = DARKBLUE_COLOR;
    
    UIView* bar2 = [[UIView alloc] initWithFrame:CGRectMake(238 + 12, 433 + verticalOffset, 9, 5)];
    bar2.backgroundColor = DARKBLUE_COLOR;
    
    UIView* bar3 = [[UIView alloc] initWithFrame:CGRectMake(238 + (12 * 2), 433 + verticalOffset, 9, 5)];
    bar3.backgroundColor = DARKBLUE_COLOR;
    
    UIView* bar4 = [[UIView alloc] initWithFrame:CGRectMake(238 + (12 * 3), 433 + verticalOffset, 9, 5)];
    bar4.backgroundColor = DARKBLUE_COLOR;
    
    float vPosition1 = bar1.frame.origin.y + bar1.frame.size.height;
    float vPosition2 = bar2.frame.origin.y + bar2.frame.size.height;
    float vPosition3 = bar3.frame.origin.y + bar3.frame.size.height;
    float vPosition4 = bar4.frame.origin.y + bar4.frame.size.height;
    
    [UIView animateWithDuration:1.0 animations:^{
        bar1.transform = CGAffineTransformScale(bar1.transform, 1.f, 5.f);
        bar2.transform = CGAffineTransformScale(bar2.transform, 1.f, 6.f);
        bar3.transform = CGAffineTransformScale(bar3.transform, 1.f, 7.f);
        bar4.transform = CGAffineTransformScale(bar4.transform, 1.f, 6.f);
        
        CGRect f = bar1.frame;
        f.origin.y = vPosition1 - bar1.frame.size.height;
        bar1.frame = f;
        
        CGRect f2 = bar2.frame;
        f2.origin.y = vPosition2 - bar2.frame.size.height;
        bar2.frame = f2;
        
        CGRect f3 = bar3.frame;
        f3.origin.y = vPosition3 - bar3.frame.size.height;
        bar3.frame = f3;
        
        CGRect f4 = bar4.frame;
        f4.origin.y = vPosition4 - bar4.frame.size.height;
        bar4.frame = f4;
    }];
    
    [analyzeView addSubview:bar1];
    [analyzeView addSubview:bar2];
    [analyzeView addSubview:bar3];
    [analyzeView addSubview:bar4];
    
    // End Evolution Indicator.
    
    [UIView animateWithDuration:0.4f animations:^{
        [doneBtn setAlpha:1.f];
        [retryBtn setAlpha:1.f];
        [humanGreenView setAlpha:1.f];
        [stepsAnalyzeView setAlpha:1.f];
        [evolutionCountLbl setAlpha:1.f];
        [humanBackView setAlpha:1.f];
        [accuracyView setAlpha:1.f];
        [accuracyIconView setAlpha:1.f];
        [accuracyCountLbl setAlpha:1.f];
        [caloriesCountLbl setAlpha:1.f];
    } completion:^(BOOL finished) {
        [self analyzeUnityModel];
        [UIView animateWithDuration:0.5f animations:^{
            unityView.alpha = 1.f;
        } completion:^(BOOL finished) {
            
            CGFloat accuracy = [UnityMovementData compareRecordingAccuracy];
            [accuracyView setProgress:accuracy duration:1.f];
            [accuracyCountLbl countFrom:0 to:accuracy*100.f withDuration:2.f];
        }];
    }];
}

- (void)hexagonHit:(id)sender
{
    HexagonElementView* obj = (HexagonElementView*)sender;
    if(obj.tag == TAG_BACK_BUTTON_2)
    {
        [hev disappear];
        [UIView animateWithDuration:0.4f animations:^{
            trainBtn.alpha = 0.f;
            humanView.alpha = 0.f;
        }];
        [self performSelector:@selector(backToTrainMenu:) withObject:nil afterDelay:0.4f];
    }
}

-(void)backToTrainMenu:(id)sender
{
    [self.navigationController popViewControllerAnimated:NO];
}

- (void)goTrain:(id)sender
{
    [self setupTrainView];
    [learnView removeFromSuperview];
    [self.view addSubview:trainView];
}

- (void)goAnalyze:(id)sender
{
    [self receiveRecordedMovement];
    [self setupAnalyzeView];
    [trainView removeFromSuperview];
    [self.view addSubview:analyzeView];
}

- (void)goLearn:(id)sender
{
    [self setupLearnView];
    [self.view addSubview:learnView];
    [analyzeView removeFromSuperview];
}

- (void)loadUnityScene:(const char*)scene
{
    NSLog(@"iOS-Unity : Loading Scene \'%s\'", scene);
    UnitySendMessage("Main Camera", "loadScene", scene);
}

- (void)readyUnityModel
{
    NSLog(@"iOS-Unity : Sending message \'Ready\'");
    UnitySendMessage("BluetoothModel", "Ready", "");
}

- (void)analyzeUnityModel
{
    NSLog(@"iOS-Unity : Sending message \'Analyze\'");
    UnitySendMessage("BluetoothModel", "Analyze", "");
}

- (void)resetOrientations {
    NSLog(@"iOS-Unity : Sending message \'ResetOrientations\'");
    UnitySendMessage("BluetoothModel", "ResetOrientations", "");
}

- (void)receiveRecordedMovement {
    NSLog(@"iOS-Unity : Sending message \'ReceiveRecordedMove\'");
    UnitySendMessage("BluetoothModel", "ReceiveRecordedMove", "");
}

+ (RecordingData *)baseRecording
{
    if (baseRecording == nil) {
        baseRecording = [[RecordingData alloc] init];
    }
        
    return baseRecording;
}

+ (RecordingData *)actualRecording
{
    if (actualRecording == nil) {
        actualRecording = [[RecordingData alloc] init];
    }
    return actualRecording;
}

@end
