//
//  EditViewController.swift
//  Navigation
//
//  Created by CSMAC013 on 10/18/24.
//

import UIKit

protocol EditDelegate { // 기능 (인터페이스라고 생각하면 됨)
    func didMessageEditDone(_ controller: EditViewController, message: String)  // 자격조건
    func didImageOnOffDone(_ controller: EditViewController, isOn: Bool)
    func didImageZoomDone(_ controller: EditViewController, isZoom: Bool)
}

class EditViewController: UIViewController {

    var textWayValue: String = ""
    var textMessage: String = ""
    var delegate: EditDelegate?
    
    @IBOutlet var lblWay: UILabel!
    @IBOutlet var txMessage: UITextField!
    @IBOutlet var swIsOn: UISwitch!
    @IBOutlet var sizeBtn: UIButton!
    
    var isOn = false
    var isZoom = false
    
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        // Do any additional setup after loading the view.
        lblWay.text = textWayValue
        txMessage.text = textMessage
        swIsOn.isOn = isOn
        if isZoom {
            sizeBtn.setTitle("확대", for: .normal)
        } else {
            sizeBtn.setTitle("축소", for: .normal)
        }
    }
    
    // 완료 눌렀을 때
    @IBAction func btnDone(_ sender: UIButton) {
        if delegate != nil{ // delegate가 사실상 ViewController 의미 -> delegate를 확인하면 누가 불렀는지 확인할 수 있음
            delegate?.didMessageEditDone(self, message: txMessage.text!)    // ViewController의 didMessageEditDone을 호출한거 : 전달받은 ViewController가 함
            delegate?.didImageOnOffDone(self, isOn: isOn)
            delegate?.didImageZoomDone(self, isZoom: isZoom)
        }
        // 맨 앞에 있던 navigationController를 의미
        _ = navigationController?.popViewController(animated: true) // pop하면 맨 위 화면 사라짐
    }
    
    // 켜기 버튼 눌렀을 때
    @IBAction func swImageOnOff(_ sender: UISwitch) {
        if sender.isOn {
            isOn = true
        } else {
            isOn = false
        }
    }
    
    // 확대/축소 버튼 눌렀을 때
    @IBAction func btnResizeImage(_ sender: UIButton) {
        if isZoom {
            sizeBtn.setTitle("축소", for: .normal)
//            isZoom = false
        } else {
            sizeBtn.setTitle("확대", for: .normal)
//            isZoom = true
        }
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
