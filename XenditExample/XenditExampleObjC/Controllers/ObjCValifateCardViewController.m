//
//  ValifateCardViewController.m
//  XenditExample
//
//  Created by Maxim Bolotov on 3/31/17.
//  Copyright © 2017 Xendit. All rights reserved.
//

#import "ObjCValifateCardViewController.h"
#import <Xendit/Xendit.h>

#import "UIAlertController+CustomAlert.h"

@interface ObjCValifateCardViewController ()

@property (weak, nonatomic) IBOutlet UITextField *cardNumberTextField;
@property (weak, nonatomic) IBOutlet UITextField *expMonthTextField;
@property (weak, nonatomic) IBOutlet UITextField *expYearTextField;
@property (weak, nonatomic) IBOutlet UITextField *cvnTextField;

@end

@implementation ObjCValifateCardViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
}

- (IBAction)validateAction:(UIButton *)sender {
    
    XENCardData *cardData = [[XENCardData alloc] init];
    cardData.cardNumber = self.cardNumberTextField.text;
    cardData.cardExpYear = self.expYearTextField.text;
    cardData.cardExpMonth = self.expMonthTextField.text;
    cardData.cardCvn = self.cvnTextField.text;
    
    BOOL validateCardNumber = [Xendit isCardNumberValidWithCardNumber:cardData.cardNumber];
    BOOL validateCardExpDate = [Xendit isExpiryValidWithCardExpirationMonth:cardData.cardExpMonth cardExpirationYear:cardData.cardExpYear];
    BOOL validateCardCVN = [Xendit isCvnValidWithCreditCardCVN:cardData.cardCvn];
    
    NSString *alertTitle = @"Error";
    NSString *alertMessage = nil;
    
    if (!validateCardNumber) {
        alertMessage = @"Card number is invalid";
    } else if (!validateCardExpDate) {
        alertMessage = @"Card expiration date is invalid";
    } else if (!validateCardCVN) {
        alertMessage = @"Card CVN is invalid";
    } else {
        alertTitle = @"Success";
        alertMessage = @"Card is valid!";
    }
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:alertTitle message:alertMessage handler:nil];
    [self presentViewController:alert animated:YES completion:nil];
    
}

@end
