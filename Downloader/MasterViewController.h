//
//  MasterViewController.h
//  Downloader
//
//  Created by 加藤直行 on 2013/11/26.
//  Copyright (c) 2013年 加藤直行. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
