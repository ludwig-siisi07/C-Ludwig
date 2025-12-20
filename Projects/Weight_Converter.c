#include<stdio.h>
int main()
{
    //Intro to the kg to pounds calc
    printf("WELCOME TO THE WEIGHT CONVERSION CALCULATOR\n");
    printf("1. Kilograms to Pounds\n");
    printf("2. Pounds to Kilograms\n");
    
    //my variable declarations
    int choice = 0;
    double weight = 0.0;
    double conversion = 0.0;
    const double constant = 2.204621;

    // Section for conditionals
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1){
        printf("Enter your weight in kilograms: ");
        scanf("%lf",&weight);
        conversion = weight * constant;
        printf("%.2lf kilograms is equal to %.2lf pounds\n",weight,conversion);
    }

    else if (choice == 2){
        printf("Enter your weight in pounds: ");
        scanf("%lf",&weight);
        conversion = weight / constant;
        printf("%.2lf pounds is equal to %.2lf kilograms\n",weight,conversion);
    }

    else{
        printf("INVALID INPUT!");
    }

    return 0;
}