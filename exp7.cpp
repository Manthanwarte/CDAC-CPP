#include <iostream>
#include <string>
using namespace std;

string longestCommonPrefix(string arr[], int n) {
    string common = "";

    if (n == 0)
        return common;

    for (int i = 0; i < arr[0].length(); i++) {
        char ch = arr[0][i];

        for (int j = 1; j < n; j++) {
            if (i >= arr[j].length() || arr[j][i] != ch) {
                return common;
            }
        }
        common += ch;
    }
    return common;
}

int main() {
    int n;
    cout << "Enter number of strings: ";
    cin >> n;

    string arr[n];
    cout << "Enter the strings:" << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    string result = longestCommonPrefix(arr, n);

    cout << "The longest common prefix is: " << result << endl;

    return 0;
}
