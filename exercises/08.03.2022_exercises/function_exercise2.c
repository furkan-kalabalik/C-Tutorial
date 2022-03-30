#include <stdio.h>

int getParameter(void);
int factorial(int number);

int main()
{
    int input;
    int fact;
    input = getParameter();
    fact = factorial(input);
    printf("Factorial of %d : %d \n", input, fact);
    return 0;
}

// Factorial of N = 1*2*3....*N
int factorial(int number)
{
    int result = 1;

    for(int i = 1; i <= number; i++)
    {
        result *=i; //result = result * i;
    }
    return result;
}

int getParameter(void)
{
    int parameter;
    printf("Enter Number :");
    scanf("%d", &parameter);
    return parameter; // returning variable
}