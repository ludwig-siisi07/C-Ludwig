#include<stdio.h>

int main()
{
    //array = variable w more than one value 
    int numbers[] = {10, 20 ,30, 40, 50, 60};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    //sizeof returns the amount of memory taken
    for (int i = 0; i < size; i++)
    {
       printf("%d ", numbers[i]);
    }
    
    return 0;
}