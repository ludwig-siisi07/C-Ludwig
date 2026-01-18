#include<stdio.h>
float amount = 0.0f;
void checkBalance();
void depositMoney();
void withdrawCash();
int main()
{
    float deposit = 0.0f;
    float withdrawal = 0.0f;
    int input = 0;
    char proceed = 'Y';

    do
    {
    printf("Select an option:\n1.Check balance\n2.Deposit Money\n3.Withdraw money\nEnter your choice: ");
    scanf("%d",&input);
    if(input ==1)
    {
        checkBalance();
    }
    if(input==2){
        depositMoney();
    }
    if(input==3)
    {
        withdrawCash();
    }

    printf("Would you like to perform another banking service?\nEnter 'Y' for Yes and 'N' for No:\n");
    scanf(" %c", &proceed);

        
    } while (proceed == 'Y' || proceed =='y');
    

    return 0;
}
void checkBalance(){
	printf("Current Balance: $%.2f\n\n",amount);
}
void depositMoney(){
	float deposit = 0.0f;
    printf("Enter amount to be deposited: ");
    scanf("%f",&deposit);
	amount += deposit;
	printf("You have successfully deposited $%.2f into your account.\nCurrent balance: $%.2f\n\n",deposit, amount);
}
void withdrawCash(){
	float withdrawal = 0.0f;
    printf("Enter amount to be withdrawn: ");
    scanf("%f",&withdrawal);
	if(amount < withdrawal){
        printf("INSUFFICIENT FUNDS to perform the transaction.\n\n");
    }
    else
    {
        amount -= withdrawal;
	    printf("You have successfully deposited $%.2f into your account.\nCurrent balance: $%.2f\n",withdrawal, amount);
    }
}
