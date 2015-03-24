#import <UIKit/UIKit.h>
#import "UnityAppController.h"
#import "UI/UnityView.h"
#import "UI/UnityViewControllerBase.h"

#import "LoginViewController.h"

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

@end

IMPL_APP_CONTROLLER_SUBCLASS(TNAppController)