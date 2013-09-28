//
//  DynamicHeightsAppDelegate.m
//  DynamicHeights
//
//  Created by Matt Long on 9/22/09.
//  Copyright Skye Road Systems, Inc. 2009. All rights reserved.
//

#import "DynamicHeightsAppDelegate.h"
#import "DynamicHeightsViewController.h"

@implementation DynamicHeightsAppDelegate

@synthesize window;
@synthesize viewController;


- (void)applicationDidFinishLaunching:(UIApplication *)application {    
    
    // Override point for customization after app launch    
    [window addSubview:viewController.view];
    [window makeKeyAndVisible];
}


- (void)dealloc {
    [viewController release];
    [window release];
    [super dealloc];
}


@end
