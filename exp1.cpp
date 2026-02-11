#include<iostream>
using namespace std;

class Time{
    private:
        int hour;
        int minute;
        int second;
    
    public:
        Time(){
            hour = 0;
            minute = 0;
            second = 0;
        }
        
        Time(int h, int m, int s){
            hour = h;
            minute = m;
            second = s;
        }
        
        void acceptInput(){
            cout << "Enter hour: ";
            cin >> hour;
            cout << "Enter minute: ";
            cin >> minute;
            cout << "Enter second: ";
            cin >> second;
        }

        void displayTime(){
            cout << hour << ":" << minute << ":" << second << endl;
        }
};

int main()
{
    Time t;
    int choice;
    
    cout << " Calculate Time" << endl;
    cout << "1. Enter time" << endl;
    cout << "2. Display time" << endl;
    cout << "3. Exit" << endl;
    
    do {
        cout << "\nEnter your choice (1-3): ";
        cin >> choice;
        
        switch(choice){
            case 1:
                t.acceptInput();
                cout << "Time saved successfully!" << endl;
                break;
            case 2:
                cout << "Current time: ";
                t.displayTime();
                break;
            case 3:
                cout << "Exit" << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while(choice != 3);
    
    return 0;
}