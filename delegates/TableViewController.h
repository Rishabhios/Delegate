#import <UIKit/UIKit.h>
@class TableViewController;
@protocol myDelegate <NSObject>

-(void)didSelectFinish:(TableViewController *)controller array:(NSString *)array;

@end


@interface TableViewController : UITableViewController
@property(nonatomic,weak) id<myDelegate>delegate;
@end
