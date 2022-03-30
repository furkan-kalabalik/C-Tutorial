#include <stdio.h>

int power_func_rec(int base_number, int power_of_number);

int main()
{
    int result;
    int base_number;
    int power;
    printf("Enter the base number:");
    scanf("%d",&base_number);

    printf("Enter the power:");
    scanf("%d",&power);

    result = power_func_rec(base_number,power);

    printf("%d^%d = %d\n\r",base_number,power,result);
}

int power_func_rec(int base_number, int power_of_number)
{
    if(power_of_number == 0)// power_of_number <= 0
        return 1;
    else
        return base_number * power_func_rec(base_number, power_of_number-1);
}