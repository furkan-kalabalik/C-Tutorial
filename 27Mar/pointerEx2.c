#include<stdio.h>

void printArrayPointer(int *x, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", x[i]);
    }
    printf("\n");
}

void printArray(int x[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", x[i]);
    }
    printf("\n");
}

void changeElementWithIndexPointer(int *x, int n, 
    int index, int value) {
    x[index] = value;
}

void changeElementWithIndex(int x[], int n, 
    int index, int value) {
    x[index] = value;
}

int main() {
    int x[4] = {1, 2, 3, 4};
    
    // printArray(x, 4);
    // printArrayPointer(x, 4);

    // changeElementWithIndex(x, 4, 1, 100);
    // changeElementWithIndexPointer(x, 4, 1, 100);

    // printArray(x, 4);
    // printArrayPointer(x, 4);

    printArray(&x[2], 2);
}