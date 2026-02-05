#include<iostream>
#include<string>
using namespace std;

bool is_palindrome(string s) {

    int left = 0;
    int right = s.length() - 1;
    while (left < right) {
        if (s[left] != s[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    
    if (is_palindrome(s)) {
        cout << "The string is a palindrome" << endl;
    } else {
        cout << "The string is not a palindrome" << endl;
    }
    
    return 0;
}