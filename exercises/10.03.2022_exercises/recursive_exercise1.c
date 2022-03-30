#include <stdio.h>

int sum_of_even_numbers (int lower_limit, int upper_limit);

int main()
{
    int lower_limit;
    int upper_limit;
    int result;

    printf("Input lower limit:");
    scanf("%d",&lower_limit);

    printf("Input upper limit:");
    scanf("%d",&upper_limit);

    result = sum_of_even_numbers(lower_limit,upper_limit);

    printf("Some of even number between %d to %d : %d",
            lower_limit,upper_limit,result);

    return 0;
}

int sum_of_even_numbers (int lower_limit, int upper_limit)
{
    int is_even = 0;

    if(lower_limit => upper_limit)
        return 0;
    
    is_even = lower_limit % 2;

    if(is_even == 0)
    {
        return lower_limit + sum_of_even_numbers(lower_limit+1,upper_limit);
    }
    else
    {
        return sum_of_even_numbers(lower_limit+1,upper_limit);
    }
}

