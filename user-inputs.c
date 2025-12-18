#include<stdio.h>
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
    /*%c unlike the d,f and s doesn't ignore whitespaces in buffer!
    the leftover \n from buffer can be cleared with space before %c
    */
    printf("%d\n", age);
    printf("%.2f\n", gpa);
    printf("%c\n", grade);
    printf("%s\n", name);


    return 0;
}