#include <stdio.h>

int main()
{
    int number, result;
    
    printf("Enter Number: ");
    scanf("%d", &number);

    for(int a=1; a <= 10; a++)
    {
        result = number * a;
        printf("%d x %d = %d \n", number, a, result);
    }
    return 0;
}