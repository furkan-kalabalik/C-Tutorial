#include <stdio.h>

int main()
{
    int row;

    printf("Enter row :");
    scanf("%d", &row);

    for(int i = 1; i <= row; i++)
    {
        // printing spaces
        for(int k= 0; k < row-i; k++)
        {
            printf(" ");
        }

        // printing stars
        for(int j = 0; j < 2*i-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}