#include <stdio.h>

int main()
{
    int row;
    printf("Enter row :");
    scanf("%d", &row);

    for(int i = 1; i <=row; i++)
    {
        for(int k = 1; k <= i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}