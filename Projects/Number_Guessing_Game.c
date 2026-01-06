#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int min = 1;
    int max = 100;
    int user_input = 0;
    srand(time(NULL));
    int randomNumber = (rand() %  (max-min + 1)) + min; 
    
    
    printf("Guess a number between 1-100: ");
    scanf("%d",&user_input);


    while (user_input != randomNumber)
    {
        if (((user_input < randomNumber) && (randomNumber - user_input < 5)) || ((user_input > randomNumber) && (user_input-randomNumber < 5)))
        {
            printf("YOU'RE CLOSE!\n");
        }
        if ((user_input > randomNumber)&& (user_input-randomNumber >= 5))
        {
            printf("TOO HIGH!\n");
        }
        if ((user_input < randomNumber) && (randomNumber - user_input >= 5))
        {
            printf("TOO LOW!\n");
        }
        
        
        printf("Guess a number between 1-100: ");
        scanf("%d",&user_input);     
    }
    
    printf("YOU GUESSED RIGHT\nWELL DONE!\n");

    return 0;
}