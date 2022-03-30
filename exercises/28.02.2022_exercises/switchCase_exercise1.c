#include <stdio.h>

int main()
{
    int number, mod;
    printf("Enter number : ");
    scanf("%d", &number);

    mod = number % 2;
    switch (mod)
    {
        case 0:
            printf("\nNumber is even, number : %d ", number);
        break;
        case 1:
            printf("\nNumber is odd, number : %d ", number);
        break;
    }
    return 0;
}