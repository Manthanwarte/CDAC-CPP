#include<stdio.h>

int main()
{
   float p, r , a ;
   int n , q ;
   
   for (int i = 1; i <= 10 ; i++)
   {
    printf("  \n Set \n %d ",i );
    printf("\n Enter principle (p):");
    scanf("%f", &p);

    printf("Enter rate (r): ");
    scanf("%f", &r);

    printf("Enter no. of years (n): ");
    scanf("%d", &n);

    printf("Enter time in years  (q): ");
    scanf("%d", &q);

    a = p*(1+r/q)*n*q;
    printf("The amount is = %f ", a);

   }
    return 0;
}