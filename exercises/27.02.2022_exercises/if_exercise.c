#include <stdio.h>
int main()
{
    int a,b, result;

    printf("Enter a and b : ");
    scanf("%d%d", &a, &b);
    
    result = a * b;

    if(result > 200)
    {
        printf("\nResult > 200, ERROR ! \n");
    }
    else
    {
        printf("\nResult < 200, Result : %d", result);
    }
    return 0;
}