#include<iostream>
using namespace std;

inline bool is_Even(int n)
{
    return (n%2==0);
}
int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    
    if(is_Even(n))
        cout << n << " is even" << endl;
    else
        cout << n << " is odd" << endl;
    
    return 0;
}