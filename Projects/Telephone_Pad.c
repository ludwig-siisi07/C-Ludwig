#include<stdio.h>
int main()
{

    char telephone_pad[][3] ={{'1','2','3'},
                            {'4','5','6'},
                            {'7','8','9'},
                            {'*','0','#'}};
                            
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
        printf("%c    ", telephone_pad[i][j]);
        }
        printf("\n");
    }
                      
    return 0;

}