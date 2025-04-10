//
//  ViewController.swift
//  PinchGesture
//
//  Created by DDWU on 12/19/24.
//

import UIKit

class ViewController: UIViewController {

    @IBOutlet var txtPinch: UILabel!
    
    var initialFontSize: CGFloat!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
        
        let pinch = UIPinchGestureRecognizer(target: self, action: #selector(ViewController.doPinch(_:)))
        self.view.addGestureRecognizer(pinch)
        
        
    }
    
    @objc func doPinch(_ pinch: UIPinchGestureRecognizer){
        if(pinch.state == UIGestureRecognizer.State.began){
            initialFontSize = txtPinch.font.pointSize
        } else {
            txtPinch.font = txtPinch.font.withSize(initialFontSize + pinch.scale)
        }
    }


}

