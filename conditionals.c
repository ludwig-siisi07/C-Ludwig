#include<stdio.h>
int main()
{
    //Switch cases - alternative to multiple if-else
    int dayofweek =0;
    printf("Enter a number from 1-3: ");
    scanf("%d", &dayofweek);
    
    switch(dayofweek){
        case 1:
            printf("It is Monday");
            break;
        case 2:
            printf("It is Tuesday");
            break;
        case 3:
            printf("It is Wednesday");
            break;
        default:
            printf("Enter a valid input!");
    }



    return 0;
}