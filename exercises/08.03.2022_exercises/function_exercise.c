#include <stdio.h>

int getParameter(void);
int cube(int a);

int main()
{
    int num1, result;
    num1 = getParameter();
    result = cube(num1);
    printf("Cube of %d = %d \n", num1, result);
    return 0;

}

int cube(int a)
{
    return (a*a*a);
}

int getParameter(void)
{
    int parameter;
    printf("Enter Number :");
    scanf("%d", &parameter);
    return parameter; // returning variable
}