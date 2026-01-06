#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    //PSEUDO RANDOM GENERATOR
    srand(time(NULL));
    printf("%d\n",RAND_MAX); 

    int max = 100;
    int min = 10;
    int randomNum = (rand() % (max - min +1)) + min;
    printf("%d", randomNum);

    return 0;
}