#include<stdio.h>
int main()
{
   float startunits, endunits, unitsconsumed, amount;
   float subtotal, totalamount;

    printf("Enter the start units: ");
    scanf("%f", &startunits);

    printf("Enter the end units: ");
    scanf("%f", &endunits);

    unitsconsumed = endunits - startunits;

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
    totalamount = subtotal + (0.16f * subtotal);
   

    printf("The amount is: %f", totalamount);

    return 0;
}