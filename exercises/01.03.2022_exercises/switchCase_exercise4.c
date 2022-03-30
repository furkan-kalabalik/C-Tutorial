#include <stdio.h>

int main()
{
    int number;
    printf("Enter Number : ");
    scanf("%d", &number);

    switch (number < 0) // if(number > 0) if its true 1, false 0
    {
        case 0:
            switch (number > 0)
            {
                case 0:
                    printf("\nNumber is ZERO, number : %d \n", number);
                break;

                case 1:
                    printf("\nNumber is positive, number : %d\n", number);
                break;
            }
        break;

        case 1:
            printf("\nNumber is negative, number : %d", number);
        break;
    }
    return 0;
}