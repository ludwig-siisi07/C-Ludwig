#include<stdio.h>
#include<stdbool.h>
#include<string.h>

void hello(char name[], int age);
bool age_check(int age);

int main(){

    /*FUNCTION PROTOTYPES:
    
    Provide compiler w/ info about function
    Enable type checking and allow functions to be used before they're defined

    */
    char name[50] ="";
    printf("Name: ");
    fgets(name, sizeof(name),stdin);
    name[strlen(name)-1] = '\0';

    int age = 0;
    printf("Age: ");
    scanf("%d", &age);

    hello(name, age);
    if(age_check(age)){
        printf("You are old enough to work at the Krusty Krab");
    }
    else{
        printf("SORRY!\nYou must be 16+ to work at the Krusty Krab");
    }

    return 0;
}

void hello(char name[], int age){
    printf("Hello %s,\n", name);
    printf("You are %d years old.\n",age);
}
bool age_check(int age){
    return age >= 16;
}