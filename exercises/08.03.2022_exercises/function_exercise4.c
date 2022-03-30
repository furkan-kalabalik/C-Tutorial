#include <stdio.h>

int isPrime(int num); // prototype
void printPrimes(int lower, int upper);

int main()
{
    int lower, upper;

    printf("Enter lower limit : ");
    scanf("%d", &lower);
    printf("Enter upper limit : ");
    scanf("%d", &upper);
    printf("Prime number between %d and %d : ", lower, upper);
    printPrimes(lower, upper);
    
    return 0;
}

void printPrimes(int lower, int upper)
{
    int counter = lower;
    while(counter <= upper)
    {
        if(isPrime(counter))
            printf("%d ", counter);

        counter++;
    }
}

int isPrime(int num)
{
    if(num == 0 || num == 1)
        return 0;
    for(int i = 2; i <= num/2; i++)
    {
        if(num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}