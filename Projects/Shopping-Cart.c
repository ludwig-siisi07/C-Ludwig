#include<stdio.h>
#include<string.h>
int main()
{
    //Variables for calculations
    char item[30] = "";
    int count = 0;
    float price = 0.0f;
    float total = 0.0f;
    char currency = '$';

    //User inputs for pricing
    
    printf("What item would you like to buy?: ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item)-1] = '\0';

    printf("What is the price for each?: ");
    scanf("%f",&price);

    printf("How many would you like?: ");
    scanf("%d",&count);

    total = count * price;
    printf("You have bought %d %s/s\n", count,item);
    printf("The total is: %c%.2f", currency, total);

    return 0;
}