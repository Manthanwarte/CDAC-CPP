#include<stdio.h>
int main()
{
    float buyprice, sellprice;
    int quantity;

    printf("Enter Buy Price: ");
    scanf("%f",&buyprice);

    printf("Enter Sell Price:");
    scanf("%f",&sellprice);

    printf("Enter Quantity:");
    scanf("%d",&quantity);

    float buyamount = buyprice * quantity ;
    float sellamount = sellprice * quantity ;
    float turnover = sellamount + buyamount ;

    float Total_Brokerage = 0.0003f * buyamount + 0.0003f * sellamount;

    float service_tax = 0.1036f * Total_Brokerage;

    float stt = 0.00025f * sellamount;

    float stamp_duty = 0.00002f * turnover;

    float regulatory_charges = 0.00004f * turnover;

    float total_charges = Total_Brokerage + service_tax + stt + stamp_duty + regulatory_charges;

    float gross_profit = sellamount - buyamount;
    float net_profit = gross_profit - total_charges;



    printf("Turnover: %.2f\n", turnover);
    printf("Brokerage: %.2f\n", Total_Brokerage);
    printf("Service Tax: %.2f\n", service_tax);
    printf("STT: %.2f\n", stt);
    printf("Stamp Duty: %.2f\n", stamp_duty);
    printf("Regulatory Charges: %.2f\n", regulatory_charges);
    printf("Total Charges: %.2f\n", total_charges);
    printf("Net Profit: %.2f\n", net_profit);
    printf("Gross Profit: %.2f\n", gross_profit);
    return 0;

    


}