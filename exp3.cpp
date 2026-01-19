#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
   float startunits, endunits, unitsconsumed, amount;
   float subtotal, totalamount;
   string name;

    cout << "Enter Name : ";
    getline(cin,name);
    cout << "Enter the start units: ";
    cin >> startunits;

    cout << "Enter the end units: ";
    cin >> endunits;

    unitsconsumed = endunits - startunits;
    if (endunits < startunits)
    {
        printf("End units must be greater than or equal to start units.\n");
        return 0;
    }
    
    float totalunits = endunits - startunits;

    if (unitsconsumed < 0)
    {
        printf("End units must be greater than or equal to start units.\n");
        return 0;
    }

    if (unitsconsumed <= 100)   
    {
        amount = unitsconsumed * 4.28;
    }


    else if (unitsconsumed >= 101 && unitsconsumed <= 300)
    {
        amount = 100 * 4.28 + (unitsconsumed - 100) * 11.1;
    }

    else if (unitsconsumed >= 301 && unitsconsumed <= 500)
    {
        amount = 100 * 4.28 + 200 * 11.1 + (unitsconsumed - 300) * 15.38;
    }

    else if (unitsconsumed >= 501 && unitsconsumed <= 1000)
    {
        amount = 100 * 4.28 + 200 * 11.1 + 200 * 15.38 + (unitsconsumed - 500) * 17.68;
    }

    else if (unitsconsumed >= 1001)
    {
        amount = 100 * 4.28 + 200 * 11.1 + 200 * 15.38 + 500 * 17.68 + (unitsconsumed - 1000) * 19.50;
    }
    subtotal = amount + 130 + (unitsconsumed * 1.47);
    totalamount = subtotal + (0.16 * subtotal);
    float fixedcharge = 130;
    float transmissioncharge = 1.47 * unitsconsumed;
    float electricityDuty = 0.16 * subtotal;
    float total = totalamount;  // Removed duplicate addition of fixedcharge and transmissioncharge as they are already included in totalamount

    cout << fixed << setprecision(2);

    cout << "\n---------------------------------------------------------------\n";
    cout << "Electricity Bill Statement\n";
    cout << "---------------------------------------------------------------\n";
    cout << left << "Name: "<<name<<endl;
    cout << left << "Start Reading :"<<startunits<< setw(33) ;
    cout << right << "End Reading:" << endunits << endl;
    cout << left << setw(60) << setfill('.') << "Total Units Consumed" << totalunits << endl;
    cout << left << setw(60) << "Electricity consumption charge" << "Rs. " << totalamount << endl;
    cout << left << setw(60) << "Fixed charge" << "Rs. " << fixedcharge << endl;
    cout << left << setw(60) << "Transmission charge" << "Rs. " << transmissioncharge << endl;
    cout << left << setw(60) << "Electricity Duty (16%)" << "Rs. " << electricityDuty << endl;
    cout << "---------------------------------------------------------------\n";
    cout << left << setw(60) << "Total" << "Rs. " << total << endl;


    return 0;
}