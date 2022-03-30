#include <stdio.h>

int main()
{
    int i, num, isPrime;
    /* Input a number from user */
    printf("Enter number of first prime: ");
    scanf("%d", &num);

    i = 2;
    isPrime = 1;
    do
    {
        if(num % i == 0 && num != 2)
        {
            isPrime = 0;
            break;
        }
        i++;
    } while (i <= num/2);

    if(isPrime == 1 && num > 1)
    {
        printf("The number is prime \n");
    }
    else
    {
        printf("The number is not prime \n");
    }
    return 0;
    
}