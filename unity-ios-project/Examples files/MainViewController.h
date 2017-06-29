//
//  MainViewController.h
//
//  Created by Forest Lin on 2017-4-18.
//
//

#import <UIKit/UIKit.h>
#import "UnityAppController.h"
//#import "UI/UnityView.h"
#import "UI/UnityViewControllerBase.h"
@interface MainViewController : UIViewController
{
    UnityDefaultViewController *unityViewController;
    UnityAppController *unityController;
}

-(IBAction) touchToLoad:(id)sender;

@end
