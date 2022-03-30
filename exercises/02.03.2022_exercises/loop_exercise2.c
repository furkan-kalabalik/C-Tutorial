#include <stdio.h>

int main()
{
    int number;
    int sum = 0;

    printf("Enter number :");
    scanf("%d", &number);

    while(number != 0)
    {
        sum += number % 10;
        number /= 10;
    }
    printf("Result : %d \n", sum);
    return 0;
}