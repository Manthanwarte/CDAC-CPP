#include<iostream>
#include<string>
using namespace std;

class Chair{
    private:
        int height;
        int width;
        double price;
        string color;

    public:
        Chair(){
            height = 0;
            width = 0;
            price = 0.0;
            color = "";

        }

        Chair(int h , int w , double p, string c){
            height = h;
            width = w;
            price = p;
            color = c;
        }

        void Input(){
            cout << "Enter height : ";
            cin >> height;
            cout << "Enter width : ";
            cin >> width;
            cout << "Enter price : ";
            cin >> price;
            cout << "Enter color : ";
            cin >> color;
        }

        void Display() {
            cout << "Height : " << height << endl;
            cout << "Width : " << width << endl;
            cout << "Price : " << price << endl;
            cout << "Color : " << color << endl;
        }

        static void SetPrice(Chair &chair , double newprice){
            chair.price = newprice;
        }

        ~Chair(){
            cout << "Chair is destructed " << endl;
        }        
};
int main()
{
    Chair chair1;
    chair1.Input();
    cout << "\nChair:" << endl;
    chair1.Display();

    return 0;
}