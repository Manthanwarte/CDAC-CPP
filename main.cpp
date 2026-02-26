#include "date.h"
#include<iostream>
using namespace std;
int main() {
    Date d;
    d.setDate(1,1,2000);

    int choice;
    bool ans = false;

    cout << "1 For Initialize Date\n2 For Accept Date\n3 For Printing Date\n4 For Checking leap year\n0 For exit" << endl;

    do {
        cout << "Enter choice : ";
        cin >> choice;

        switch(choice) {
            case 1:
                d.setDate(1,1,2000);
                cout << endl;
                break;

            case 2:
                d.acceptDate();
                cout << endl;
                break;

            case 3:
                d.showDate();
                cout << endl;
                break;

            case 4:
                ans = d.checkLeapyear();
                if(ans)
                    cout << "The year is leap year\n" << endl;
                else
                    cout << "Year is not Leap year\n" << endl;
                break;

            case 0:
                break;

            default:
                cout << "Invalid choice" << endl;
        }
    } while(choice != 0);
}
