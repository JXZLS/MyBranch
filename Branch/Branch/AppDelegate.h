//
//  AppDelegate.h
//  Branch
//
//  Created by 贾金勋 on 2018/4/23.
//  Copyright © 2018年 JX. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

