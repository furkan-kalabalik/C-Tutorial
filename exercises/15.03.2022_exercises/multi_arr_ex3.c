#include <stdio.h>

int main() {
int notes[5][3] = {
                    {70, 34, 67}, //-->Student0
                    {42, 15, 24}, //-->Student1
                    {43, 53, 64}, //-->Student2
                    {95, 85, 99}, //-->Student3
                    {100, 63, 89} //-->Student4
                };
    int maxValue = 0;
    int maxRow;
    for (int i = 0; i < 5; i++)
    {
        int sum = 0;
        int average = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += notes[i][j];
        }
        average = sum / 3;
        if(average > maxValue) {
            maxValue = average;
            maxRow = i;
        }
    }

    printf("Most succesful student at the %d row.\n", maxRow);  
}