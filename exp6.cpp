#include<iostream>
using namespace std;

class math_operation {
public:
    int max(int a, int b) {
        return (a > b) ? a : b;
    }
    
    int max(int a, int b, int c) {
        return max(max(a, b), c);
    }
    
    int max(int a, int b, int c, int d) {
        return max(max(a, b, c), d);
    }
};

int main() {
    math_operation math;
    
    cout << "Max of (12, 21) is " << math.max(12, 21) << endl;
    cout << "Max of (5, 3, 8) is " << math.max(5, 3, 8) << endl;
    cout << "Max of (12, 7, 21, 1) is " << math.max(12, 7, 21, 1) << endl;
    
    return 0;
}