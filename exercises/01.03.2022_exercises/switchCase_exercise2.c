#include <stdio.h>

int main()
{
    int Temp;

    printf("Enter Temperature : ");
    scanf("%d", &Temp);

    if(Temp > 40)
        printf("\nTOO HOT !");
    else if(Temp < 0)
        printf("\nTOO COLD !");

    switch(Temp)
    {
        case 0:
            printf("\nIt's Very Cold");
        break;
        case 10:
            printf("\nIt's Cold");
        break;
        case 20:
            printf("\nIt's Normal");
        break;
        case 30:
            printf("\nIt's Hot");
        break;
        case 40:
            printf("\nIt's Very Hot");
        break;
        default:
            if(Temp > 40)
                printf("\nTOO HOT !");
            else if(Temp < 0)
                printf("\nTOO COLD !");
        break;
    }
    return 0;
}