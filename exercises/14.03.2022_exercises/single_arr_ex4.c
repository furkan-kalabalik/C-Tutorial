#include <stdio.h>

int main() {
    int exampleArray4[5] = {1, 15, 39, 75, 92}; 
    int number;
    printf("Enter difference: ");
    scanf("%d", &number);
    int flag = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if(exampleArray4[i]-exampleArray4[j] == number)
            {
                flag = 1;
                printf("Pairs: (%d %d)\n", exampleArray4[i],exampleArray4[j]);
            }
        }
        
    }
    
    if(flag == 0) {
        printf("No pair found\n");
    }
}