#ifndef DATE_H
#define DATE_H

#pragma pack(push, 1) 

class Date {
private:
    int day;
    int month;
    int year;

public:
    Date();
    Date(int d, int m, int y);

    void setDate(int d, int m, int y);
    void showDate() const;
    void acceptDate();
    bool checkLeapyear();
};

#pragma pack(pop)  

#endif
