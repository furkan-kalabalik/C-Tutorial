#include <stdio.h>

void numberToString(int num);
int getParameter(void);

int main()
{
    int a = getParameter();
    numberToString(a);
    return 0;
}

void numberToString(int num)
{
    switch (num)
    {
        case 0:
            printf("%d alphabetic name is : ZERO ! \n", num);
        break;

        case 1:
            printf("%d alphabetic name is : ONE ! \n", num);
        break;

        case 2:
            printf("%d alphabetic name is : TWO ! \n", num);
        break;

        case 3:
            printf("%d alphabetic name is : THREE ! \n", num);
        break;

        case 4:
            printf("%d alphabetic name is : FOUR ! \n", num);
        break;

        case 5:
            printf("%d alphabetic name is : FIVE ! \n", num);
        break;

        case 6:
            printf("%d alphabetic name is : SIX ! \n", num);
        break;

        case 7:
            printf("%d alphabetic name is : SEVEN ! \n", num);
        break;

        case 8:
            printf("%d alphabetic name is : EIGHT ! \n", num);
        break;

        case 9:
            printf("%d alphabetic name is : NINE ! \n", num);
        break;
    
        default:
            printf("%d is out of range ! \n", num);    
        break;
    }
}

int getParameter(void)
{
    int parameter;
    printf("Enter Number :");
    scanf("%d", &parameter);
    return parameter; // returning variable
}