#include <stdio.h>

int getParameter(void);
int isPrime(int num); // prototype

int main()
{
    int input;
    int prime;

    input = getParameter();
    prime = isPrime(input);
    
    if(prime)
        printf("%d is Prime \n", input);
    else
        printf("%d is not Prime \n", input);

    //printf("%d is %s \n", input, isPrime(input) == 0 ? "not Prime" : "Prime ");
    return 0;
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

int getParameter(void)
{
    int parameter;
    printf("Enter Number :");
    scanf("%d", &parameter);
    return parameter; // returning variable
}