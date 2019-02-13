//
//  AppDelegate.h
//  SIMONEPRJ
//
//  Created by kwebmaker on 13/02/19.
//  Copyright © 2019 kwebmaker. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

