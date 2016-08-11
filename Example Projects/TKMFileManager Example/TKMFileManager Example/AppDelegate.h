//
//  AppDelegate.h
//  TKMFileManager Example
//
//  Created by Tom Metzger on 8/10/16.
//  Copyright © 2016 Tom Metzger. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

