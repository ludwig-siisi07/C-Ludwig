#include<stdio.h>
#include<stdbool.h>

int main()
{
    //variable = a reusable container
    /*Booleans have special header files
    true =1 and false = 0
    used internally with programs like if statements
    */
   bool isonline =0;
   if(isonline){
       printf("User is Online\n");
   }
   else{
    printf("User is Offline");
   }
    return 0;
}