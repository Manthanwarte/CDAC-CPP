#include<iostream>
using namespace std;

typedef struct employee{
    int empID;
    char empName[20];
    float empSalary;
}emp_t;

void acceptData(employee *emp){
    cout << "Enter Employee ID : ";
    cin >> emp->empID;
    cout << "Enter Employee Name : ";
    cin >> emp->empName;
    cout << "Enter Employee Salary : ";
    cin >> emp->empSalary;
}
void printData(employee *emp){
    cout << "Employee ID : " << emp->empID << endl;
    cout << "Employee Name : " << emp->empName << endl;
    cout << "Employee Salary : " << emp->empSalary << endl;
}
int main(){
    employee emp;

    acceptData(&emp);
    printData(&emp);
    
    
}