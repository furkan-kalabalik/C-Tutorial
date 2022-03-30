#include <stdio.h>

int main()
{
    int a , bit;
    int b; // variable for applying masking
    int result;
    printf("Enter value of a : ");
    scanf("%d", &a);
    printf("\n Enter the bit number : ");
    scanf("%d", &bit);

    b = 1 << bit;
    result = a & b;
    printf("Result : 0x%x", result);
    return 0;
}