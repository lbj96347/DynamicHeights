//
//  DynamicHeightsAppDelegate.h
//  DynamicHeights
//
//  Created by Matt Long on 9/22/09.
//  Copyright Skye Road Systems, Inc. 2009. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DynamicHeightsViewController;

@interface DynamicHeightsAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    DynamicHeightsViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet DynamicHeightsViewController *viewController;

@end

