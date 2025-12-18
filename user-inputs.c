#include<stdio.h>
int main()
{
    //declaring without values creates undefined behaviour
    int age = 0;
    float gpa =0.0f;
    char grade = '\0'; //null terminator
    char name[30] = "";

    printf("%d\n", age);
        printf("%f\n", gpa);


    return 0;
}