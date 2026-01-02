#include<stdio.h>
//int result = 0; // GLOBAL SCOPE (use local more cos global makes debugging difficult)

int add(int x, int y){
    int result = x + y;
    return result;
}

int main()
{
    /*Variable scoping makes variables recognized and accessible
    Variables can share the same name if they're in different scopes*/

    int x = 5;  //LOCAL
    int y = 6;

    int result = add(x,y);
    printf("%d", result);
    return 0;
}