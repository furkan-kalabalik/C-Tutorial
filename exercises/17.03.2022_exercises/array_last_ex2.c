#include <stdio.h>

int calculateFrequency(int arr[], int x){
    int i;
    int count = 0;
    for(i = 0; i < 13; i++){
        if(arr[i] == x){
            count++;
        }
    }
    return count;
}

int main()
{
    int arr[13] = {1, 2, 3, 4, 1, 3,14, 13, 45, 56, 3, 5, 7};
    return 0;
}
