#include <stdio.h> 

int main()
{
    int a, b, c;

    printf("Enter a, b and c : ");
    scanf("%d%d%d", &a, &b, &c);
    /*
    if(a > b)
    {
        if(a > c)
        {
            printf("Maximum : %d ", a);
        }
        else
        {
            printf("Maximum : %d ", c);
        }
    }
    else
    {
        if(b > c)
        {
            printf("Maximum : %d ", b);
        }
        else
        {
            printf("Maximum : %d ", c);
        }
    }
    return 0;*/
    /*
    if((a > b) && (a > c))
    {
        printf("Maximum number : %d \n",a );
    }
    else if((b > a) && (b > c))
    {
        printf("Maximum number : %d \n", b);
    }
    else if((c > a) && (c > b))
    {
        printf("Maximum number : %d \n", c);
    }
    return 0;*/

    if((a > b) && (a > c))
    {
        printf("Maximum value : %d \n", a);
    }
    else if(b > c)
    {
        printf("Maximum value : %d \n", b);
    }
    else
    {
        printf("Maximum value : %d \n", c);
    }
    return 0;
}