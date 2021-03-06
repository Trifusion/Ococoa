//
//  OCAppDelegate.h
//  Ococoa
//
//  Created by Philippe Casgrain on 11-12-17.
//  Copyright (c) 2011 Philippe Casgrain. All rights reserved.
//

#import <UIKit/UIKit.h>

@class OCViewController;
@class OCDoorbell;

@interface OCAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) OCViewController *viewController;
@property (strong, nonatomic) OCDoorbell *doorbell;

- (IBAction)ringDoorbell:(id)sender;

@end
