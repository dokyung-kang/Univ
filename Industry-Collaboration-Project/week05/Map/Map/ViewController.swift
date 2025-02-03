//
//  ViewController.swift
//  Map
//
//  Created by CSMAC013 on 10/4/24.
//

import UIKit
import MapKit

class ViewController: UIViewController, CLLocationManagerDelegate {

    @IBOutlet var myMap: MKMapView!
    @IBOutlet var lblLocationInfo1: UILabel!
    @IBOutlet var lblLocationInfo2: UILabel!
    
    let locationManager = CLLocationManager()
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
        // 지역 정보 초기화
        lblLocationInfo1.text = ""
        lblLocationInfo2.text = ""
        locationManager.delegate = self
        locationManager.desiredAccuracy = kCLLocationAccuracyBest   // 정확도
        locationManager.requestWhenInUseAuthorization()
        locationManager.startUpdatingLocation() // 위치 정보 들어오기 시작
        myMap.showsUserLocation = true
    }

    func goLocation(latitudeValue: CLLocationDegrees, longitudeValue : CLLocationDegrees, delta span: Double) -> CLLocationCoordinate2D {
        let pLocation = CLLocationCoordinate2DMake(latitudeValue, longitudeValue)   // 위도 경도 정보
        let spanValue = MKCoordinateSpan(latitudeDelta: span, longitudeDelta: span)
        let pRegion = MKCoordinateRegion(center: pLocation, span: spanValue)
        myMap.setRegion(pRegion, animated: true)
        return pLocation
    }
    
    func locationManager(_ manager: CLLocationManager, didUpdateLocations locations: [CLLocation]) {
        let pLocation = locations.last
        _ = goLocation(latitudeValue: (pLocation?.coordinate.latitude)!, longitudeValue: (pLocation?.coordinate.longitude)!, delta: 0.01)   // delta는 확대 배열, 내 위치로 이동
        CLGeocoder().reverseGeocodeLocation(pLocation!, completionHandler: {    // 위도, 경도를 주소 형태로 바꿈 (역 지오코딩)
            (placemarks, error) -> Void in  // 반환타입 없음, placemarks가 주소 정보 지님
            let pm = placemarks!.first  // 주소가 여러 개 있기 때문에 첫번째 (ex. 학교에 학과 사무실 여러 개
            let country = pm!.country   // 변수가 nil을 가질 수 있음. 느낌표(!)는 nil일 수 있지만 에러나도 알아서 처리하니 nil 있어도 체크하지말라는 뜻
            var address:String = country!
            if pm!.locality != nil {    // 상세 주소 정보 덧붙임
                address += " "
                address += pm!.locality!
            }
            if pm?.thoroughfare != nil {
                address += " "
                address += pm!.thoroughfare!
            }
            
            self.lblLocationInfo1.text = "현재위치" // label에 표시
            self.lblLocationInfo2.text = address
        })
        
        locationManager.stopUpdatingLocation()  // 한 번만 하고 끝냄
    }

    func setAnnotation(latitudeValue: CLLocationDegrees, longditudeValue: CLLocationDegrees, delta span: Double, title strTitle: String, subtitle strSubtitle : String){
        let annotation = MKPointAnnotation()
        annotation.coordinate = goLocation(latitudeValue: latitudeValue, longitudeValue: longditudeValue, delta: span)
        annotation.title = strTitle
        annotation.subtitle = strSubtitle
        myMap.addAnnotation(annotation)
    }
    
    @IBAction func sgChangeLocation(_ sender: UISegmentedControl) {
        if sender.selectedSegmentIndex == 0 {
            self.lblLocationInfo1.text = ""
            self.lblLocationInfo2.text = ""
            locationManager.startUpdatingLocation()
        } else if sender.selectedSegmentIndex == 1 {
            setAnnotation(latitudeValue: 37.751853, longditudeValue: 128.87605740000004, delta: 1, title: "한국폴리텍대학 강릉캠퍼스", subtitle: "강원도 강릉시 남산초교길 121")
        } else if sender.selectedSegmentIndex == 2 {
            setAnnotation(latitudeValue: 37.556876, longditudeValue: 126.914066, delta: 0.1, title: "이지퍼블리싱", subtitle: "서울시 마포구 잔다리로 109 이지스 빌딩")
            self.lblLocationInfo1.text = "보고 계신 위치"
            self.lblLocationInfo2.text = "이지스퍼블리싱 출판사"
        }
    }
    
    
}

