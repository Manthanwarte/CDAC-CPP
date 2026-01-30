#include<iostream>
using namespace std;

inline double cToF(double c) {
    return (c * 9.0 / 5.0) + 32.0;
}

inline double fToC(double f) {
    return (f - 32.0) * 5.0 / 9.0;
}

inline int myMin(int a, int b) {
    return (a < b) ? a : b;
}

inline double simpleInterest(double p, double r, double t) {
    return (p * r * t) / 100.0;
}

inline double amount(double p, double r, double t) {
    return p + simpleInterest(p, r, t);
}

int main()
{
    double celsius = 21.0;
    cout << celsius << " Celsius = " << cToF(celsius) << " Fahrenheit" << endl;
    
    double fahrenheit = 89.0;
    cout << fahrenheit << " Fahrenheit = " << fToC(fahrenheit) << " Celsius" << endl;
    
    int num1 = 07, num2 = 12;
    cout << "Minimum of " << num1 << " and " << num2 << " is " << myMin(num1, num2) << endl;
    
    double principal = 1000.0, rate = 5.0, time = 2.0;
    cout << "Simple Interest for P=" << principal << ", R=" << rate << "%, T=" << time << " years = " 
         << simpleInterest(principal, rate, time) << endl;
    
    cout << "Amount for P=" << principal << ", R=" << rate << "%, T=" << time << " years = " 
         << amount(principal, rate, time) << endl;
    
    return 0;
}