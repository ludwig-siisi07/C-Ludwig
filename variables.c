#include<stdio.h>
int main()
{
    //variable = a reusable container
    double pi = 3.141592653;
    double e = 2.7182818284590;
    /*doubles use the format specifier %lf(long float) and usually have 6 digits after decimal
    float precision is limited to 6 digits
    double precision is limited to 16 digits
    */
    printf("The value of pi is %lf\n", pi);
    printf("The value of e is %.12lf\n", e);

    return 0;
}