#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "새 암호를 입력하세요>>";
	string newP1;
	getline(cin, newP1);

	cout << "새 암호를 다시 한 번 입력하세요>>";
	string newP2;
	getline(cin, newP2);

	if (newP1 == newP2)
		cout << "같습니다.";
	else
		cout << "같지 않습니다.";


}