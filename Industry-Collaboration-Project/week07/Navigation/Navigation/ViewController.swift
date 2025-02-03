//
//  ViewController.swift
//  Navigation
//
//  Created by CSMAC013 on 10/18/24.
//

import UIKit

class ViewController: UIViewController, EditDelegate { // ViewController 역할과 EditViewController의 EditDelegat도 가능

    let imgOn = UIImage(named: "lamp_on.png")
    let imgOff = UIImage(named: "lamp_off.png")
    
    var isOn = true
    var isZoom = true
    
    @IBOutlet var txMessage: UITextField!
    @IBOutlet var imgView: UIImageView!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
        imgView.image = imgOn
    }

    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        let editViewController = segue.destination as! EditViewController   // EditViewController 접근 가능
        if segue.identifier == "editButton" {   // 여러 개 있을 수 있으니 identifier로 구분
            editViewController.textWayValue = "segue : use button"
        } else if segue.identifier == "editBarButton"{
            editViewController.textWayValue = "segue : Bar button"
        }
        editViewController.textMessage = txMessage.text!    // 이제 마음대로 다른 컨트롤러 정보 값 변경 가능
        editViewController.isOn = isOn
        editViewController.isZoom = isZoom
        editViewController.delegate = self  // ViewController 자기자신 정보 넣어둠 : '그 기능 내가 할거다!'
    }
    
    func didMessageEditDone(_ controller: EditViewController, message: String) {    // 기능할 수 있게 만들어둠 (이걸 구현해야 자격조건 생김)
        txMessage.text = message    // EditViewController의 값을 다시 viewController에 표시하겠다~ (단순 화면에 보여주는 역할) - ViewController 권한 접근하는거 위임
    }
    
    func didImageOnOffDone(_ controller: EditViewController, isOn: Bool) {
        if isOn {
            imgView.image = imgOn
            self.isOn = true
        } else {
            imgView.image = imgOff
            self.isOn = false
        }
    }
    
    func didImageZoomDone(_ controller: EditViewController, isZoom: Bool) {
        let scale: CGFloat = 2.0
        var newWidth: CGFloat, newHeight: CGFloat
        
        if (!isZoom){
            newWidth = imgView.frame.width / scale
            newHeight = imgView.frame.height / scale
        } else {
            newWidth = imgView.frame.width * scale
            newHeight = imgView.frame.height * scale
        }
        
        imgView.frame.size = CGSize(width: newWidth, height: newHeight)
        self.isZoom = !self.isZoom
    }
    
}

