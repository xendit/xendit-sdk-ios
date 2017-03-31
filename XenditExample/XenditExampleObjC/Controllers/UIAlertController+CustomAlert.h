//
//  UIAlertController+CustomAlert.h
//  XenditExample
//
//  Created by Maxim Bolotov on 3/31/17.
//  Copyright © 2017 Xendit. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIAlertController (CustomAlert)

+ (instancetype _Nonnull )alertControllerWithTitle:(nullable NSString *)title
                                           message:(nullable NSString *)message
                                           handler:(void (^ __nullable)(UIAlertAction * _Nullable action))handler;

@end
