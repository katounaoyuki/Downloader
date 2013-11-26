//
//  DetailViewController.h
//  Downloader
//
//  Created by 加藤直行 on 2013/11/26.
//  Copyright (c) 2013年 加藤直行. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
