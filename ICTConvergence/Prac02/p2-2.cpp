#include <iostream>

double area(int r);	// �Լ��� ���� ���� (����Ÿ����)

double area(int r) {	// �Լ� ����
	return 3.14 * r * r;	// ������ r�� ������ ����
}

int main() {
	int n = 3;
	char c = '#';
	std::cout << c << 5.5 << '-' << "hello" << true << std::endl;	// true�� 1�� ��µ�
	std::cout << "n + 5 = " << n + 5 << '\n';
	std::cout << "������ " << area(n);	// �Լ� area()�� ���� �� ���

	return 0;
}