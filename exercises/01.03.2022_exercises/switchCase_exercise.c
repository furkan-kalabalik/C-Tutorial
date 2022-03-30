#include <stdio.h> 

int main()
{
    int operation, value, bit0, bit1, number, new_number;
    
    printf("Enter Operation :");
    scanf("%d", &operation);

    printf("\nEnter number : ");
    scanf("%d", &number);

    printf("\nEnter bit0 and bit1 :");
    scanf("%d%d", &bit0, &bit1);

    switch(operation)
    {
        case 0:
            // clearing bits
            /*
            a = 1 << bit0;
            a |= 1 << bit1; // a = a | 1 << bit0;
            a = ~a
            new_number = number & a;*/
            new_number = number & (~((1 << bit0) | (1 << bit1)));
            printf("Cleared bit:%d and bit:%d, new_number : 0x%x",
            bit0, bit1, new_number);
        break;

        case 1:
             // setting bits
            new_number = number | (1 << bit0);
            new_number |= (1 << bit1); // new_number = new_number | (1 << bit1)
            printf("Set bit:%d and bit:%d, new_number : 0x%x",
            bit0, bit1, new_number);
        break;

        case 2:
            // toggling bits
            new_number = number | (1 << bit0);
            new_number ^= (1 << bit1); // new_number = new_number ^ (1 << bit1)
            printf("Toggled bit:%d and bit:%d, new_number : 0x%x",
            bit0, bit1, new_number);
        break;

        default:
            printf("Operation is not supported ! \n");
            return 0;
        break;
    }
    return 0;
}