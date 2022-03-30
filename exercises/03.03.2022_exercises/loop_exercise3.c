#include <stdio.h>

int main()
{
    int number1, number2;
    int max = 0;
    int a = 0;
    int LCM = 0;

    printf("Enter numbers :");
    scanf("%d %d", &number1, &number2);
    /*
    if(number1 > number2)
        max = number1;
    else if (number2 > number1)
        max = number2;
    */
    max = (number1 > number2) ? number1 : number2; 
    a = max; // storing maximum value in a 
    while(1)
    {
        if((max % number1 == 0) && (max % number2 == 0))
        {
            LCM = max;
            break;
        }
        max += a;
    }
    printf("LCM : %d \n", LCM);
    return 0;
}