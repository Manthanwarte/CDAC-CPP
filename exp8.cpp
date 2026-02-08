#include <iostream>
using namespace std;

int countDuplicateElements(int arr[], int n) {
    int count = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            count++;

            while (i < n && arr[i] == arr[i - 1]) {
                i++;
            }
        }
    }
    return count;
}

int main() {
    int n;
    cout << "Enter the length of the array : ";
    cin >> n;

    int* arr = new int[n];
    cout << "Enter elements in sorted order:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Count of duplicate elements in the array is : "
         << countDuplicateElements(arr, n) << endl;

    delete[] arr;
    return 0;
}
