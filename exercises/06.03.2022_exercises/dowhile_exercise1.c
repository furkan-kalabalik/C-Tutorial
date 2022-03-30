#include <stdio.h>
int main()
{
    int i, num;

    printf("Enter any number to find its factor: ");
    scanf("%d", &num);

    printf("All factors of %d are : ", num);
    i = 1;
    do
    {
        if(num % i == 0)
        {
            printf("%d", i);
            if(i != num)
            {
                printf(", ");
            }
        }
        i++;
    } while (i <= num);
    
    return 0;
}