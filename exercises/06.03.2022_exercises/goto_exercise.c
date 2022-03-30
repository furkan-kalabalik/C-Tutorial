#include <stdio.h>

#define MAGIC_NUMBER 10
#define TICKET 5

int main()
{
    int guess;
    int played = 0;

    start:
    printf("Enter Guess :");
    scanf("%d", &guess);
    if(guess == MAGIC_NUMBER)
    {
        printf("Your Guess is Correct ! \n");
        goto finish;
    }
    printf("Your Guess is Wrong ! Try Again ! \n");
    played++;
    if(played == TICKET)
        goto out_of_ticket;
    else
        goto start;
        
    out_of_ticket:
        printf("You have used all your Tickets \n");
        return 0;
    finish:
        return 0;
}