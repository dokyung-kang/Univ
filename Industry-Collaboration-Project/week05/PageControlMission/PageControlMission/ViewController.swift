//
//  ViewController.swift
//  PageControlMission
//
//  Created by CSMAC013 on 10/16/24.
//

import UIKit

class ViewController: UIViewController {

    @IBOutlet var pageNum: UILabel!
    @IBOutlet var pageControl: UIPageControl!
    
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
        pageControl.numberOfPages = 10
        pageControl.currentPage = 0
        pageNum.text = String(pageControl.currentPage + 1)
        
        let selectedIndi = UIColor(red: 0, green: 0, blue: 255, alpha: 1)
        let notSelectedIndi = UIColor(red: 0, green: 165/255, blue: 165/255, alpha: 0.5)
        
        pageControl.pageIndicatorTintColor = notSelectedIndi
        pageControl.currentPageIndicatorTintColor = selectedIndi
    }

    @IBAction func pageChange(_ sender: UIPageControl) {
        pageNum.text = String(pageControl.currentPage + 1)
    }
    
}

