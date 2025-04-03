#include <iostream>
#include <string>
using namespace std;

class Account {
	int id;
	int money;
	string name;
public:
	Account();
	Account(string n, int i, int m);
	void deposite(int m);
	string getOwner();
	int withdraw(int m);
	int inquiry();
};

Account::Account() {}

Account::Account(string n, int i, int m) {
	id = i;
	name = n;
	money = m;
}

void Account::deposite(int m) {
	money += m;
}

string Account::getOwner() {
	return name;
}

int Account::withdraw(int m) {
	money -= m;
	return m;
}

int Account::inquiry() {
	return money;
}

int main() {
	Account a("kitae", 1, 5000);
	a.deposite(50000);
	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
	int money = a.withdraw(20000);
	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
	return 0;
}

