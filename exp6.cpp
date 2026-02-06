#include<iostream>
using namespace std;
bool checkPassword(string s) {
    if(s.length() < 8) return false;

    bool hasDigit = false;
    bool upper = false;
    bool lower = false;
    bool special = false;

    for(int i=0 ; i<s.length() ; i++) {
        if(isupper(s[i])) upper = true;
        else if(islower(s[i])) lower = true;
        else if(isdigit(s[i])) hasDigit = true;
        else special = true;
    }
    return hasDigit & upper & lower & special;
}
int main() {
    
    string pass;
    cout<<"Enter password : ";
    getline(cin,pass);
    if(checkPassword(pass)) cout<<"Your password is strong";
    else cout<<"Enter should have 8 character\nIt should have one uppercase and one lowercase\nThe password must contains one digit\nOne special character";
}