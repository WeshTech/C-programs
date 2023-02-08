#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define NO 0
#define YES 1
void main(void)
{
    int guess_value = -1;
    int number;
    int nbr_of_guesses = 0;
    int done = NO;
    printf("\n\nGetting a random number\n\n");
    srand((unsigned) time(NULL));
    number = rand();
    printf("The random number (answer) is::: %d",number);
    while(done == NO)
    {
        printf("\npick a number between 0 and %d >",RAND_MAX);
        scanf("%d",&guess_value);
        nbr_of_guesses++;
        if (number == guess_value)
        {
            done = YES;
        }
        else if (number < guess_value)
        {
            printf("\n you guessed high!!!");
        }
        else
        {
            printf("\nYou guessed low!!!");
        }

    }
    printf("\n\nCongratulations !!! you guessed the number right in %d guesses!!",nbr_of_guesses);
    printf("\n\n The number was %d\n\n",number);

}
