#include<stdio.h>
#include<math.h>
int main()
{
    double radius = 0.0;
    double area = 0.0;
    double SurfaceArea = 0.0;
    double volume = 0.0;
    const double pi = 3.141592653589793;

    printf("Enter the radius: ");
    scanf("%lf", &radius);

    //formulae
    area = pi * pow(radius,2);
    SurfaceArea = 4*pi*pow(radius,2);
    volume = (4*pi*pow(radius,3))/3;

    printf("Area: %.2lf \n",area);
    printf("Surface Area: %.2lf \n",SurfaceArea);
    printf("Volume: %.2lf\n",volume);
    

    return 0;
}