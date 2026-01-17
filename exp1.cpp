#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    char Movie_name;
    string movieName;
    int adultTicketPrice, childTicketPrice, adultTicketSold, childTicketSold, percentage;
    float grossAmount, amountDonated, netsale;
    int noOfTicketsSold;

    cout << "Enter Movie Name : ";
    getline(cin, movieName);

    cout << "Enter Adult Ticket Price : ";
    cin >> adultTicketPrice;

    cout << "Enter Child Ticket Price : ";
    cin >> childTicketPrice;

    cout << "Enter No. of Adult Ticket Sold : ";
    cin >> adultTicketSold;

    cout << "Enter No. of Child Ticket Sold : ";
    cin >> childTicketSold;

    cout << "Percentage of Gross Amount Donated : ";
    cin >> percentage;

    grossAmount = (adultTicketPrice * adultTicketSold) + (childTicketPrice * childTicketSold);
    noOfTicketsSold = adultTicketSold + childTicketSold;
    grossAmount = (adultTicketPrice * adultTicketSold) + (childTicketPrice * childTicketSold);
    amountDonated = (grossAmount * percentage) / 100;
    netsale = grossAmount - amountDonated;
    cout << fixed << setprecision(2);


    // cout << left << setw(30) << setfill('.') << movieName << endl;
    // cout << left << setw(30) << setfill('*') << endl;
    for(int i = 0 ; i <= 40 ; i++)
    {
        cout << "-*";
    }
    cout << endl ;
    cout << left << setw(70) << setfill('.') << "Movie Name : "<< " " << movieName << endl;
    cout << left << setw(70) << setfill('.') << "Number of Tickets Sold : " << " " << noOfTicketsSold << endl;
    cout << left << setw(70) << setfill('.') << "Gross Amount : " << " $ " << grossAmount << endl;
    cout << left << setw(70) << setfill('.') << "Percentage of Gross Amount Donated : " << "  "<< percentage  << endl;
    cout << left << setw(70) << setfill('.') << "Amount Donated : " << " $ " << amountDonated << endl;
    cout << left << setw(70) << setfill('.') << "Net Sale : " << " $" << netsale << endl;
}
                                                    
                                                                                                                                                                                                                        