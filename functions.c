#include<stdio.h>
#include<string.h>

void christmas(char name[], int age){
    printf("Happy Birthday, %s!\n", name);
    printf("You are %d years old now.",age);
}
int main()
{
    char name[50] = "";
    int age = 0;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name)-1] = '\0';
    
    printf("Enter your age: ");
    scanf("%d", &age);

    /*Functions provide resusable code blocks*/
    christmas(name,age);
    return 0;
}