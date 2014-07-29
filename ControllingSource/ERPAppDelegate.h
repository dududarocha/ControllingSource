//
//  ERPAppDelegate.h
//  ControllingSource
//
//  Created by Eduardo da Rocha Pereira on 29/07/14.
//  Copyright (c) 2014 Eduardo da Rocha Pereira. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ERPAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
