﻿#include <iostream>
using namespace std;

class Power {
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) {
		this->kick = kick; this->punch = punch;
	}
	void show();
	bool operator! ();
};

bool Power::operator! () {
	if (kick == 0 && punch == 0)return true;
	else return false;
}

void Power::show() {
	cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}



int main() {
	Power a(0, 0), b(5, 5);
	if (!a) cout << "a의 파워가 0이다." << endl;
	else cout << "a의 파워가 0이 아니다." << endl;
	if (!b) cout << "b의 파워가 0이다." << endl;
	else cout << "b의 파워가 0이 아니다." << endl;
}