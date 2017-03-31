//
//  CreateAuthentification.swift
//  XenditExample
//
//  Created by Maxim Bolotov on 3/30/17.
//  Copyright © 2017 Xendit. All rights reserved.
//

import Foundation
import UIKit
import Xendit

class CreateAuthentification: UIViewController {
    
    @IBOutlet weak var tokenIDTextField: UITextField!
    @IBOutlet weak var amountTextField: UITextField!
    @IBOutlet weak var cardCVNTextField: UITextField!
    
    @IBOutlet weak var activityIndicator: UIActivityIndicatorView!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        Xendit.publishableKey = "xnd_public_development_O4iFfuQhgLOsl8M9eeEYGzeWYNH3otV5w3Dh/BFj/mHW+72nCQR/"
    }
    
    @IBAction func authentificateAction(_ sender: UIButton) {
        
        view.endEditing(true)
                
        let tokenID = tokenIDTextField.text
        let cardCVN = cardCVNTextField.text
        let amount = amountTextField.text
        
        guard (tokenID?.characters.count)! > 0, (amount?.characters.count)! > 0, (cardCVN?.characters.count)! > 0  else {
            showAlert(title: "Error", message: "Some fields are empty. Please fill all fields.")
            return
        }
        
        let int = Int(amount!)
        let amountNumber = NSNumber(value: int!)
        
        activityIndicator.startAnimating()

        Xendit.createAuthentication(fromViewController: self, tokenId: tokenID!, amount: amountNumber, cardCVN: cardCVN!) { (token, error) in
            DispatchQueue.main.async {
                self.activityIndicator.stopAnimating()
            }
            if token != nil {
                // Will return authentication with id. ID will be used later
                let message = String(format: "TokenID - %@, Status - %@", (token?.id)!, (token?.status)!)
                self.showAlert(title: "Token", message: message)
            } else {
                // Handle error. Error is of type XenditError
                self.showAlert(title: "Error", message: error.debugDescription)
            }
        }
    }
    
}
