#include <stdio.h>

int main()
{
    int number;
    int count = 0;
    int isPrime;

    while(1)
    {
        printf("Enter number :");
        scanf("%d", &number);
        if(number > 1)
        {
            break;
        }  
        printf("Try Again\n");
    }
    isPrime = 1;
    for(int i = 2; i <= number/2; i++)
    {
        if(number % i == 0)
        {
            isPrime = 0;
            break;
        }
    }
    if(isPrime == 1)
    {
        printf("The number is PRIME \n");
        number *=5;
        printf("Number : %d \n", number);
    }
    else
    {
        printf("The number is not PRIME \n");
        number *= 10;
        printf("Number : %d \n", number);
    }
    return 0;
}