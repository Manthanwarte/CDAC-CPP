#include <iostream>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

public:
    Date() {
        day = 1;
        month = 1;
        year = 2000;
    }

    Date(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    ~Date() {
        
    }

    void setDay(int d) {
        day = d;
    }

    void setMonth(int m) {
        month = m;
    }

    void setYear(int y) {
        year = y;
    }

    int getDay() const {
        return day;
    }

    int getMonth() const {
        return month;
    }

    int getYear() const {
        return year;
    }

    void initDate() {
        day = 1;
        month = 1;
        year = 2000;
    }

    void acceptDateFromConsole() {
        cout << "Enter day: ";
        cin >> day;
        cout << "Enter month: ";
        cin >> month;
        cout << "Enter year: ";
        cin >> year;
    }

    void printDateOnConsole() {
        cout << "Date: " << (day < 10 ? "0" : "") << day << "/"
             << (month < 10 ? "0" : "") << month << "/"
             << year << endl;
    }

    bool isLeapYear() {
        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }
};

int main() {
    Date myDate;
    int choice;

    do {
        cout << "\n--- Date Menu ---\n";
        cout << "1. Initialize Date\n";
        cout << "2. Accept Date\n";
        cout << "3. Print Date\n";
        cout << "4. Check Leap Year\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                myDate.initDate();
                cout << "Date initialized.\n";
                break;
            case 2:
                myDate.acceptDateFromConsole();
                break;
            case 3:
                myDate.printDateOnConsole();
                break;
            case 4:
                if(myDate.isLeapYear())
                    cout << myDate.getYear() << " is a Leap Year.\n";
                else
                    cout << myDate.getYear() << " is NOT a Leap Year.\n";
                break;
            case 5:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice Try again.\n";
        }
    } while(choice != 5);

    return 0;
}