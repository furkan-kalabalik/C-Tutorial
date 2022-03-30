#include <stdio.h>

int main()
{
    int number1, number2;
    int min = 0;
    int a = 0;
    int HCF = 0;

    printf("Enter numbers :");
    scanf("%d %d", &number1, &number2);
    /*
    if(number1 > number2)
        max = number1;
    else if (number2 > number1)
        max = number2;
    */
    min = (number1 < number2) ? number1 : number2; 
    for(int i = 1; i <= min; i++)
    {
        if(( number1 % i == 0) && (number2 % i == 0))
        {
            HCF = i;
        }
    }
    printf("HCF : %d \n", HCF);
    return 0;
}