#include <stdio.h>

int main() {
    int array1[2][2] = {{1,2},
                        {4,5}};
    int array2[2][2] = {{1,2},
                        {3,5}};
    int flag = 1; //Assuming array1 == array2

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if(array1[i][j] != array2[i][j]) {
                flag = 0;
            }
            if(flag == 0){
                break;
            }
        }
        if(flag == 0) {
            break;
        }
    }
    
    if(flag == 1) {
        printf("Arrays are equal.\n");
    } else {
        printf("Arrays are not equal.\n");
    }
}