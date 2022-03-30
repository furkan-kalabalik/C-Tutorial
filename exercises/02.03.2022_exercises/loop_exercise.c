#include <stdio.h>
#define TEST 10
int main()
{
    int number1, number2;
    int lower, upper;
    int result = 0;
    
    printf("Enter number1 :");
    scanf("%d", &number1);

    while(1)
    {
        printf("\nEnter number2 :");
        scanf("%d", &number2);
        if(number1 < number2)
        {
            lower = number1;
            upper = number2;
            break;
        }    
        else if(number2 < number1)
        {
            lower = number2;
            upper = number1;
            break;
        }   
        else
        {
            printf("\nError ! Numbers cannot be equal \n");
        }
    }
    if(lower % 2 == 0) // check that if lower is even
        lower++; // if it is even, we increment it by 1
                 // in order to start from odd

    while(lower <= upper)
    {
        result += lower;
        lower += 2;
    }
    /*for(int a = lower; a <= upper; a+=2)
    {
        result += a;
    }*/
    printf("Result : %d \n", result);
    return 0;
}