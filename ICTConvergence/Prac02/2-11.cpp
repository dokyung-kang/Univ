#include <iostream>
using namespace std;

int main() {
	cout << "끝 수를 입력하세요>>";
	int n;
	cin >> n;

	int k;
	int sum = 0;
	for (k = 0; k <= n; k++) {
		sum += k;
	}

	cout << "1에서 " << n << "까지의 합은" << sum << "입니다.\n";
	
	return 0;
}