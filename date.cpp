#include <iostream>
#include "date.h"
using namespace std;

Date::Date() {
    day = 1;
    month = 1;
    year = 2000;
}

Date::Date(int d, int m, int y) {
    day = d;
    month = m;
    year = y;
}

void Date::setDate(int d, int m, int y) {
    day = d;
    month = m;
    year = y;
}
void Date::acceptDate() {
    cout << "Enter day : ";
        cin >> day;
        if(day < 1 || day > 31) {
            cout << "Enter valid Date" << endl;
            return;
        }

        cout << "Enter Month : ";
        cin >> month;
        if(month < 1 || month > 12) {
            cout << "Enter valid month" << endl;
            return;
        }

        cout << "Enter year : ";
        cin >> year;

        if(month == 2) {
            if(Date::checkLeapyear() && day > 29) {
                cout << "Enter valid Date" << endl;
                return;
            }
            if(!Date::checkLeapyear() && day > 28) {
                cout << "Enter valid Date" << endl;
                return;
            }
        }

        if((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) {
            cout << "Enter valid Date" << endl;
            return;
        }

}
bool Date::checkLeapyear() {
        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
            return true;
        else
            return false;
    }
void Date::showDate() const {
    cout << day << "-" << month << "-" << year << endl;
}
