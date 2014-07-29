//
//  ERPDetailViewController.h
//  ControllingSource
//
//  Created by Eduardo da Rocha Pereira on 29/07/14.
//  Copyright (c) 2014 Eduardo da Rocha Pereira. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ERPDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
