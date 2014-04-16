//
//  AppDelegate.h
//  Generics
//
//  Created by Joe on 14-4-16.
//  Copyright (c) 2014年 Joe. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NSStringNSMutableArray : NSMutableArray

- (void)addObject:(NSString *)anObject;
@end

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@end
