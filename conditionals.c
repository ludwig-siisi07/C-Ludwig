#include<stdio.h>

int main()
{
    //Conditionals with booleans
    float ticket_price = 10.00;
    int is_student = 0;
    int is_senior = 0;
    

    /* DISCOUNT PRICES
        Students only = 10%
        Seniors only(alumni incl.)= 20%
        Student + Senior = 30%
    */
    
    //USER INPUTS
    printf("Are you student?(if Yes, enter 1): ");
    scanf("%d",&is_student);
    printf("Are you a senior?(If yes, enter 1): ");
    scanf("%d",&is_senior);

    //CONDITIONAL CODE
    if(is_student == 1){
        ticket_price = 0.9*ticket_price;
        printf("You get a student discount of 10 percent\n");
        if (is_senior== 1){
            ticket_price = 0.778 * ticket_price;
            printf("You get a student discount of 20 percent\n");
        printf("The price of your ticket is $%.2f\n", ticket_price);
        }
    }

    else if(is_senior == 1){
        ticket_price *= 0.8;
        printf("You get a student discount of 20 percent\n");
        printf("The price of your ticket is $%.2f\n", ticket_price);
    }
    else{
        printf("SORRY! Only seniors and students are allowed to purchase tickets");
    }

    return 0;
}