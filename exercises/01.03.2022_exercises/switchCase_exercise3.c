#include <stdio.h>

int main()
{
    int number1, number2, result;
    char operation;
    printf("Enter your 1st number :");
    scanf("%d", &number1);
    printf("\nEnter your operation :");
    scanf(" %c", &operation);
    printf("\nEnter your 2nd number :");
    scanf("%d", &number2);

    switch(operation)
    {
        case '+':
            result = number1 + number2;
        break;
        case '-':
            result = number1 - number2;
        break;
        case '/':
            result = number1 / number2;
        break;
        case '*':
            result = number1 * number2;
        break;
        default:
            printf("\nUnsupported Operation\n");
            return 0;
        break;
    }
    printf("\nResult : %d \n", result);
    return 0;
}