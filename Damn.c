#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));

    int random = (rand() % 100) + 1;
    int guesses = 0;
    int guessed;

    do
    {
        printf("Guess the Number: ");
        scanf("%d", &guessed);

        if (guessed < random-5)
        {
            printf("Bada Soch\n");
        }
        else if (guessed > random+ 5)
        {
            printf("Chota Soch\n");
        }
        else if (guessed > random-5 && guessed < random+5){
            if(guessed < random ){
                printf("Close Bhai, Bada soch\n");
            }
           else if(guessed > random ){
                printf("Close Bhai, Chhota soch\n");
            }
        }
        guesses++;
    } while (guessed != random);

    printf("Sahi! The number was %d\n", random);
    printf("You guessed the number in %d guesses\n", guesses);
    // printf("This is a ");

    return 0;
}