#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Seed the random number generator with current time
    srand(time(0));

    // Generate random number between 1 and 100
    int random_num = (rand() % 100) + 1;

    // printf("Random number: %d\n", random_num);

    int n =-1; // so that undefined value of n doesn't gets compared, thus -1 is put as a useless value
    int num_of_guesses = 0;
    while (n != random_num)
    {
        printf("Guess  a number from 1 to 100 \n");
        scanf("%d", &n);
        num_of_guesses++;

        if (n > random_num)
        {
            printf("High \n");
            
        }
        else if (n < random_num)
        {
            printf("Low \n");
            
        }
    }
    if (n == random_num)
    {
        printf("CORRECT ANSWER! \n");
        printf("You guessed the number in %d gusses" , num_of_guesses);
    }

    return 0;
}