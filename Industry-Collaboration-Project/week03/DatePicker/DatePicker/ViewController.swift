//
//  ViewController.swift
//  DatePicker
//
//  Created by CSMAC013 on 9/20/24.
//

import UIKit

class ViewController: UIViewController {
    let timeSelector: Selector = #selector(ViewController.updateTime)
    let interval = 1.0
    var count = 0
    var isSame = false  // 현재시간 & 선택시간 같은지 여부
    
    @IBOutlet var lblCurrentTime: UILabel!
    @IBOutlet var lblPickerTime: UILabel!
    var alarmTime = ""
    
    
    override func viewDidLoad() {   // 뷰가 로딩된 후 수행해야할 것들
        super.viewDidLoad()
        // Do any additional setup after loading the view.
        
        Timer.scheduledTimer(timeInterval: interval, target: self, selector: timeSelector, userInfo: nil, repeats: true)
    }

    @IBAction func changeDatePicker(_ sender: UIDatePicker) {
        let datePickerView = sender
        
        let formatter = DateFormatter() // 날짜 형식 설정
//        formatter.dateFormat = "yyyy-MM-dd HH:mm EEE"
        formatter.dateFormat = "yy-MMM-dd HH:mm EEE"    // 날짜 다양한 형식으로 변경 가능
        lblPickerTime.text = "선택시간: " + formatter.string(from: datePickerView.date)
        
        formatter.dateFormat = "hh:mm aaa"
        alarmTime = formatter.string(from: datePickerView.date)
    }
    
    @objc func updateTime(){    // 1초마다 호출
        // 1씩 증가하는 count 값 테스트
//        lblCurrentTime.text = String(count)
//        count = count + 1
        
        // 실제 시간으로 확인
        let date = NSDate() // 날짜 정보 만들 때
        
        let formatter = DateFormatter()
        formatter.dateFormat = "yyyy-MM-dd HH:mm:ss EEE"
        lblCurrentTime.text = "현재시간: " + formatter.string(from: date as Date)   // Date 클래스로 형변환
        
        formatter.dateFormat = "hh:mm aaa"
        let currentTime = formatter.string(from: date as Date)
        
        if (alarmTime == currentTime){  // 현재시간 & 선택시간 같을 시 배경 빨강으로
            view.backgroundColor = UIColor.red
            isSame = true
        }
        if (isSame){    // 시간 같으면 count 값 증가 시작
            count = count + 1
        } else {    // 다르면 count 값 0 유지
            count = 0
        }
        if(count > 60) {    // 60초(1분) 초과 시 다시 세팅 초기화
            view.backgroundColor = UIColor.white
            count = 0
            isSame = false
        }
        
        print(count)    // 로그 출력
    }
    
}

