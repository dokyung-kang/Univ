//
//  ViewController.swift
//  PickerView
//
//  Created by CSMAC013 on 9/20/24.
//

import UIKit

class PickerViewController: UIViewController, UIPickerViewDelegate, UIPickerViewDataSource {
    
    @IBOutlet var pickerImage: UIPickerView!
    @IBOutlet var lblImageFileName: UILabel!
    @IBOutlet var imageView: UIImageView!
    
    let MAX_ARRAY_NUM = 10
    let PICKER_VIEW_COLUMN = 1  // 컴포넌트 개수
    let PICKER_VIEW_HEIGHT:CGFloat = 80
    var imageArray = [UIImage?]()
    var imageFileName = [ "1.jpg", "2.jpg", "3.jpg", "4.jpg", "5.jpg",
                          "6.jpg", "7.jpg", "8.jpg", "9.jpg", "10.jpg" ]
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
        
        for i in 0 ..< MAX_ARRAY_NUM {
            let image = UIImage(named: imageFileName[i])
            imageArray.append(image)
        }
        
        lblImageFileName.text = imageFileName[0]
        imageView.image = imageArray[0]
    }

    // pickerView 기능 위임 (UIPickerViewDataSource가 해줘야할 역할들)
    // returns the number of 'columns' to display. - 열 담당
    func numberOfComponents(in pickerView: UIPickerView) -> Int {
        return PICKER_VIEW_COLUMN
    }
    
    // returns the # of rows in each components.. - 행 담당
    func pickerView(_ pickerView: UIPickerView, numberOfRowsInComponent component: Int) -> Int {
        return imageFileName.count
    }
    
    // returns height of row for each component.
    func pickerView(_ pickerView: UIPickerView, rowHeightForComponent component: Int) -> CGFloat {
        return PICKER_VIEW_HEIGHT
    }
    
    // 작은 이미지로 표시
    func pickerView(_ pickerView: UIPickerView, viewForRow row: Int, forComponent component: Int, reusing view: UIView?) -> UIView {
        let imageView = UIImageView(image: imageArray[row]) // 액자 객체를 만듦
        imageView.frame = CGRect(x: 0, y: 0, width: 100, height: 150)   // 액자 프레임 조정
        
        return imageView
    }
    
    // 선택된 값 표시
    func pickerView(_ pickerView: UIPickerView, didSelectRow row: Int, inComponent component: Int) {
        lblImageFileName.text = imageFileName[row]
        imageView.image = imageArray[row]
    }

}

