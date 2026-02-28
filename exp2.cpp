#include<iostream>
#include<string>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

public:
    Date() {
        day = 00;
        month = 00;
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

    void setDate(int d, int m, int y) {
        day = d;
        month = m;
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

    void input() {
        cout << "Enter day: ";
        cin >> day;
        cout << "Enter month: ";
        cin >> month;
        cout << "Enter year: ";
        cin >> year;
    }

    void output() const {
        cout << day << "-" << month << "-" << year;
    }
};

class Employee {
private:
    int emp_id;
    string dept;
    Date joiningDate;

public:
    Employee() {
        emp_id = 0;
        dept = "";
    }

    Employee(int id, string d, Date jd) {
        emp_id = id;
        dept = d;
        joiningDate = jd;
    }

    ~Employee() {
    }

    void setEmpId(int id) {
        emp_id = id;
    }

    void setDept(string d) {
        dept = d;
    }

    void setJoiningDate(Date jd) {
        joiningDate = jd;
    }

    void setJoiningDate(int d, int m, int y) {
        joiningDate.setDate(d, m, y);
    }

    int getEmpId() const {
        return emp_id;
    }

    string getDept() const {
        return dept;
    }

    Date getJoiningDate() const {
        return joiningDate;
    }

    void input() {
        cout << "\nEnter Employee ID: ";
        cin >> emp_id;
        cout << "Enter Department: ";
        cin.ignore();
        getline(cin, dept);
        cout << "Enter Joining Date:" << endl;
        joiningDate.input();
    }

    void output() const {
        cout << "\nEmployee Details:" << endl;
        cout << "Employee ID: " << emp_id << endl;
        cout << "Department: " << dept << endl;
        cout << "Joining Date: ";
        joiningDate.output();
        cout << endl;
    }
};

class Student {
private:
    int rollNo;
    float marks;
    string course;
    Date joining_date;
    Date end_date;

public:
    Student() {
        rollNo = 0;
        marks = 0.0;
        course = "";
    }

    Student(int rn, float m, string c, Date jd, Date ed) {
        rollNo = rn;
        marks = m;
        course = c;
        joining_date = jd;
        end_date = ed;
    }

    ~Student() {
    }

    void setRollNo(int rn) {
        rollNo = rn;
    }

    void setMarks(float m) {
        marks = m;
    }

    void setCourse(string c) {
        course = c;
    }

    void setJoiningDate(Date jd) {
        joining_date = jd;
    }

    void setJoiningDate(int d, int m, int y) {
        joining_date.setDate(d, m, y);
    }

    void setEndDate(Date ed) {
        end_date = ed;
    }

    void setEndDate(int d, int m, int y) {
        end_date.setDate(d, m, y);
    }

    int getRollNo() const {
        return rollNo;
    }

    float getMarks() const {
        return marks;
    }

    string getCourse() const {
        return course;
    }

    Date getJoiningDate() const {
        return joining_date;
    }

    Date getEndDate() const {
        return end_date;
    }

    void input() {
        cout << "\nEnter Roll Number: ";
        cin >> rollNo;
        cout << "Enter Marks: ";
        cin >> marks;
        cout << "Enter Course: ";
        cin.ignore();
        getline(cin, course);
        cout << "Enter Joining Date:" << endl;
        joining_date.input();
        cout << "Enter End Date:" << endl;
        end_date.input();
    }

    void output() const {
        cout << "\nStudent Details:" << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
        cout << "Course: " << course << endl;
        cout << "Joining Date: ";
        joining_date.output();
        cout << endl;
        cout << "End Date: ";
        end_date.output();
        cout << endl;
    }
};

int main() {

    Date d1;
    cout << "Default Date: ";
    d1.output();
    cout << endl;
    
    // Date d2(25, 12, 2024);
    // cout << "Date with parameters: ";
    // d2.output();
    // cout << endl;
    
    // Date d3;
    // d3.setDay(15);
    // d3.setMonth(6);
    // d3.setYear(2023);
    // cout << "Date after setting values: ";
    // d3.output();
    // cout << endl;
    // cout << "Day: " << d3.getDay() << ", Month: " << d3.getMonth() << ", Year: " << d3.getYear() << endl;
    
 
    
    // Employee e1;
    // e1.output();
    
    // Employee e2;
    // e2.setEmpId(101);
    // e2.setDept("IT");
    // e2.setJoiningDate(15, 6, 2023);
    // e2.output();
    // cout << "Emp ID: " << e2.getEmpId() << ", Dept: " << e2.getDept() << endl;
    
    Employee e3;
    e3.input();
    e3.output();
    
   
    
    // Student s1;
    // s1.output();
    
    // Student s2;
    // s2.setRollNo(501);
    // s2.setMarks(85.5);
    // s2.setCourse("Computer Science");
    // s2.setJoiningDate(1, 6, 2021);
    // s2.setEndDate(30, 5, 2024);
    // s2.output();
    // cout << "Roll No: " << s2.getRollNo() << ", Marks: " << s2.getMarks() << ", Course: " << s2.getCourse() << endl;
    
    Student s3;
    s3.input();
    s3.output();
    
    return 0;
}
