#include <stdio.h>

int main()
{

    int number1, number2;
    int lower = 0;
    int upper = 0;
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
    /*if(number1 < number2)
    {
        lower = number1;
        upper = number2;
    }    
    else if(number2 < number1)
    {
        lower = number2;
        upper = number1;
    }   
    else
    {
        printf("\nError ! \n");
        return 0;
    }*/
    /*while(lower <= upper)
    {
        result += lower;
        lower++;
    }*/
    for(int a=lower; a <= upper; a++)
    {
        result += a;
    }
    printf("\nResult : %d \n", result);
    return 0;
}