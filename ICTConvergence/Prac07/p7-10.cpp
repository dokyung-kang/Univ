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
	Power& operator++ (int x);
};

Power& Power::operator++ (int x) {
	Power tmp = *this;
	kick++;
	punch++;
	return tmp;
}

void Power::show() {
	cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}



int main() {
	Power a(3, 5), b;
	a.show();
	b.show();
	b = a++;
	a.show();
	b.show();
}