//
//  DetailViewController.h
//  rss_zivesk
//
//  Created by Bobby Sixkiller on 13.3.2015.
//  Copyright (c) 2015 Bobby Sixkiller. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

