#include<stdio.h>
int main()
{
    //conditionals
    int age = 0;
    printf("How old are you?: ");
    scanf("%d",&age);
    if (age >= 18){
        printf("Your ticket costs $10");
    }
    else if (age > 6 && age < 18){
        printf("Your ticket costs $5");
    }
    else{
        printf("Free tickets for kids!");
    }



    return 0;
}