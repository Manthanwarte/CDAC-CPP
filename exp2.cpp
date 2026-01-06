#include <iostream>
using namespace std;
int main() 
{
    float paperLength, paperWidth;
    float top, bottom, left, right;
    int pointSize, doubleSpaced;
    float usableWidth, usableLength;
    int charsPerLine, lines;

    cout << "Enter paper length (inches):" ;
    cin >> paperLength;

    cout << "Enter paper width (inches): ";
    cin >>paperWidth;

    cout << "Enter top margin (inches): ";
    cin >> top;
    cout <<"Enter bottom margin (inches): ";
    cin >> bottom;
    cout <<"Enter left margin (inches): ";
    cin >> left;
    cout <<"Enter right margin (inches): ";
    cin >> right;

    cout <<"Enter point size: ";
    cin >>pointSize;

    cout <<"Is it double spaced? (1 = Yes, 0 = No): ";
    cin >>doubleSpaced;

    if (doubleSpaced)
    {
        pointSize *= 2;
    }
    usableWidth = paperWidth - left - right;
    usableLength = paperLength - top - bottom;

    charsPerLine = (usableWidth * 72) / pointSize;
    lines = (usableLength * 72) / pointSize;

    cout << "\nCharacters per line: " << charsPerLine << endl;
    cout << "\nNumber of lines: " << lines << endl;

    return 0;
}
