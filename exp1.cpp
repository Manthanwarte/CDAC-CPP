#include <iostream>
using namespace std;

int main() {
    int num, newNum = 0, place = 1, digit, newDigit;
    
    cout << "Enter a  digit number: ";
    cin >> num;
    
    while (num > 0) {
        digit = num % 10;         
        newDigit = (digit + 1) % 10;  
        newNum = newDigit * place + newNum;
        place *= 10;                   
        num /= 10;                     
    }
    
    cout << "The new number is : " << newNum << endl;
    return 0;
}