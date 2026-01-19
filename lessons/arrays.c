#include<stdio.h>

int main()
{
    //array = variable w more than one value 
    int scores[5] = {0};//5 indicates number of array elements 
    for (int i = 0; i < 5; i++)
    {
        printf("Enter a score: ");
        scanf("%d",&scores[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",scores[i]);
    }
    return 0;
}