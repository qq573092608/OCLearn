//
//  AppDelegate.h
//  OCLearn
//
//  Created by 黄小刚 on 2017/8/4.
//  Copyright © 2017年 黄小刚. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

