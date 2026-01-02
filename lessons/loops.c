#include<stdio.h>
#include<windows.h>

int main()
{
  /*FOR LOOPS - repeat code for a limited number of times
  for(Initialization; Condition; Update)
  */

    for(int a = 10; a != 0; a--){
        Sleep(1000); //In MilliSeconds
        printf("%d\n",a);    
    }
    printf("HAPPY NEW YEAR!");

    return 0;
}