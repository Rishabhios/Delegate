//
//  ViewController.h
//  delegates
//
//  Created by Rishabh Gupta on 19/03/16.
//  Copyright © 2016 Rishabh Gupta. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TableViewController.h"

@interface ViewController : UIViewController<myDelegate>

@property (strong, nonatomic) IBOutlet UILabel *LabelText;

@end

