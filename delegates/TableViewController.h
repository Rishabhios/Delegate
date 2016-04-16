//
//  TableViewController.h
//  delegates
//
//  Created by Rishabh Gupta on 19/03/16.
//  Copyright © 2016 Rishabh Gupta. All rights reserved.
//

#import <UIKit/UIKit.h>
@class TableViewController;
@protocol myDelegate <NSObject>

-(void)didSelectFinish:(TableViewController *)controller array:(NSString *)array;

@end


@interface TableViewController : UITableViewController
@property(nonatomic,weak) id<myDelegate>delegate;
@end
