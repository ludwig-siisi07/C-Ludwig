#include<stdio.h>
#include<string.h>

int main()
{
    //declaring without values creates undefined behaviour
    int age = 0;
    float gpa =0.0f;
    char grade = '\0'; //null terminator
    char name[30] = "";

    printf("Enter your age: ");
    scanf("%d", &age); //&gives the location

    printf("Enter your gpa: ");
    scanf("%f", &gpa);

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    getchar();
    printf("Enter your fullname: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name)-1]= '\0';
    /*%c unlike the d,f and s doesn't ignore whitespaces in buffer!
    the leftover \n from buffer can be cleared with space before %c
    since %s blocks whitespaces full names cant be entered so use fgets
    */
    printf("%s\n", name);
    printf("%d\n", age);
    printf("%.2f\n", gpa);
    printf("%c\n", grade);



    return 0;
}