#include <stdio.h>

#define MAGIC_NUMBER 10
#define TICKET 5

int main()
{
    int guess;
    int played = 0;

    /*while(1)
    {
        printf("Enter Guess :");
        scanf("%d", &guess);
        if(guess == MAGIC_NUMBER)
        {
            printf("Your Guess is Correct ! \n");
            break;
        }
        printf("Your Guess is Wrong ! Try Again ! \n");
        played++;
    }*/
    for(played = 0; played < TICKET; played++)
    {
        printf("Enter Guess :");
        scanf("%d", &guess);
        if(guess == MAGIC_NUMBER)
        {
            printf("Your Guess is Correct ! \n");
            return 0;
        }
        printf("Your Guess is Wrong ! Try Again ! \n");
    }
    printf("You have used all your Tickets \n");
    return 0;
}