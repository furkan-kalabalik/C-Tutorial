#include <stdio.h>

int main()
{
    int number, bit_number, new_number;

    printf("Enter the number : ");
    scanf("%d", &number);
    
    printf("Enter the bit number : ");
    scanf("%d", &bit_number);

    new_number = number | (1 << bit_number);

    printf("Number : 0x%x\n",number);
    printf("New Number : 0x%x\n", new_number);
    return 0;
}