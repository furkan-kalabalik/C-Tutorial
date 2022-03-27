#include <stdio.h>

void printArray(int *ptr, int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(ptr+i));
    }
    printf("\n");
}

void prinArrayReverse(int *ptr, int size){
    for (int i = size-1; i >= 0; i--)
    {
        printf("%d ", *(ptr+i));
    }
    printf("\n");
}

void printArrayFromIndex(int *ptr, int size, int index){
    for (int i = index; i < size; i++)
    {
        printf("%d ", *(ptr+i));
    }
    printf("\n");
}

int main() {
    int intArray[10] = {1,2,3,4,5,6,7,8,9,10};
    printArray(intArray, 10);
    prinArrayReverse(intArray, 10);
    printArrayFromIndex(intArray, 10, 3);
}