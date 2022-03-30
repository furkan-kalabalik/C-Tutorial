#include <stdio.h>

int isPerfect(int number);
void printPerfect(int lower, int upper);
int getParameter(void);

int main()
{
    int lower =  getParameter();
    int upper =  getParameter();
    printf("The perfect numbers between %d to %d are :", lower, upper);
    printPerfect(lower, upper);
    return 0;
}

int isPerfect(int number)
{
    int sum = 0;
    for(int i = 1; i < number; i++)
    {
        if(number % i == 0)
        {
            sum = sum + i;
        }
    }
    if(sum == number)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void printPerfect(int lower, int upper)
{
    int counter = lower;

    while(counter <= upper)
    {
        if(isPerfect(counter))
        {
            printf("%d ", counter);
        }
        counter++;
    }
}

int getParameter(void)
{
    int parameter;
    printf("Enter Number :");
    scanf("%d", &parameter);
    return parameter; // returning variable
}