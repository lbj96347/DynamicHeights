//
//  DynamicHeightsViewController.h
//  DynamicHeights
//
//  Created by Matt Long on 9/22/09.
//  Copyright Skye Road Systems, Inc. 2009. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DynamicHeightsViewController : UIViewController {
    IBOutlet UITableView *dataTableView;
    
    NSMutableArray *items;
}

@end

