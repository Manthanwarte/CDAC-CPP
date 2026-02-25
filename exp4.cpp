#include<iostream>
#include<string>
using namespace std;

class Student{
    private:
        int rollNo;
        string name;
        float marks;
        const float maxMarks;

    public:
        Student(int r, string n, float m, float max = 100.0) : rollNo(r), name(n), marks(m), maxMarks(max) {
        }

        void displayOutput() const {
            cout << "\n     Student Details  " << endl;
            cout << "Roll No: " << rollNo << endl;
            cout << "Name: " << name << endl;
            cout << "Marks Obtained: " << marks << " / " << maxMarks << endl;
            float percentage = (marks / maxMarks) * 100;
            cout << "Percentage: " << percentage << "%" << endl;
        }

        char getGrade() const {
            float percentage = (marks / maxMarks) * 100;
            if(percentage >= 90) return 'A';
            else if(percentage >= 80) return 'B';
            else if(percentage >= 70) return 'C';
            else if(percentage >= 60) return 'D';
            else return 'F';
        }
};

int main(){
    int rollNo;
    string name;
    float marks, maxMarks;
    
    cout << "Enter Student Details:" << endl;
    cout << "Roll No: ";
    cin >> rollNo;
    cout << "Name: ";
    cin >> name;
    cout << "Marks Obtained: ";
    cin >> marks;
    cout << "Maximum Marks: ";
    cin >> maxMarks;
    
    const Student s1(rollNo, name, marks, maxMarks);
    s1.displayOutput();
    cout << "\nGrade: " << s1.getGrade() << endl;
    cout << endl;
    
    return 0;
}