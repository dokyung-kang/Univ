#include <iostream>
#include <string>
using namespace std;

int add(int n1[], int size, int n2[] = NULL) {
	int sum = 0;
	for (int i = 0; i < size; i++)
		if (n2 != NULL)
			sum += (n1[i] + n2[i]);
		else
			sum += n1[i];
	return sum;
}

int main() {
	int a[] = { 1, 2, 3, 4, 5 };
	int b[] = { 6, 7, 8, 9, 10 };
	int c = add(a, 5);
	int d = add(a, 5, b);
	cout << c << endl;
	cout << d << endl;
}