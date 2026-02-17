#include <iostream>
using namespace std;

class Box {
private:
    float length;
    float width;
    float height;

public:
    Box(float len, float w = 4.05f, float h = 5.06f) {
        length = len;
        width = w;
        height = h;
    }

    float calculateVolume() {
        return length * width * height;
    }

    void display() {
        cout << "Box Dimensions:" << endl;
        cout << "Length: " << length << " units" << endl;
        cout << "Width: " << width << " units" << endl;
        cout << "Height: " << height << " units" << endl;
        cout << "Volume: " << calculateVolume() << " cubic units" << endl;
    }
};

int main() {
    Box box1(2.5f, 3.0f, 4.0f);
    cout << "Box 1:" << endl;
    box1.display();
    
    Box box2(6.0f);
    cout << "\nBox 2 (with same width and height):" << endl;
    box2.display();
    
    Box box3(3.0f, 4.5f, 2.0f);
    cout << "\nBox 3 (with same height):" << endl;
    box3.display();
    
    return 0;
}