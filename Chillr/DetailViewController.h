//
//  DetailViewController.h
//  Chillr
//
//  Created by Patrick Dugan on 10/15/14.
//  Copyright (c) 2014 Subtl.co. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

