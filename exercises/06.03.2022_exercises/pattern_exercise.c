#include <stdio.h>

int main()
{
    int row, column;

    printf("Enter row :");
    scanf("%d", &row);

    printf("Enter column :");
    scanf("%d", &column);

    for(int i = 0; i < row; i++)
    {
        for(int k = 0; k < column; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}