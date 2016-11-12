//
//  AppDelegate.h
//  123
//
//  Created by BHAVANA VERMA on 13/11/16.
//  Copyright © 2016 BHAVANA VERMA. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

