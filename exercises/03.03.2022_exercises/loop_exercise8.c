#include <stdio.h>

int main()
{
    int num, num_reverse = 0;
    printf("Enter number :");
    scanf("%d", &num);

    while(num != 0)
    {
        num_reverse = (num_reverse * 10) + (num % 10);
        num /= 10;
    }

    while(num_reverse != 0)
    {
        switch(num_reverse % 10)
        {
            case 0: 
                printf("Zero ");
                break;
            case 1: 
                printf("One ");
                break;
            case 2: 
                printf("Two ");
                break;
            case 3: 
                printf("Three ");
                break;
            case 4: 
                printf("Four ");
                break;
            case 5: 
                printf("Five ");
                break;
            case 6: 
                printf("Six ");
                break;
            case 7: 
                printf("Seven ");
                break;
            case 8: 
                printf("Eight ");
                break;
            case 9: 
                printf("Nine ");
                break;
        }
        num_reverse /= 10;
    }

    return 0;
}