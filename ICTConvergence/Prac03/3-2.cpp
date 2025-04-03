#include <iostream>
#include <string>
using namespace std;

class Date {
	int year;
	int month;
	int day;
public:
	Date();
	Date(int y, int m, int d);
	Date(string d);
	void show();
    int getYear();
    int getMonth();
    int getDay();
};

Date::Date(){}

Date::Date(int y, int m, int d) {
	year = y;
	month = m;
	day = d;
}

Date::Date(string d) {
    string temp = "";
    int parts[3];
    int partIndex = 0;

    for (int i = 0; i < d.length(); i++) {
        if (d[i] == '/') {
            parts[partIndex++] = stoi(temp);  
            temp = ""; 
        }
        else {
            temp += d[i];  
        }
    }
    parts[partIndex] = stoi(temp);  

    year = parts[0];
    month = parts[1];
    day = parts[2];
}

void Date::show() {
    cout << year << "년" << month << "월" << day << "일" << endl;
}

int Date::getYear() {
    return year;
}

int Date::getMonth() {
    return month;
}

int Date::getDay() {
    return day;
}

int main() {
    Date birth(2014, 3, 20);
    Date independenceDay("1945/8/15");
    independenceDay.show();
    cout << birth.getYear() << "," << birth.getMonth() << "," << birth.getDay() << endl;

    return 0;
}