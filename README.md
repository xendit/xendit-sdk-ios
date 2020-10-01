# xendit-sdk-ios
The Xendit iOS SDK makes it easy to collect sensitive credit card information without that data ever having to touch your server.

## Ownership

Team: [TPI](https://www.draw.io/?state=%7B%22ids%22:%5B%221Vk1zqYgX2YqjJYieQ6qDPh0PhB2yAd0j%22%5D,%22action%22:%22open%22,%22userId%22:%22104938211257040552218%22%7D)

Slack Channel: [#integration-product](https://xendit.slack.com/messages/integration-product/)

Slack Mentions: `@troops-tpi`

## Note
Only for real device

## Requirements
Our SDK is compatible with iOS apps supporting iOS 8.0 and above

## Installation
There are two options to install Xendit iOS SDK:
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

Xendit.createToken(fromViewController: self, cardData: cardData, shouldAuthenticate: true, onBehalfOf: "user-id") { (token, error) in
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

[Xendit createTokenFromViewController:self cardData:cardData shouldAuthenticate:true onBehalfOf:"user-id" completion:^(XENCCToken * _Nullable token, XENError * _Nullable error) {
    if (error != nil) {
        // Handle error
        return
    }

    // Handle successful tokenization
}];
```
`createToken` accept 4 parameters: fromViewController, `cardData` object, optional `shouldAuthenticate` (boolean) and optional `onBehalfOf` (string). `shouldAuthenticate` will be set to true and `onBehalfOf` will be set to empty if you omit these parameters.

### Creating a 3DS authentication

Swift:
```
let tokenID = "sample-token-id"
let amount = 75000

Xendit.createAuthentication(fromViewController: self, tokenId: tokenID!, amount: amount, onBehalfOf: "user-id") { (authentication, error) in
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
int amount = 75000;

[Xendit createAuthenticationFromViewController:self tokenId:tokenID amount:amount onBehalfOf:"" completion:^(XENAuthentication * _Nullable authentication, XENError * _Nullable error) {
    if (err != nil) {
        // Handle error
        return
    }

    // Handle successful authentication
}];
```
`createAuthentication` accept 4 parameters: fromViewController, tokenId, amount and optional `onBehalfOf` (string). `onBehalfOf` will be set to empty if you omit it, but is required when you passed it during `createToken`.

### Creating a charge
When you're ready to charge a card, use the private key on your backend to call the charge endpoint. See our API reference at https://xendit.github.io/apireference/#create-charge
