#include<stdio.h>
#include<math.h>    
int main()
{
    double P = 0.0;
    double r = 0.0;
    double t = 0.0;
    int n = 0;
    double total = 0.0;

    char currency = '$';

    printf("Enter the principal(P): "); 
    scanf("%lf",&P);

    printf("Enter the interest rate (r): "); 
    scanf("%lf",&r);

    printf("Enter the number of years(t): "); 
    scanf("%lf",&t);
    
    printf("Enter the number of times compounded/year (n): "); 
    scanf("%d",&n);

    total = P * (pow(1 + (r/100),(t/n)));

    printf("After %.1lf years, the total amount to be paid will be %c%.2lf ", t,currency,total);



   return 0;
}