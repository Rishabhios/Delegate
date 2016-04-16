//
//  ViewController.m
//  delegates
//
//  Created by Rishabh Gupta on 19/03/16.
//  Copyright © 2016 Rishabh Gupta. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController
-(void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender
{
    if([segue.identifier isEqualToString:@"segue"])
    {
        TableViewController *tv =[segue destinationViewController];
        NSLog(@"i am inside segue(VW) and my address is %@ and obj is %@",self,tv);

        tv.delegate=self;
        
    }

}

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
    
}
-(void)didSelectFinish:(TableViewController *)controller array:(NSString *)array{

    [controller dismissViewControllerAnimated:YES completion:nil];
    self.LabelText.text = array;
        NSLog(@"i am inside vW method and my address is %@",self);
}
@end
