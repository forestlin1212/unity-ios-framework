//
//  mainAppController.mm
//
//  Created by Forest Lin on 2017-4-18.
//
// The mainAppController.mm is my AppDelegate, you name it whatever you whant.
//



// Import this default headers to make Unity and Vuforia works
#import <UIKit/UIKit.h>
#import <UnityOutFramework/UnityOutFramework.h>

//#import "UnityAppController.h"
//#import "UI/UnityView.h"
//#import "UI/UnityViewControllerBase.h"

// This is your MAIN VIEWCONTROLLER, that controller you want to open first when build/open your app.
#import "MainViewController.h"



// Unity native rendering callback plugin mechanism is only supported
// from version 4.5 onwards
#if UNITY_VERSION>434
// Exported methods for native rendering callback
extern "C" void UnitySetGraphicsDevice(void* device, int deviceType, int eventType);
extern "C" void UnityRenderEvent(int marker);


#endif

@interface mainAppController : UnityAppController<UIApplicationDelegate>

// My historyboard works with NavigationController.
// If your app doenst use navigation, just open the historiboard with your main ViewController.

@property (nonatomic, strong) UINavigationController *navigationController;

- (void)willStartWithViewController:(UIViewController*)controller;
- (void)shouldAttachRenderDelegate;

@end



@implementation mainAppController


- (void)shouldAttachRenderDelegate
{
    
    
    // Unity native rendering callback plugin mechanism is only supported
    // from version 4.5 onwards
#if UNITY_VERSION>434
    //
    //UnityRegisterRenderingPlugin(&UnitySetGraphicsDevice, &UnityRenderEvent);
    #endif
    
}


- (void)willStartWithViewController:(UIViewController*)controller {

    // Open your historyboard with your main view.
    // In my case i use navigation controller.
    
    UIStoryboard *storyBoard;
    storyBoard = [UIStoryboard storyboardWithName:@"Main" bundle:nil];

    _rootController         = [[UnityDefaultViewController alloc] init];
    _rootView               = [[UIView alloc] initWithFrame:[[UIScreen mainScreen] bounds]];
    _rootController.view    = _rootView;
    
    MainViewController *mainVC       = [storyBoard instantiateViewControllerWithIdentifier:@"idMainViewController"];
    
    self.navigationController = [[UINavigationController alloc] initWithRootViewController:mainVC];
    
    [_rootView addSubview:self.navigationController.view];
}

@end


//
// You have to put this line below
//
IMPL_APP_CONTROLLER_SUBCLASS(mainAppController)
