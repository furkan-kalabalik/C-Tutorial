#include <stdio.h>

int main()
{
    int Temp;
    
    printf("Enter Temperature : %d", Temp);
    scanf("%d", &Temp);

    if(Temp < 0) 
    {

        printf("\nIt's Freezing");
    }
    else if(Temp < 10) // 0 < Temp < 10
    {
        printf("\nIt's very cold");
    }
    else if(Temp < 20) // 10 < Temp < 20
    {
        printf("\nIt's cold");
    }
    else if(Temp < 30)  // 20 < Temp < 30
    {
        printf("\nIt's Normal");
    }
    else if(Temp < 40) // 30 < Temp < 40
    {
        printf("\nIt's Hot");
    }
    else // Temp > 40
    {
        printf("\nIt's Very Hot");
    }
    return 0;
}