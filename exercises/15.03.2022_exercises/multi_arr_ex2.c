#include <stdio.h>

int main() {
    int array2d[5][5] = {
                    {0, 1, 0, 1, 1}, //----> 3
                    {0, 1, 1, 1, 1}, //----> 4 
                    {1, 0, 0, 1, 0}, //----> 2
                    {0, 0, 0, 0, 0}, //----> 0
                    {1, 0, 0, 0, 1} //----> 2
                };
    int maxValue = 0;
    int maxRow = 0;
    for (int i = 0; i < 5; i++)
    {
        int counter = 0;
        for (int j = 0; j < 5; j++) //Processing row
        {
            if(array2d[i][j] == 1)
            {
                counter++;
            }
        }
        if(counter > maxValue)
        {
            maxRow = i;
            maxValue = counter;
        }
    }
    
    printf("Maximum 1s is: %d\nRow Number: %d\n", maxValue, maxRow);
}