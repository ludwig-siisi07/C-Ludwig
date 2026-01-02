#include<stdio.h>
#include<string.h>

int main()
{
    /*
    while(true){
        if false, skiops the loop;
        if true, runs code or inputs;
        repeats.
        }
    do{
        code;
    } while (condition);
    runs the body once| checks the condition| repeats if true
    One run is guanranteed unlike the while loop*/
    
    char name[50] ="";
    
    printf("Enter your name: ");
    fgets(name,sizeof(name),stdin);
    name[strlen(name) - 1] = '\0';

    while(strlen(name) == 0){
        printf("Name cannot be empty!Pls enter your nae: ");
        fgets(name,sizeof(name),stdin);
        name[strlen(name) - 1] = '\0';
    }
    printf("Hello %s!", name);
    return 0;
}