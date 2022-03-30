#include <stdio.h>

int maxSubArray(int arr[]) {
    int max = 0;
    int maxIndex = 0;
    for(int i = 0; i <= 13-3; i++){
        int sum = 0;
        for(int j = i; j < i+3; j++){
            sum += arr[j];
        }
        if(sum > max){
            maxIndex = i;
            max = sum;
        }
    }
    return maxIndex;
}

int main()
{
    int arr[13] = {1, 33, 4, 55, 6, 77, 3, 11, 4, 66, 7, 87, 78};
    printf("Max subarray index: %d\n", maxSubArray(arr));
    return 0;
}
