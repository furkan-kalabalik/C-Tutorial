#include <stdio.h>

int main()
{
    /*
    int a, b, rshift, lshift;
    int result = 0;

    printf("Enter a : ");
    scanf("%d", &a);
    printf("\n Enter b : ");
    scanf("%d", &b);
    printf("\nEnter rshift and lshift :");
    scanf("%d %d", &rshift, &lshift);
    result = a << lshift;
    printf("\n Result (a << lshift): %d \n", result);
    result = a >> rshift;
    printf("\n Result (a >> rshift): %d \n", result);
    result = b << lshift;
    printf("\n Result (b << lshift): %d \n", result);
    result = b >> rshift;
    printf("\n Result (b >> rshift): %d \n", result);
    result = a % b;
    printf("\n Result (a mod b): %d \n", result);
    result = b % a;
    printf("\n Result (b mod a): %d \n", result);
    return 0;
    */

    int a , b , c , d;
    a = 25;
    b = 5;
    c = 0;
    d = 0;

    c = a;
    d = a;

    c = c + b;
    d += b;
    printf("Value of C : %d Value of D : %d \n", c, d);
    c = c - a;
    d -= a;
    printf("Value of C : %d Value of D : %d \n", c, d);
    a &= 1;
    b |= 1;
    printf("Value of A : %d Value of B : %d \n", a, b);
    return 0;



}