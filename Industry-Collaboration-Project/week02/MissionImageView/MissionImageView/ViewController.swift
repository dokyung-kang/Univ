//
//  ViewController.swift
//  MissionImageView
//
//  Created by CSMAC013 on 9/13/24.
//

import UIKit

class ViewController: UIViewController {
    var index: Int?
    var img1: UIImage?
    var img2: UIImage?
    var img3: UIImage?
    var img4: UIImage?
    var img5: UIImage?
    var img6: UIImage?

    @IBOutlet var imgView: UIImageView!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
        index = 3
        
        img1 = UIImage(named: "1.png")
        img2 = UIImage(named: "2.png")
        img3 = UIImage(named: "3.png")
        img4 = UIImage(named: "4.png")
        img5 = UIImage(named: "5.png")
        img6 = UIImage(named: "6.png")
        
        imgView.image = img3
    }
    
    // 이전 버튼
    @IBAction func prePage(_ sender: UIButton) {
        index = index! - 1
        
        if index == 1 {
            imgView.image = img1
        } else if index == 2 {
            imgView.image = img2
        } else if index == 3 {
            imgView.image = img3
        } else if index == 4 {
            imgView.image = img4
        } else if index == 5 {
            imgView.image = img5
        } else if index == 6 {
            imgView.image = img6
        }
    }
    
    // 다음 버튼
    @IBAction func postPage(_ sender: UIButton) {
        index = index! + 1
        
        if index == 1 {
            imgView.image = img1
        } else if index == 2 {
            imgView.image = img2
        } else if index == 3 {
            imgView.image = img3
        } else if index == 4 {
            imgView.image = img4
        } else if index == 5 {
            imgView.image = img5
        } else if index == 6 {
            imgView.image = img6
        }
    }
    
    
}

