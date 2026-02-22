#include<iostream>
#include<string>
using namespace std;

class Employee{
    private:
        int emp_id;
        string emp_name;
        float empsal;
        mutable float bonus_result;
    
    public:
        Employee(int id, string name, float sal) : emp_id(id), emp_name(name), empsal(sal), bonus_result(0.0) {}
        
        void displayOutput() const {
            cout << "        EMPLOYEE DETAILS" << endl;
            cout << "Employee ID    : " << emp_id << endl;
            cout << "Employee Name  : " << emp_name << endl;
            cout << "Employee Salary: ₹ " << empsal << endl;
        }
        
        void updateSalary(float new_sal) {
            empsal = new_sal;
        }
        
        float getBonus() const {
            bonus_result = empsal * 0.1;
            return bonus_result;
        }
};

int main() {
    int id;
    string name;
    float salary;
    
    cout << "Enter Employee Details:" << endl;
    
    cout << "Employee ID: ";
    cin >> id;
    
    cout << "Employee Name: ";
    cin >> name;
    
    cout << "Employee Salary: ₹";
    cin >> salary;
    
    const Employee emp(id, name, salary);
    
    emp.displayOutput();
    
    float bonus = emp.getBonus();
    cout << "Calculated Bonus: ₹" << bonus << endl;
    cout << "\n";
    
    return 0;
}