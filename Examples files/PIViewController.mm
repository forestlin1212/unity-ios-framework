//
//  PIViewController.m
//
//  Created by Forest Lin on 2017-4-18.
//
//

#import "PIViewController.h"
//#import "UnityInterface.h"
#import <QuartzCore/QuartzCore.h>

@interface PIViewController ()

@end
//测试Unity和Obj-c互调--Forest Lin
#if defined(_cplusplus)
extern "C"{
#endif
    void iosMethord(int code, const char* msg)
    {
        NSLog(@"%@", [[NSString alloc] initWithUTF8String: msg]);
    }
#if defined(_cplusplus)
}
#endif

@implementation PIViewController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];

    // Just setting Unity delegates and view to add it as subview for my main view.
    // This allow me to add a UIButton above the UnityView to popViewController or anything i want to make native in iOS.
    
    unityViewController         = [[UnityDefaultViewController alloc] init];
    unityController             = (UnityAppController*)[[UIApplication sharedApplication] delegate];
    unityViewController.view    = (UIView*)unityController.unityView;
    
    [viewToUnity addSubview:unityViewController.view];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender
{
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

#pragma MARK -- Methods
-(void)goBack:(id)sender
{
    [self.navigationController popViewControllerAnimated:YES];
}
-(void) setUnitySizeMax:(id)sender
{
    [unityViewController.view setBounds:[[UIScreen mainScreen] bounds]];
}
-(void) setUnitySizeMiddle:(id)sender
{
    [unityViewController.view setBounds:CGRectMake(0, 0, 350, 350)];
}
-(void) setUnitySizeSmall:(id)sender
{
    [unityViewController.view setBounds:CGRectMake(0, 0, 250, 250)];

}

-(void) callUnity:(id)sender
{
    UnitySendMessage("SDKService", "ImUnityMethord", "This is call from iOS.haha!!!");
}

@end
