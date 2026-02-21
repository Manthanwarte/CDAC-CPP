#include<iostream>
using namespace std;

class Cylinder {
private:
    int radius;
    int height;
    const double pi;

public:
    Cylinder() : pi(3.14) {
        radius = 0;
        height = 0;
    }

    Cylinder(int r, int h) : pi(3.14) {
        radius = r;
        height = h;
    }

    int getRadius() const {
        return radius;
    }

    void setRadius(int r) {
        radius = r;
    }

    int getHeight() const {
        return height;
    }

    void setHeight(int h) {
        height = h;
    }

    double calculateVolume() const {
        return pi * radius * radius * height;
    }
};

int main() {
    int r, h;
    
    cout << "Enter radius of cylinder : ";
    cin >> r;
    
    cout << "Enter height of cylinder : ";
    cin >> h;
    
    Cylinder c1(r, h);
    
    cout << endl;
    cout << "Cylinder Details" << endl;
    cout << "Radius: " << c1.getRadius() << endl;
    cout << "Height: " << c1.getHeight() << endl;
    cout << "Volume: " << c1.calculateVolume() << endl;

    return 0;
}

