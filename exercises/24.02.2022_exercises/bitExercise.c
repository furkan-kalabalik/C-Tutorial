#include <stdio.h>

int main()
{
    int number1, number2, number3;
    int bit0, bit1, bit2, bit3, bit4, bit5;
    int new_number1, new_number2, new_number3;
    printf("Enter the value of number1 :");
    scanf("%d",&number1);
    printf("\nEnter bit0 and bit1 : ");
    scanf("%d %d", &bit0, &bit1);
    printf("\nEnter the value of number2 :");
    scanf("%d",&number2);
    printf("\nEnter bit2 and bit3 : ");
    scanf("%d %d", &bit2, &bit3);
    printf("\nEnter the value of number3 :");
    scanf("%d",&number3);
    printf("\nEnter bit4 and bit5 : ");
    scanf("%d %d", &bit4, &bit5);

    // Setting bit0 and bit1 for number1
    int a;
    a = (1 << bit0) | (1 << bit1);
    new_number1 = number1 | a;
    printf("Value of new_number1 : 0x%x\n", new_number1);

    // Clearing bit2 and bit3 for number2
    int b;
    b = (1 << bit2) | (1 << bit3);
    new_number2 = number2 & (~b);
    printf("Value of new_number2 : 0x%x\n", new_number2);

    // Toggling bit4 and bit5 for number3
    int c;
    c = (1 << bit4) | (1 << bit5);
    new_number3 = number3 ^ c;
    printf("Value of new_number3 : 0x%x\n", new_number3);
    return 0;
}