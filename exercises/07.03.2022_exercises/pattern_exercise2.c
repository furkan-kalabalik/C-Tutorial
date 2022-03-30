#include <stdio.h>

int main()
{
    int row, column;

    printf("Enter row :");
    scanf("%d", &row);

    for(int i = 1; i <= row; i++)
    {
        for(int j = 1; j < i; j++)
        {
            printf(" ");
        }

        for(int k = 1; k <= row; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}