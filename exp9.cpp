#include<iostream>
using namespace std;

int recursiveSum(int arr[] , int n , int i , int sum , int m) {
    if(i == m || i >= n) return sum;
    return recursiveSum(arr , n , i+1 , sum+arr[i] , m);
}
int main() {
    int n , m;
    cout<<"Enter the element in the array : ";
    cin>>n;

    int arr[n];

    for(int i=0 ; i<n ; i++) {
        cout<<"Enter the element in the array : ";
        cin>>arr[i];
    }
    cout<<"Enter number of elements to sum : ";
    cin>>m;
    
    if(m > n) {
        cout<<"Error m is not eqal to n"<<endl;
        m = n;
    }
    
    cout<<"The sum of the array is : " <<recursiveSum(arr , n , 0 , 0 , m);
}