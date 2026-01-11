#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int CPU();
int User();
void checkwinner(int user, int cpu);

int main()
{
    srand(time(NULL));

    int user = User();
    int cpu = CPU();

    checkwinner(user, cpu);
    return 0;
}

int CPU()
{
    return (rand() % 3) + 1;
}

int User()
{
    int choice;
    printf("***ROCK PAPER SCISSORS***\n");
    printf("1. Rock\n2. Paper\n3. Scissors\nEnter your choice: ");
    scanf("%d", &choice);
    return choice;
}

void checkwinner(int user, int cpu)
{
    if (user == cpu)
        printf("DRAW!");
    else if ((user == 1 && cpu == 3) || (user == 2 && cpu == 1) || (user == 3 && cpu == 2))
        printf("YOU WIN!");
    else
        printf("SORRY :(\nCPU WINS");
}
