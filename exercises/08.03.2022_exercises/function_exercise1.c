#include <stdio.h>
#include <stdbool.h> // library for bool data type and true/false values

/*
#define TRUE 1
#define FALSE 0
*/

int getParameter(void);
bool isEven(int a);

int main()
{
    int number;
    int result;
    number = getParameter();
    result = isEven(number);
    /*
    if(result == true)
        printf("%d is even \n", number);
    else
        printf("%d is odd \n", number);
    */
    /*
    if(result)
        printf("%d is even \n", number);
    else
        printf("%d is odd \n", number);
    */
    if(result == false)
        printf("%d is odd \n", number);
    else
        printf("%d is even \n", number);

    return 0;

}
/*
int isEven(int a)
{
    return (a&1);
}
*/

/*
int isEven(int a)
{
    return (a%2);
}
*/

/*
int isEven(int a)
{
    if(a % 2 == 0)
        return TRUE;
    else
        return FALSE;
}
*/
bool isEven(int a)
{
    if(a % 2 == 0)
        return true;
    else
        return false;
}

int getParameter(void)
{
    int parameter;
    printf("Enter Number :");
    scanf("%d", &parameter);
    return parameter;
}