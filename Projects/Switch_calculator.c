#include<stdio.h>
int main()
{
    //VARIABLES
    double num1 = 0.0;
    double num2 = 0.0;
    double result = 0.0;
    char op = '\0';

    //USER-INPUTS
    printf("num1: ");
    scanf("%lf", &num1);
    printf("num2: ");
    scanf("%lf", &num2);
    printf("operator: ");
    scanf(" %c",&op);
   
    //SWITCH - CASES
    switch (op)
    {
    case '+':
        result = num1 + num2;
        break;

    case '-':
        result = num1 - num2;
        break;

    case '*':
        result = num1 * num2;
        break;

    case '/':
        if (num2 != 0){
            result = num1 / num2;
        }
        else {
            printf("Error: Division by zero.\n");
            return 1;
        }
        break;

    default:
        printf("Invalid operator!\n Use *,+,-,/\n");
        return 1;
    }
    printf("Result: %.2lf", result);

    return 0;
}