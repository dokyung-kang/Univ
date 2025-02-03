//
//  AddViewController.swift
//  Table
//
//  Created by CSMAC013 on 11/8/24.
//

import UIKit

class AddViewController: UIViewController, UIPickerViewDelegate, UIPickerViewDataSource {

    @IBOutlet var tfAddItem: UITextField!
    @IBOutlet var pickerImage: UIPickerView!
    @IBOutlet var imageView: UIImageView!
    
    var itemsImage = ["cart.png", "clock.png", "pencil.png"]
    let MAX_ARRAY_NUM = 3
    let PICKER_VIEW_CLOUMN = 1
    var imageArray = [UIImage?]()
    var selectedImg = ""
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        for i in 0 ..< MAX_ARRAY_NUM {
            let image = UIImage(named: itemsImage[i])
            imageArray.append(image)
        }
        
        imageView.image = imageArray[0]
        selectedImg = itemsImage[0]
        // Do any additional setup after loading the view.
    }
    
    @IBAction func btnAddItem(_ sender: UIButton) {
        items.append(tfAddItem.text!)
        itemsImageFile.append(selectedImg)
        tfAddItem.text = ""
        _ = navigationController?.popViewController(animated: true)
    }
    
    func numberOfComponents(in pickerView: UIPickerView) -> Int {
        return PICKER_VIEW_CLOUMN
    }
    
    func pickerView(_ pickerView: UIPickerView, numberOfRowsInComponent component: Int) -> Int {
        return itemsImage.count
    }
    
    func pickerView(_ pickerView: UIPickerView, didSelectRow row: Int, inComponent component: Int) {
        selectedImg = itemsImage[row]
        imageView.image = imageArray[row]
    }
    
    func pickerView(_ pickerView: UIPickerView, viewForRow row: Int, forComponent component: Int, reusing view: UIView?) -> UIView {
       let imageView = UIImageView(image: imageArray[row])
        imageView.frame = CGRect(x: 0 , y: 0, width: 30, height: 30)
        
        return imageView
    }
    
    /*
    // MARK: - Navigation

    // In a storyboard-based application, you will often want to do a little preparation before navigation
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        // Get the new view controller using segue.destination.
        // Pass the selected object to the new view controller.
    }
    */

}
