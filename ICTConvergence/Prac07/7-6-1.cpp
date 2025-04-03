#include <iostream>
using namespace std;

class Matrix {
	int n1;
	int n2;
	int n3;
	int n4;
public:
	Matrix(int n1 = 0, int n2 = 0, int n3 = 0, int n4 = 0) {
		this->n1 = n1; this->n2 = n2; this->n3 = n3; this->n4 = n4;
	}
	void show() {
		cout << "Matrix = { " << n1 << " " << n2 << " " << n3 << " " << n4 << " }" << endl;
	}
	Matrix operator+(Matrix op2);
	Matrix& operator+=(Matrix op2);
	bool operator==(Matrix op2);
};

Matrix Matrix::operator+(Matrix op2) {
	Matrix tmp = *this;
	tmp.n1 = this->n1 + op2.n1;
	tmp.n2 = this->n2 + op2.n2;
	tmp.n3 = this->n3 + op2.n3;
	tmp.n4 = this->n4 + op2.n4;
	return tmp;
}

Matrix& Matrix::operator+=(Matrix op2) {
	this->n1 = this->n1 + op2.n1;
	this->n2 = this->n2 + op2.n2;
	this->n3 = this->n3 + op2.n3;
	this->n4 = this->n4 + op2.n4;
	return *this;
}

bool Matrix::operator==(Matrix op2) {
	if (this->n1 == op2.n1 && this->n2 == op2.n2 && this->n3 == op2.n3 && this->n4 == op2.n4) return true;
	else return false;
}

int main() {
	Matrix a(1, 2, 3, 4), b(2, 3, 4, 5), c;
	c = a + b;
	a += b;
	a.show(); b.show(); c.show();
	if (a == c)
		cout << "a and c are the same" << endl;
	return 0;
}