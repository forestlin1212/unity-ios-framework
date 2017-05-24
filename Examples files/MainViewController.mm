//
//  MainViewController.m
//
//  Created by Forest Lin on 2017-4-18.
//

#import "MainViewController.h"
#import "PIViewController.h"

@interface MainViewController ()

@end

@implementation MainViewController

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
    
    // My project use navigation controller just for transition animation right to left, thats why i hide it here on first view.
    
    [self.navigationController setNavigationBarHidden:YES];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
//- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender
//{
//    if ([segue.identifier isEqualToString:@"idHomeViewController"])
//    {
////        MyViewController *controller = (MyViewController *)segue.destinationViewController;
////        controller.myProperty1 = ...;
////        controller.myProperty2 = ...;
//    }
//    
//    
//}


-(void)touchToLoad:(id)sender
{
    //
    // Open historyboard with Unity, see details on PIViewController.h/m
    
    UIStoryboard *storyBoard;
    storyBoard                      = [UIStoryboard storyboardWithName:@"Main" bundle:nil];
    PIViewController *mainVC        = [storyBoard instantiateViewControllerWithIdentifier:@"idPIViewController"];
    [self.navigationController pushViewController:mainVC animated:YES];
}

@end
