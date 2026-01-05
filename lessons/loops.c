#include<stdio.h>

int main()
{
    //SYMBOL GRID WITH NESTED LOOPS
    int row = 0;
    int column = 0;
    char symbol = '\0';

    printf("Enter the number of rows: ");
    scanf("%d",&row);

    printf("Enter the number of columns: ");
    scanf("%d",&column);

    printf("Enter the symbol: ");
    scanf(" %c", &symbol);

    for (int i = 1; i <= row; i++)
    {
      for (int j = 1; j <= column; j++)
      {
        printf("%5c",symbol);
      }
      printf("\n");
    }
    

    return 0;
}