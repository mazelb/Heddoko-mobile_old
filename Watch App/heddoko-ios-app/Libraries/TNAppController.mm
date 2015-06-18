#import <UIKit/UIKit.h>
#import "UnityAppController.h"
#import "UI/UnityView.h"
#import "UI/UnityViewControllerBase.h"

#import "LoginViewController.h"
#import "MainMenuViewController.h"
#import "ActivityViewController.h"
#import "XTrainingMenuViewController.h"
#import "BluetoothLearnViewController.h"

@interface TNAppController : UnityAppController

@property (nonatomic, strong) UINavigationController *navController;

- (void)createViewHierarchyImpl;

@end

@implementation TNAppController

- (void)createViewHierarchyImpl {
    
	_rootController	= [[UnityDefaultViewController alloc] init];
	_rootView		= [[UIView alloc] initWithFrame:[[UIScreen mainScreen] bounds]];
    _rootController.view = _rootView;
    
    
    //StartingViewController* startingViewController = [[StartingViewController alloc] initWithNibName:nil bundle:nil];
    //self.navController = [[UINavigationController alloc] initWithRootViewController:startingViewController];
    LoginViewController* loginViewController = [[LoginViewController alloc] initWithNibName:nil bundle:nil];
    self.navController = [[UINavigationController alloc] initWithRootViewController:loginViewController];
    
    [_rootView addSubview:self.navController.view];
}

- (void)applicationDidBecomeActive:(UIApplication *)application {
    [super applicationDidBecomeActive:application];
}

- (void)application:(UIApplication *)application handleWatchKitExtensionRequest:(NSDictionary *)userInfo reply:(void (^)(NSDictionary *replyInfo))reply {
//    UIAlertView *av = [[UIAlertView alloc] initWithTitle:@"WatchKitExtension Request Received" message:[NSString stringWithFormat:@"userInfo: %@", userInfo] delegate:nil cancelButtonTitle:@"OK" otherButtonTitles:nil];
//    [av show];

    NSDictionary *replyInfo = nil;

    if ([[userInfo objectForKey:@"action"] isEqualToString:@"train"]) {
        [self goToTrain];
    }
    if ([[userInfo objectForKey:@"action"] isEqualToString:@"analyze"]) {
        CGFloat accuracy = [self goToAnalyze];
        replyInfo = @{ @"accuracy": @((int)roundf(accuracy))};
    }

    if (reply) {
        reply(replyInfo);
    }
}

- (void)goToTrain {
    BluetoothLearnViewController *vc = [[BluetoothLearnViewController alloc] init];
    LoginViewController* loginViewController = [[LoginViewController alloc] initWithNibName:nil bundle:nil];
    self.navController = [[UINavigationController alloc] initWithRootViewController:loginViewController];
    self.navController.navigationBar.hidden = YES;
    [self.navController pushViewController:[[MainMenuViewController alloc] init] animated:NO];
    [self.navController pushViewController:[[ActivityViewController alloc] init] animated:NO];
    [self.navController pushViewController:[[XTrainingMenuViewController alloc] init] animated:NO];
    [self.navController pushViewController:vc animated:YES];
    [vc goTrain:nil];
    
    [_rootView addSubview:self.navController.view];
}

- (CGFloat)goToAnalyze {
    BluetoothLearnViewController *vc = [self.navController.viewControllers lastObject];
    if ([vc isKindOfClass:BluetoothLearnViewController.class]) {
        return [vc goAnalyze:nil];
    }
    return -1;
}

@end

IMPL_APP_CONTROLLER_SUBCLASS(TNAppController)