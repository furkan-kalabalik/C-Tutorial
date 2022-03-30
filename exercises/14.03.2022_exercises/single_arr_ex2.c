#include <stdio.h>

int main() {
    int exampleArray2[7] = {2, 7, 4, 7, 8, 3, 4};

    for(int i = 0; i < 7; i++){
        for(int j = i; j < 7; j++) {
            if(i != j && exampleArray2[i] == exampleArray2[j])
            {
                printf("%d ", exampleArray2[i]);
            }
        }
    }
}