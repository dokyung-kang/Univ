//
//  ViewController.swift
//  ImageView
//
//  Created by CSMAC013 on 9/13/24.
//

import UIKit

class ViewController: UIViewController {
    var isZoom = false
    var imgOn: UIImage?
    var imgOff: UIImage?

    @IBOutlet var imgView: UIImageView!
    @IBOutlet var btnResize: UIButton!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
        
        // 이미지 읽어오는 작업
        imgOn = UIImage(named: "lamp_on.png")
        imgOff = UIImage(named: "lamp_off.png")
        
        imgView.image = imgOn
    }

    @IBAction func btnResizeImage(_ sender: UIButton) {
        let scale: CGFloat = 2.0
        var newWidth: CGFloat, newHeight: CGFloat
        
        if(isZoom) {    // true
            newWidth = imgView.frame.width / scale
            newHeight = imgView.frame.height / scale
            
            btnResize.setTitle("확대", for: .normal)
        } else {    // false
            newWidth = imgView.frame.width * scale
            newHeight = imgView.frame.height * scale
            
            btnResize.setTitle("축소", for: .normal)
        }
        
        imgView.frame.size = CGSize(width: newWidth, height: newHeight)
        
        isZoom = !isZoom
    }
    
    @IBAction func swtichImageOnOff(_ sender: UISwitch) {
        if sender.isOn {
            imgView.image = imgOn
        } else {
            imgView.image = imgOff
        }
    }
    
}

