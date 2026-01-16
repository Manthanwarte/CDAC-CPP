#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    
    float machinecost,earningperyear,salvagecost,alternativeinvestmentRate;
    int year = 1; 
    int machineProfit,alternativeincome;
    cout<<"Enter machine cost :";
    cin>>machinecost;
    
    cout<<"Enter earning per year :";
    cin>>earningperyear;
    cout<<"Enter salvagecost :";
    cin>>salvagecost;
    cout<<"Enter Alternative Investment Rate (%):";
    cin>>alternativeinvestmentRate;

    machineProfit = machinecost;
    alternativeincome = machinecost;
    alternativeinvestmentRate /=100;

    while(year<=100)
    {
            machineProfit = salvagecost+(earningperyear*year);
            alternativeincome = alternativeincome * (1 + alternativeinvestmentRate);
            if(machineProfit>alternativeincome)
            {
                cout<<"Years required = "<<year;
                break;
            }else
            {
                cout <<setw(40)<< "Year :" << year << "  " << machineProfit << "  ||  " << alternativeincome << endl;
                
            }
            year++;
    }   
    
}

