#include <stdio.h>

int main()
{
    int number;

    printf("Enter number : ");
    scanf("%d", &number);

    if((number > 25) && (number != 28))
    {
        printf("\nNumber > 25, number : %d \n",number);
    }
    printf("Program Finished ! \n");
    return 0;
}