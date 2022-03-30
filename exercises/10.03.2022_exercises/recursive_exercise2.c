#include <stdio.h>

int hcf_of_two(int first_num, int second_num);

int main()
{
    int first_num;
    int second_num;
    int result;

    printf("Input first number:");
    scanf("%d",&first_num);

    printf("Input second number:");
    scanf("%d",&second_num);

    result = hcf_of_two(first_num, second_num);

    printf("HCF of %d and %d = %d",
            first_num,second_num,result);
}

int hcf_of_two(int first_num, int second_num)
{
    if(second_num == 0)
        return first_num;
    else
        return hcf_of_two(second_num, first_num%second_num);
}

