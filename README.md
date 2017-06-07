# xendit-sdk-ios
The Xendit iOS SDK makes it easy to collect sensitive credit card information without that data ever having to touch your server.

## Requirements
Our SDK is compatible with iOS apps supporting iOS 8.0 and above

## Installation
There are two options install the Xendit iOS SDK:
1. Cocoapods https://cocoapods.org/pods/Xendit
2. Visit our releases page https://github.com/xendit/xendit-sdk-ios/releases and download the static framework Xendit.framework.zip

If you'd prefer another form of installation, please create a request in our issues page.

## Examples
Visit and try the XenditExample app to view how the SDK is used. Additionally, below are examples of how to create tokens and authentications.

### Setting your public key
Swift:
```
Xendit.publishableKey = "xnd_public_development_O4iFfuQhgLOsl8M9eeEYGzeWYNH3otV5w3Dh/BFj/mHW+72nCQR/"
```

Objective-C:
```
Xendit.publishableKey = @"xnd_public_development_O4iFfuQhgLOsl8M9eeEYGzeWYNH3otV5w3Dh/BFj/mHW+72nCQR/";
```

### Creating a token
Swift:
```
let cardData = CardData()
cardData.cardNumber = "4000000000000002"
cardData.cardExpMonth = "12"
cardData.cardExpYear = "2017"
cardData.cardCvn = "123"
cardData.isMultipleUse = true

Xendit.createToken(fromViewController: self, cardData: cardData) { (token, error) in

    if (error != nil) {
        // Handle error. Error is of type XenditError
        return
    }

    // Handle successful tokenization. Token is of type XenditCCToken
}
```

Objective-C:
```
XENCardData *cardData = [[XENCardData alloc] init];
cardData.cardNumber = @"4000000000000002";
cardData.cardExpMonth = @"12";
cardData.cardExpYear = @"2017";
cardData.cardCvn = @"123";

[Xendit createTokenFromViewController:self cardData:cardData completion:^(XENCCToken * _Nullable token, XENError * _Nullable error) {
    if (error != nil) {
        // Handle error
        return
    }

    // Handle successful tokenization
}];
```

### Creating a 3ds authentication

Swift:
```
let tokenID = "sample-token-id"
let cardCVN = "123"
let amount = 75000

Xendit.createAuthentication(fromViewController: self, tokenId: tokenID!, amount: amount, cardCVN: cardCVN!) { (authentication, error) in
    DispatchQueue.main.async {
        self.activityIndicator.stopAnimating()
    }

    if (error != nil) {
        // Handle error. Error is of type XenditError
        return
    }

    // Handle successful authentication
}
```

Objective-C:
```
NSString *tokenID = @"sample-token-id";
NSString *cvn = @"123";
int amount = 75000;

[Xendit createAuthenticationFromViewController:self tokenId:tokenID amount:amount cardCVN:cvn completion:^(XENAuthentication * _Nullable authentication, XENError * _Nullable error) {
    if (err != nil) {
        // Handle error
        return
    }

    // Handle successful authentication
}];
```

### Creating a charge
When you're ready to charge a card, use the private key on your backend to call the charge endpoint. See our API reference at https://xendit.github.io/apireference/#create-charge
