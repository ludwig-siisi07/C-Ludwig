#include<stdio.h>
#include<ctype.h>
int main()
{
    int score = 0;
    char user_input = '\0';
    char questions[][100] = {"Which planet is closest to the Sun","Who wrote Romeo and Juliet","What is the chemical symbol for gold","Which ocean is the largest","How many continents are there on Earth","What gas do plants mainly use for photosynthesis","Which country is famous for the Great Wall"};
    char multiple_choice[][100] = {"A. Venus\nB. Earth\nC. Mercury\nD. Mars","A. William Shakespeare\nB. Charles Dickens\nC. Jane Austen\nD. Mark Twain","A. Ag\nB. Au\nC. Fe\nD. Pb","A. Atlantic Ocean\nB. Indian Ocean\nC. Arctic Ocean\nD. Pacific Ocean","A. Five\nB. Six\nC. Seven\nD. Eight","A. Oxygen\nB. Nitrogen\nC. Carbon dioxide\nD. Hydrogen","A. India\nB. China\nC. Japan\nD. Korea"};
    char answers[] ={'C','A','B','D','C','C','B'};
    int size = sizeof(answers)/sizeof(answers[0]);


    for (int i = 0; i < size; i++)
    {
        printf("%s\n%s", questions[i],multiple_choice[i]);
        printf("\n");
        scanf(" %c",&user_input);
        printf("\n");
        user_input = toupper(user_input);
        if (user_input == answers[i])
        {
            score++;
        }
        
    }
    printf("\nEND OF QUIZ!\n");
    printf("SCORE: %d",score);
    
    return 0;
}