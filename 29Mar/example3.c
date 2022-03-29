#include <stdio.h>

int main() {
    int *somePointer = NULL;
    printf("Value at somePointer: %d\n", *(somePointer));
    if(somePointer == NULL) {
        printf("somePointer is NULL\n");
    }
    else {
        printf("somePointer is not NULL\n");
    }
}