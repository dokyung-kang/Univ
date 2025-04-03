#include <iostream>
using namespace std;

int main() {
	cout << "***** 승리장에 오신 것을 환영합니다. *****" << endl;
	
	int num;
	int cnt;
	while (true) {
		cout << "짬뽕:1, 짜장:2, 군만두:3, 종료: 4>>";
		cin >> num;
		
		if (num == 1) {
			cout << "몇인분?";
			cin >> cnt;
			cout << "짬뽕 " << cnt << "인분 나왔습니다" << endl;
		}
		else if (num == 2) {
			cout << "몇인분?";
			cin >> cnt;
			cout << "짜장 " << cnt << "인분 나왔습니다" << endl;
		}
		else if (num == 3) {
			cout << "몇인분?";
			cin >> cnt;
			cout << "군만두 " << cnt << "인분 나왔습니다" << endl;
		}
		else if (num == 4) {
			cout << "오늘 영업은 끝났습니다." << endl;
			break;
		}
		else {
			cout << "다시 주문하세요!!" << endl;
		}
	}
	
	return 0;
}