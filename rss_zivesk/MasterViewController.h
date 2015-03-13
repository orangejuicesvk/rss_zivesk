//
//  MasterViewController.h
//  rss_zivesk
//
//  Created by Bobby Sixkiller on 13.3.2015.
//  Copyright (c) 2015 Bobby Sixkiller. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MasterViewController : UITableViewController <NSXMLParserDelegate>
@property (strong, nonatomic) IBOutlet UITableView *tableView;

@end

