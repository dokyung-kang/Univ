#include "Adder.h"
#include "Calculator.h"
#include <iostream>
using namespace std;

void Calculator::run() {
	cout << "�� ���� ���� �Է��ϼ���>>";
	int a, b;
	cin >> a >> b;
	Adder adder(a, b);
	cout << adder.process();
}