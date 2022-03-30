#include <stdio.h>
#include <math.h>
int main()
{
    int operation, value, bit0, bit1, number, new_number;
    
    printf("Enter Operation :");
    scanf("%d", &operation);

    if(operation > 2 || operation < 0)
    {
        printf("\nError ! Unsupported Operation\n");
        return 0;
    }

    printf("\nEnter number : ");
    scanf("%d", &number);

    printf("\nEnter bit0 and bit1 :");
    scanf("%d%d", &bit0, &bit1);
    

    if(operation == 0)
    {
        // clearing bits
        /*
        a = 1 << bit0;
        a |= 1 << bit1; // a = a | 1 << bit0;
        a = ~a
        new_number = number & a;*/
        new_number = number & (~((1 << bit0) | (1 << bit1)));
        printf("Cleared bit:%d and bit:%d, new_number : 0x%x",
        bit0, bit1, new_number);
    }
    else if(operation == 1)
    {
        // setting bits
        new_number = number | (1 << bit0);
        new_number |= (1 << bit1); // new_number = new_number | (1 << bit1)
        printf("Set bit:%d and bit:%d, new_number : 0x%x",
        bit0, bit1, new_number);
    }
    else if(operation == 2)
    {
        // toggling bits
        new_number = number | (1 << bit0);
        new_number ^= (1 << bit1); // new_number = new_number ^ (1 << bit1)
        printf("Toggled bit:%d and bit:%d, new_number : 0x%x",
        bit0, bit1, new_number);
    }
    return 0;
}