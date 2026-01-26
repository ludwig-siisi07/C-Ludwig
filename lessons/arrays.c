#include<stdio.h>

int main()
{
    //Array of strings

    char fruits[][10]= {"Apple",
                        "Banana",
                        "Coconut"};
    //1st bracket specifies number of elements
    //10(second bracket) specifies max character of each string
    int size = sizeof(fruits)/sizeof(fruits[0]);
    fruits[0][0] = 'e';
    fruits[0][4] = 'A';
    for (int i = 0; i < size; i++)
    {
        printf("%s\n",fruits[i]);
    }
    



    return 0;
}