#include <stdio.h>

int decimalToBinary(int number);
int getParameter(void);

int main()
{
    int number = getParameter();

    printf("Binary value of %d = %d \n", number, decimalToBinary(number));
    return 0;
}

int decimalToBinary(int number)
{
    int binary = 0;
    int digit = 1;
    int remainder;

    while(number != 0)
    {
        remainder = number % 2; // finding the remainder of number from 2
        // below calculating the digit with power of 10 because it is stored in integer
        binary = binary + digit * remainder; 
        digit = digit * 10; // changing the digit
        number = number / 2; // divide function argument with 2
    }
    return binary;
}

int getParameter(void)
{
    int parameter;
    printf("Enter Number :");
    scanf("%d", &parameter);
    return parameter; // returning variable
}