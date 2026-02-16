#include<stdio.h>
#include<stdbool.h>
//GLOBL VARIABLES
float service_charge = 5.00;
double amount;
int count = 0;
double revenue = 0.0;   
double calculate_bill(double units_consumed);
void revenue_data();
int main()
{
    //VARIABLE DECLARATIONS
    int proceed = 1; 
    double units_consumed;
        
    // CONDITIONAL TO CALCULATE BILLING PRICES
        do
        {
            //CUSTOMER ID INPUT
            int customer_id;
            printf("Enter Customer ID: ");
            scanf("%d",&customer_id);
            //UNITS CONSUMED BY CUSTOMER
            printf("Enter Units consumed: ");
            scanf("%lf",&units_consumed);

            double bill = calculate_bill(units_consumed);
            printf("----------BILL RECEIPT----------\nCustomer ID: %d\nTotal bill: %.2lf\nEND OF TRANSACTION\n\n",customer_id,bill);            if (bill > 0) 
            {
                revenue += bill;
                count++;
            }
            if (bill > 0) 
            {
                revenue_data();
            }
            printf("Enter 1 to proceed and any number to exit the program: ");
            scanf("%d",&proceed);
            printf("\n");

        } while (proceed == 1);
        
    printf("\nTHANK YOU FOR YOUR SERVICE TO THE ELECTRICITY COMPANY OF GHANA (ECG)");

    return 0;
}               
double calculate_bill(double units_consumed)
{
    double rate;
    if (units_consumed <= 0) 
    {
        printf("INVALID ENTRY\nUnits must be positive\n");
        return 0.0;
    } 
    else if (units_consumed <= 50) {
        rate = 0.5;
    } 
    else if (units_consumed <= 150) {
        rate = 0.75;  
    } 
    else {
        rate = 1.0;   
    }
    amount = (units_consumed * rate) + service_charge;
    return amount;         
}

void revenue_data()
{
    printf("----------LIVE UPDATE----------\nTotal Revenue: %.2lf\nTotal number of Customers: %d\n", revenue, count);
}