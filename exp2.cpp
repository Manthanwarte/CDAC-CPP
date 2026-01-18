#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float buyprice, sellprice;
    int quantity;
    

    cout << "Enter Buy Price: ";
    cin >> buyprice;

    cout << "Enter Sell Price: ";
    cin >> sellprice;

    cout << "Enter Quantity: ";
    cin >> quantity;

    float sellamount = sellprice * quantity;
    float buyamount = buyprice * quantity;
    float turnover = sellamount + buyamount;

    float brokerage = 0.0003 * buyamount + 0.0003 * sellamount;
    float service_tax = 0.1036 * brokerage;
    
    float stt = 0.00025 * sellamount;
    float stamp_duty = 0.00002 * turnover;
    float regulatory_charges = 0.00004 * turnover;

    float total_charges = brokerage + service_tax + stt + stamp_duty + regulatory_charges;
    float gross_profit = sellamount - buyamount;
    float net_profit = gross_profit - total_charges;

  cout << "\n--------------------------------------------------------------------\n";
    cout <<  "                   "  <<  "Share Trading Statement\n";
    cout << "--------------------------------------------------------------------\n";
    cout << fixed << setprecision(2);
    cout << left << setw(60) << setfill('.')<< "Selling Price" << "Rs " << sellamount << endl;
    cout << left << setw(60) << "Purchase Price" << "Rs " << buyprice << endl;
    cout << left << setw(60) << "Total Brokerage" << "Rs " << brokerage << endl;
    cout << left << setw(60) << "Security Transaction Tax" << "Rs " << stt << endl;
    cout << left << setw(60) << "Stamp Duty" << "Rs " << stamp_duty << endl;
    cout << left << setw(60) << "Regulatory Charges" << "Rs " << regulatory_charges << endl;
    cout << left << setw(60) << "Total taxes" << "Rs " << total_charges << endl;
    cout << "--------------------------------------------------------------------\n";
    cout << left << setw(60) << "Profit" << "Rs " << net_profit << endl;

    return 0;
}

