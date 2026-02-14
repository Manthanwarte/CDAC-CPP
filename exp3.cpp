#include<iostream>
using namespace std;

int addition(int a, int b) {
    return a + b;
}

float addition(float a, float b) {
    return a + b;
}

int addition(int a, int b, int c) {
    return a + b + c;
}

float addition(float a, float b, float c) {
    return a + b + c;
}

float addition(float a) {
    return a;
}

int addition(int a, int b, int c, int d, int e) {
    return a + b + c + d + e;
}

float addition(float a, float b, float c, float d) {
    return a + b + c + d;
}

float addition(char a, float b, float c, float d) {
    return static_cast<float>(a) + b + c + d;
}

int main() {
    cout << "2 ints: " << addition(5, 3) << endl;
    cout << "2 floats: " << addition(4.2f, 1.8f) << endl;
    cout << "3 ints: " << addition(1, 2, 3) << endl;
    cout << "3 floats: " << addition(1.1f, 2.2f, 3.3f) << endl;
    cout << "1 float: " << addition(7.5f) << endl;
    cout << "1 int + 4 ints: " << addition(1, 2, 3, 4, 5) << endl;
    cout << "4 floats: " << addition(1.1f, 2.2f, 3.3f, 4.4f) << endl;
    cout << "1 char + 3 floats: " 
         << addition('A', 1.1f, 2.2f, 3.3f)<< endl;

    return 0;
}