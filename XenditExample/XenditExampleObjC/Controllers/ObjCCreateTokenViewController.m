//
//  CreateTokenViewController.m
//  XenditExample
//
//  Created by Maxim Bolotov on 3/31/17.
//  Copyright © 2017 Xendit. All rights reserved.
//

#import "ObjCCreateTokenViewController.h"
#import <Xendit/Xendit.h>

#import "UIAlertController+CustomAlert.h"

@interface ObjCCreateTokenViewController ()

@property (weak, nonatomic) IBOutlet UITextField *cardNumberTextDield;
@property (weak, nonatomic) IBOutlet UITextField *expMonthTextField;
@property (weak, nonatomic) IBOutlet UITextField *expYearTExtField;
@property (weak, nonatomic) IBOutlet UITextField *cvnTextField;
@property (weak, nonatomic) IBOutlet UITextField *amountTextField;

@property (weak, nonatomic) IBOutlet UIActivityIndicatorView *activityIdnicator;

@end

@implementation ObjCCreateTokenViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    Xendit.publishableKey = @"xnd_public_development_O4iFfuQhgLOsl8M9eeEYGzeWYNH3otV5w3Dh/BFj/mHW+72nCQR/";
    
}

- (IBAction)careateTokenAction:(UIButton *)sender {
    
    XENCardData *cardData = [[XENCardData alloc] init];
    cardData.cardNumber = self.cardNumberTextDield.text;
    cardData.cardExpMonth = self.expMonthTextField.text;
    cardData.cardExpYear = self.expYearTExtField.text;
    cardData.cardCvn = self.cvnTextField.text;
    
    if (self.amountTextField.text.length > 0) {
        cardData.amount = @(self.amountTextField.text.integerValue);
    }
    
    [self.activityIdnicator startAnimating];
    
    __weak __typeof__(self) weakSelf = self;
    
    [Xendit createTokenFromViewController:self cardData:cardData completion:^(XENCCToken * _Nullable token, XENError * _Nullable error) {
        NSString *alertTitle = nil;
        NSString *alertMessage = nil;
        
        if (token != nil) {
            // Handle successful tokenization. Token is of type XenditCCToken
            alertTitle = @"Token";
            alertMessage = [NSString stringWithFormat:@"TokenID - %@, Status - %@", token.tokenID, token.status];
        } else {
            alertTitle = error.errorCode;
            alertMessage = error.message;
        }
        UIAlertController *alert = [UIAlertController alertControllerWithTitle:alertTitle message:alertMessage handler:nil];
        dispatch_async(dispatch_get_main_queue(), ^(void){
            [weakSelf.activityIdnicator stopAnimating];
            [weakSelf presentViewController:alert animated:YES completion:nil];
        });
    }];
}

@end
