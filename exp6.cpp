#include<iostream>
using namespace std;

void acceptInput(int *num1,int *num2,int *num3,int *num4)
{
    cout << "Enter Value of Num1 :";
    cin >> *num1;
    cout << "Enter Value of Num2 :";
    cin >> *num2;
    cout << "Enter Value of Num3 :";
    cin >> *num3;
    cout << "Enter Value of Num4 :";
    cin >> *num4;
}

void Sum(int *num1,int *num2,int *num3,int *num4)
{
    int sum = *num1 + *num2 + *num3 + *num4;
    cout << "The Sum of Four Numbers : " << sum;
}

int main()
{
    int num1, num2, num3, num4;
    acceptInput(&num1, &num2, &num3, &num4);
    Sum(&num1, &num2, &num3, &num4);

    return 0;
}