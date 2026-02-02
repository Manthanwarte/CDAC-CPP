#include<iostream>
using namespace std;
int gcd(int a , int b) {
    while (true)
    {
        int rem = 0;
        rem = a % b;
        if(rem == 0) return b;

        a = b;
        b = rem;
    }
    
}
int main() {
    int a, b;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;
    int g = gcd(a,b);
    cout<<"The LCM of the number is : "<<(a*b)/g;
}