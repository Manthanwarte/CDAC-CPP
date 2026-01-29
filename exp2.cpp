#include <iostream>
using namespace std;

struct Date {
    int day;
    int month;
    int year;

    void initDate() {
        day = 1;
        month = 1;
        year = 2000;
    }

    void acceptDate() {
        cout << "Enter day: ";
        cin >> day;
        cout << "Enter month: ";
        cin >> month;
        cout << "Enter year: ";
        cin >> year;
    }

    void printDate() {
        cout << "Date: " << (day < 10 ? "0" : "") << day << "/"
             << (month < 10 ? "0" : "") << month << "/"
             << year << endl;
    }

    bool isLeapYear() {
        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }
};

void printDateonconsole(struct Date *dt) {
    if (dt != nullptr) {
        cout << "Date: " << (dt->day < 10 ? "0" : "") << dt->day << "/"
             << (dt->month < 10 ? "0" : "") << dt->month << "/"
             << dt->year << endl;
    }
}

void acceptDatefromConsole(struct Date *dt) {
    if (dt != nullptr) {
        cout << "Enter day: ";
        cin >> dt->day;
        cout << "Enter month: ";
        cin >> dt->month;
        cout << "Enter year: ";
        cin >> dt->year;
    }
}

bool isLeapyear(struct Date dt) {
    return (dt.year % 4 == 0 && dt.year % 100 != 0) || (dt.year % 400 == 0);
}

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
                acceptDatefromConsole(&myDate);
                break;
            case 3:
                printDateonconsole(&myDate);
                break;
            case 4:
                if(isLeapyear(myDate))
                    cout << myDate.year << " is a Leap Year.\n";
                else
                    cout << myDate.year << " is NOT a Leap Year.\n";
                break;
            case 5:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while(choice != 5);

    return 0;
}