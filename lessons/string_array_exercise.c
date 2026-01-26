#include<stdio.h>
#include<string.h>
int main()
{
    char names[3][25]= {0};
    int row = sizeof(names)/sizeof(names[0]);
    
    for (int i = 0; i < row; i++)
    {
        printf("Enter a name: ");
        fgets(names[i],sizeof(names[i]),stdin);
        names[i][strlen(names[i])-1] ='\0';

    }

    printf("\nNAMES ENTERED: \n");
    for (int i = 0; i < row; i++)
    {
        printf("%d. %s\n" ,i+1, names[i]);
    }

    return 0;
}