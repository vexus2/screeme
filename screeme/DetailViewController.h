//
//  DetailViewController.h
//  screeme
//
//  Created by tooyama on 2014/02/22.
//  Copyright (c) 2014 vexus2. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end