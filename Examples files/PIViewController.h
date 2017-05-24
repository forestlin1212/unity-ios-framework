//
//  PIViewController.h
//
//  Created by Forest Lin on 2017-4-18.
//
//

#import <UIKit/UIKit.h>
#import "UnityAppController.h"
//#import "UI/UnityView.h"
#import "UI/UnityViewControllerBase.h"


@interface PIViewController : UIViewController
{
    IBOutlet UIView     *viewToUnity;
    UnityDefaultViewController *unityViewController;
    UnityAppController *unityController;
}

-(IBAction) goBack:(id)sender;
-(IBAction) setUnitySizeMax:(id)sender;
-(IBAction) setUnitySizeMiddle:(id)sender;
-(IBAction) setUnitySizeSmall:(id)sender;

-(IBAction) callUnity:(id)sender;

@end
