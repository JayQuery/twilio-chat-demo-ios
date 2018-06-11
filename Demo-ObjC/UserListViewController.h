//
//  UserListViewController.h
//  Demo-ObjC
//
//  Created by Randy Beiter on 6/28/16.
//  Copyright (c) 2018 Twilio, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UserListViewController : UIViewController

@property (nonnull, copy) NSString *caption;
@property (nonnull, strong) NSArray *users;

@end
