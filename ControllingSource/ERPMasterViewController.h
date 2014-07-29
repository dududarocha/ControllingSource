//
//  ERPMasterViewController.h
//  ControllingSource
//
//  Created by Eduardo da Rocha Pereira on 29/07/14.
//  Copyright (c) 2014 Eduardo da Rocha Pereira. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface ERPMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
