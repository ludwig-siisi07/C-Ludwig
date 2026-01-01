#include<stdio.h>
#include<stdbool.h>
bool age_check(int age){
    return age >= 18;
    }

int main(){
    int age = 0;

    printf("Enter your age: ");
    scanf("%d", &age);
    
    if (age_check(age)){
        printf("You can sign up!");
    }
    else{
        printf("NOT AN ADULT!");
    }
    return 0;
}