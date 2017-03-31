//
//  UIAlertController+CustomAlert.m
//  XenditExample
//
//  Created by Maxim Bolotov on 3/31/17.
//  Copyright © 2017 Xendit. All rights reserved.
//

#import "UIAlertController+CustomAlert.h"

@implementation UIAlertController (CustomAlert)

+ (instancetype)alertControllerWithTitle:(NSString *)title message:(NSString *)message handler:(void (^)(UIAlertAction * _Nonnull))handler {
    UIAlertController *controller = [self alertControllerWithTitle:title message:message preferredStyle:UIAlertControllerStyleAlert];
    UIAlertAction *action = [UIAlertAction actionWithTitle:@"Ok" style:UIAlertActionStyleCancel handler:handler];
    [controller addAction:action];
    return controller;
}

@end
