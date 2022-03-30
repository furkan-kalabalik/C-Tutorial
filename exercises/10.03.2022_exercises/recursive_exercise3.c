#include <stdio.h>

int lcm_of_two_numbers(int first_num,int second_num,int iteration_num);

int main()
{
    int first_num;
    int second_num;
    int result;

    printf("Enter the first number:");
    scanf("%d",&first_num);

    printf("Enter the second number:");
    scanf("%d",&second_num);

    if(first_num > second_num)
        result = lcm_of_two_numbers(second_num, first_num, 1);
    else
        result = lcm_of_two_numbers(first_num, second_num, 1);

    printf("LCM of %d and %d = %d \n\r",first_num,second_num,result);
}

int lcm_of_two_numbers(int first_num,int second_num,int iteration_num)
{
    int max = second_num * iteration_num;
    if((max % first_num == 0) && (max % second_num == 0))
    {
        return max;
    }
    else
    {
        iteration_num += 1;
        return lcm_of_two_numbers(first_num, second_num, iteration_num);
    }
}