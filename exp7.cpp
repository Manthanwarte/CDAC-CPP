#include <iostream>
#include <string>
using namespace std;

struct Employee {
    int empID;
    string empName;
    float empSalary;

    void AcceptData() {
        cout << "Enter Employee ID: ";
        cin >> empID;
        cin.ignore();
        cout << "Enter Employee Name: ";
        getline(cin, empName);
        cout << "Enter Employee Salary: ";
        cin >> empSalary;
    }

    void printEmpData() {
        cout << "\n--- Employee Details ---\n";
        cout << "ID: " << empID << endl;
        cout << "Name: " << empName << endl;
        cout << "Salary: " << empSalary << endl;
    }
};

int main() {
    Employee emp;
    emp.AcceptData();
    emp.printEmpData();
    return 0;
}