//
//  DetailViewController.m
//  rss_zivesk
//
//  Created by Bobby Sixkiller on 13.3.2015.
//  Copyright (c) 2015 Bobby Sixkiller. All rights reserved.
//

#import "DetailViewController.h"


@implementation DetailViewController

#pragma mark - Managing the detail item



- (void)viewDidLoad {
    [super viewDidLoad];
    NSURL *myURL = [NSURL URLWithString: [self.url stringByAddingPercentEscapesUsingEncoding:
                                          NSUTF8StringEncoding]];
    NSURLRequest *request = [NSURLRequest requestWithURL:myURL];
    [self.webView loadRequest:request];
}


@end
