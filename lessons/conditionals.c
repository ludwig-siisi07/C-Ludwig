#include<stdio.h>

int main()
{
    /* 
    LOGICAL OPERATORS IN C: &&  || !   

    Short-circuit evaluation:
    - A && B : if A is false, B is not evaluated
    - A || B : if A is true, B is not evaluated

    Operator precedence:
    1. !  2. &&  3. ||
    */


    //Ternary operators ? = shorthand for if-else statements
    // (condition)? value_if_true : value_if_false;
     int number;
     printf("Enter a number: ");
     scanf("%d",&number);
     printf("%d is an %s number\n",number, (number%2==0)? "Even": "Odd");
     
     int hours = 18;
     int minutes = 19;
     //02 gives the padding
      
     printf("It's %02d:%02d %s", hours, minutes,(hours < 12) ? "AM":"PM");
     return 0;
}