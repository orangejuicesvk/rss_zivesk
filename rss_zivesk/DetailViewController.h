//
//  DetailViewController.h
//  rss_zivesk
//
//  Created by Bobby Sixkiller on 13.3.2015.
//  Copyright (c) 2015 Bobby Sixkiller. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (copy, nonatomic) NSString *url;
@property (strong, nonatomic) IBOutlet UIWebView *webView;

@end

