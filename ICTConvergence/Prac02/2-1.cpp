﻿#include <iostream>
using namespace std;

int main() {
	int cnt = 1;

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cout << cnt << '\t';
			cnt++;
		}
		cout << endl;
	}
}